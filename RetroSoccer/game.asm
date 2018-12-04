include common.inc

AABB STRUCT
	x0 uint32 ?
	y0 uint32 ?
	x1 uint32 ?
	y1 uint32 ?
AABB ENDS

pointInBB proto a:AABB, p:vec

.CONST
playerOffsetY int32 0-SPR_PLAYER_HEIGHT/2, ;s0
		-74-SPR_PLAYER_HEIGHT/2, ;s1
		+74-SPR_PLAYER_HEIGHT/2, 
		-2*84-SPR_PLAYER_HEIGHT/2, ;s2
		-84-SPR_PLAYER_HEIGHT/2, 
		-SPR_PLAYER_HEIGHT/2, 
		+84-SPR_PLAYER_HEIGHT/2, 
		+2*84-SPR_PLAYER_HEIGHT/2,
		-125-SPR_PLAYER_HEIGHT/2, ;s3
		-SPR_PLAYER_HEIGHT/2, 
		+125-SPR_PLAYER_HEIGHT/2
playerStick uint32 0, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3
stickUpperLimit uint32 472, 400, 306, 348
stickLowerLimit uint32 25, 98, 194, 150
firstStickX uint32 39, 168, 336, 534
secStickX uint32 761, 632, 464, 266

MAIN_SCREEN equ 0
GAME_SCREEN equ 1
GAME_OVER_SCREEN equ 2

BALL_START_FIRST equ <358,245>
BALL_START_SEC equ <442,243>
RED_PLAYER_MOVING_DISTANCE equ 7
KICK_DEFAULT_DIST equ 8
PLAYER_COLOR_BLUE equ 0
PLAYER_COLOR_RED equ 1

LV1_MATCH_TIME equ 120*1000
LV1_BALL_SPD equ 3
LV2_MATCH_TIME equ 80*1000
LV2_BALL_SPD equ 7

; sprite sheet info
BKG_CLR equ 5a5754h
SPR_PLAYER_HEIGHT equ 31
SPR_PLAYER_WIDTH equ 21
SPR_BALL_LEN equ 18
SPR_LEG_WIDTH equ 19
SPR_LEG_HEIGHT equ 13
SPR_BLUE_PLAYER0 equ <59,0,SPR_PLAYER_WIDTH,SPR_PLAYER_HEIGHT,BKG_CLR>
SPR_BLUE_PLAYER1 equ <38,0,SPR_PLAYER_WIDTH,SPR_PLAYER_HEIGHT,BKG_CLR>
SPR_RED_PLAYER0 equ <59,31,SPR_PLAYER_WIDTH,SPR_PLAYER_HEIGHT,BKG_CLR>
SPR_RED_PLAYER1 equ <38,31,SPR_PLAYER_WIDTH,SPR_PLAYER_HEIGHT,BKG_CLR>
SPR_BLUE_LEG0 equ <19,0,SPR_LEG_WIDTH,SPR_LEG_HEIGHT,BKG_CLR>
SPR_BLUE_LEG1 equ <0,0,SPR_LEG_WIDTH,SPR_LEG_HEIGHT,BKG_CLR>
SPR_RED_LEG0 equ <19,31,SPR_LEG_WIDTH,SPR_LEG_HEIGHT,BKG_CLR>
SPR_RED_LEG1 equ <0,31,SPR_LEG_WIDTH,SPR_LEG_HEIGHT,BKG_CLR>
SPR_BALL equ <80,0,SPR_BALL_LEN,SPR_BALL_LEN,BKG_CLR>

.DATA
fieldFileName db "assets/field.bmp",0
spritesFileName db "assets/spritesheet.bmp",0
mainScreenFileName db "assets/mainScreen.bmp",0
gameOverScreenFileName db "assets/gameOverScreen.bmp",0
field Bitmap ?
sprites Bitmap ?
mainScreenBmp Bitmap ?
gameOverScreenBmp Bitmap ?
bluePen Pen ?
redPen Pen ?
elapsedTime uint32 0

screen uint32 MAIN_SCREEN

level uint32 1
ballSpeedScalar uint32 ?
matchTotalTime uint32 ?

; level buttons
lvl1BoxBB AABB <>
lvl2BoxBB AABB <>

; ball
ballPos vec <>
ballSpd vec <>

; first player
firstPlayerScore uint32 0
firstPlayerColor uint32 PLAYER_COLOR_BLUE
firstStickSelected bool 4 dup(FALSE)
firstStickY uint32 4 dup(250)
firstPlayerX uint32 11 dup(?)
firstPlayerY uint32 11 dup(?)
firstLeftLegX uint32 11 dup(?)
firstLeftLegY uint32 11 dup(?)
firstRightLegX uint32 11 dup(?)
firstRightLegY uint32 11 dup(?)
firstKick int32 0

; second player
secPlayerScore uint32 0
secPlayerColor uint32 PLAYER_COLOR_RED
secStickSelected bool 4 dup(FALSE)
secStickY uint32 4 dup(250)
secPlayerX uint32 11 dup(?)
secPlayerY uint32 11 dup(?)
secLeftLegX uint32 11 dup(?)
secLeftLegY uint32 11 dup(?)
secRightLegX uint32 11 dup(?)
secRightLegY uint32 11 dup(?)
secKick int32 0
secMovingUpDist int32 0

.CODE
game_asm:

; - called before window is shown
onCreate proc
	invoke vec_set, addr ballPos, BALL_START_FIRST
	invoke vec_set,  addr ballSpd, 0, 0

	invoke loadBitmap, offset fieldFileName
	mov field, eax
	invoke loadBitmap, offset spritesFileName
	mov sprites, eax
	invoke loadBitmap, offset mainScreenFileName
	mov mainScreenBmp, eax
	invoke loadBitmap, offset gameOverScreenFileName
	mov gameOverScreenBmp, eax

	invoke createPen, 3, 0ff0000h ;blue
	mov bluePen, eax
	invoke createPen, 3, 0000ffh ;sec
	mov redPen, eax

	mov lvl1BoxBB.x0, 313
	mov lvl1BoxBB.y0, 237
	mov lvl1BoxBB.x1, 484
	mov lvl1BoxBB.y1, 300

	mov lvl2BoxBB.x0, 313
	mov lvl2BoxBB.y0, 313
	mov lvl2BoxBB.x1, 484
	mov lvl2BoxBB.y1, 379

	ret
onCreate endp

; - called after window is closed
onDestroy proc
	invoke deleteBitmap, field
	invoke deleteBitmap, sprites
	invoke deletePen, bluePen
	invoke deletePen, redPen
	ret
onDestroy endp

; - game logic
onUpdate proc t:uint32
	.IF (screen == MAIN_SCREEN)
		invoke pointInBB, lvl1BoxBB, mousePos
		.if (eax == TRUE)
			invoke isLeftMouseClicked
			.if (eax == TRUE)
				mov ballSpeedScalar, LV1_BALL_SPD
				mov matchTotalTime, LV1_MATCH_TIME
				mov level, 1
				mov screen, GAME_SCREEN
			.endif
		.endif
		invoke pointInBB, lvl2BoxBB, mousePos
		.if (eax == TRUE)
			invoke isLeftMouseClicked
			.if (eax == TRUE)
				mov ballSpeedScalar, LV2_BALL_SPD
				mov matchTotalTime, LV2_MATCH_TIME
				mov level, 2
				mov screen, GAME_SCREEN
			.endif
		.endif
	.ELSEIF (screen == GAME_SCREEN)
		call updateInput
		call updateSticks
		call updatePlayers
		call updateBall

		mov eax, t
		add elapsedTime, eax
		mov eax, elapsedTime
		.IF (eax >= matchTotalTime)
			mov screen, GAME_OVER_SCREEN
		.ENDIF
	.ELSEIF (screen == GAME_OVER_SCREEN)
		
	.ENDIF 
	
	;debugging
	printf 13, 0 ;remove last line
	printf "mouse(%03i,%03i),", mousePos.x, mousePos.y
	printf "f[%i,%i,%i,%i],", firstStickSelected[0], firstStickSelected[1], firstStickSelected[2], firstStickSelected[3]
	printf "s[%i,%i,%i,%i],", secStickSelected[3], secStickSelected[2], secStickSelected[1], secStickSelected[0]
	printf "score(%02i-%02i),", firstPlayerScore, secPlayerScore
	printf "elapsedTime=%i,", elapsedTime
	printf "level=%i,", level

	ret
onUpdate endp

; - game rendering
onDraw proc
	.IF (screen == MAIN_SCREEN)
		invoke renderBitmap, mainScreenBmp, 0, 0, 0, 0, WND_WIDTH, WND_HEIGHT
	.ELSEIF (screen == GAME_SCREEN)
		call drawField
		call drawBall
		call drawSticks
		call drawPlayers
		call writeScore
	.ELSEIF (screen == GAME_OVER_SCREEN)
		invoke renderBitmap, gameOverScreenBmp, 0, 0, 0, 0, WND_WIDTH, WND_HEIGHT
		call printFinalResult
	.ENDIF

	ret
onDraw endp

drawBluePlayer proc playerNumber:uint32
	mov ebx, playerNumber

	.IF (firstPlayerColor == PLAYER_COLOR_BLUE)
		invoke renderTBitmap, sprites, firstLeftLegX[ebx *4], firstLeftLegY[ebx *4], SPR_BLUE_LEG0;left leg
		invoke renderTBitmap, sprites, firstRightLegX[ebx *4], firstRightLegY[ebx *4], SPR_BLUE_LEG0;right leg
		invoke renderTBitmap, sprites, firstPlayerX[ebx *4], firstPlayerY[ebx *4], SPR_BLUE_PLAYER0 ;player
	.ELSE
		invoke renderTBitmap, sprites, firstLeftLegX[ebx *4], firstLeftLegY[ebx *4], SPR_RED_LEG0;left leg
		invoke renderTBitmap, sprites, firstRightLegX[ebx *4], firstRightLegY[ebx *4], SPR_RED_LEG0;right leg
		invoke renderTBitmap, sprites, firstPlayerX[ebx *4], firstPlayerY[ebx *4], SPR_RED_PLAYER0 ;player
	.ENDIF
	ret
drawBluePlayer endp

drawRedPlayer proc playerNumber:uint32
	mov ebx, playerNumber

	.IF (secPlayerColor == PLAYER_COLOR_BLUE)
		invoke renderTBitmap, sprites, secLeftLegX[ebx *4], secLeftLegY[ebx *4], SPR_BLUE_LEG1;left leg
		invoke renderTBitmap, sprites, secRightLegX[ebx *4], secRightLegY[ebx *4], SPR_BLUE_LEG1;right leg
		invoke renderTBitmap, sprites, secPlayerX[ebx *4], secPlayerY[ebx *4], SPR_BLUE_PLAYER1;player
	.ELSE
		invoke renderTBitmap, sprites, secLeftLegX[ebx *4], secLeftLegY[ebx *4], SPR_RED_LEG1;left leg
		invoke renderTBitmap, sprites, secRightLegX[ebx *4], secRightLegY[ebx *4], SPR_RED_LEG1;right leg
		invoke renderTBitmap, sprites, secPlayerX[ebx *4], secPlayerY[ebx *4], SPR_RED_PLAYER1;player
	.ENDIF
	ret
drawRedPlayer endp

drawBall proc
	invoke renderTBitmap, sprites, ballPos.x, ballPos.y, SPR_BALL
	ret
drawBall endp

drawField proc
	invoke renderBitmap, field, 0, 0, 0, 0, WND_WIDTH, WND_HEIGHT
	ret
drawField endp

getBoundingBox proc x:uint32, y:uint32, w:uint32, h:uint32, aabb:ptr AABB
	mov eax, aabb
	assume eax:ptr AABB

	push x
	pop [eax].x0

	push y
	pop [eax].y0

	mov ebx, x
	add ebx, w
	mov [eax].x1, ebx

	mov ebx, y
	add ebx, h
	mov [eax].y1, ebx

	ret
getBoundingBox endp

hasCollided proc a:AABB, b:AABB, collisionDir:ptr vec
	local randomY:int32
	invoke randInRange, -1, 2
	mov randomY, eax

	mov eax, a.x0
	mov ebx, a.y0
	mov ecx, a.x1
	mov edx, a.y1

	.IF     ((eax >= b.x0 && eax <= b.x1) && (ebx >= b.y0 && ebx <= b.y1)) ; right bottom
		invoke vec_set, collisionDir, +2, randomY
		mov eax, TRUE
	.ELSEIF ((ecx >= b.x0 && ecx <= b.x1) && (edx >= b.y0 && edx <= b.y1)) ; left top
		invoke vec_set, collisionDir, -2, randomY
		mov eax, TRUE
	.ELSEIF ((eax >= b.x0 && eax <= b.x1) && (edx >= b.y0 && edx <= b.y1)) ; right top
		invoke vec_set, collisionDir, +2, randomY
		mov eax, TRUE
	.ELSEIF ((ecx >= b.x0 && ecx <= b.x1) && (ebx >= b.y0 && ebx <= b.y1)) ; left bottom
		invoke vec_set, collisionDir, -2, randomY
		mov eax, TRUE
	.ELSE
		invoke vec_set, collisionDir, 0, 0
		mov eax, FALSE
	.ENDIF

	ret
hasCollided endp

updateFirstLegsPositions proc playerNumber:uint32
	; get kick
	local kick:int32

	mov eax, playerNumber
	mov ebx, playerStick[eax *4]

	mov kick, 0
	.IF (firstStickSelected[ebx] == TRUE)
		push firstKick
		pop kick
	.ENDIF

	mov ecx, firstPlayerX[eax *4]
	mov edx, firstPlayerY[eax *4]

	; left leg
	add ecx, kick
	add ecx, 2
	add edx, 4
	mov firstLeftLegX[eax *4], ecx
	mov firstLeftLegY[eax *4], edx

	; right leg
	add edx, SPR_PLAYER_HEIGHT/2+SPR_LEG_HEIGHT/2-9
	mov firstRightLegX[eax *4], ecx
	mov firstRightLegY[eax *4], edx

	ret
updateFirstLegsPositions endp


updateSecLegsPositions proc playerNumber:uint32
	; get kick
	local kick:int32

	mov eax, playerNumber
	mov ebx, playerStick[eax *4]

	mov kick, 0
	.IF (secStickSelected[ebx] == TRUE)
		push secKick
		pop kick
	.ENDIF

	mov ecx, secPlayerX[eax *4]
	mov edx, secPlayerY[eax *4]

	; right leg
	add ecx, kick
	sub ecx, 1
	add edx, 4
	mov secRightLegX[eax *4], ecx
	mov secRightLegY[eax *4], edx

	; left leg
	add edx, SPR_PLAYER_HEIGHT/2+SPR_LEG_HEIGHT/2-9
	mov secLeftLegX[eax *4], ecx
	mov secLeftLegY[eax *4], edx

	ret
updateSecLegsPositions endp

updateFirstPlayersPositions proc playerNumber:uint32
	mov eax, playerNumber
	mov ebx, playerStick[eax *4]
	
	; calculate x,y
	mov ecx, firstStickX[ebx *4]
	mov edx, firstStickY[ebx *4]
	add edx, playerOffsetY[eax *4]

	; store x,y
	mov firstPlayerX[eax *4], ecx
	mov firstPlayerY[eax *4], edx
	ret
updateFirstPlayersPositions endp

updateSecPlayersPositions proc playerNumber:uint32
	mov eax, playerNumber
	mov ebx, playerStick[eax *4]
	
	; calculate x,y
	mov ecx, secStickX[ebx *4]
	mov edx, secStickY[ebx *4]
	add edx, playerOffsetY[eax *4]

	; store x,y
	mov secPlayerX[eax *4], ecx
	mov secPlayerY[eax *4], edx
	ret
updateSecPlayersPositions endp

updateInput proc
	local numOfSelected:uint32
	mov numOfSelected, 0

	; move sticks (first)
	invoke isKeyPressed, VK_Q
	mov firstStickSelected[0], al
	.IF (firstStickSelected[0] == TRUE)
		inc numOfSelected
	.ENDIF

	invoke isKeyPressed, VK_W
	mov firstStickSelected[1], al
	.IF (firstStickSelected[1] == TRUE)
		inc numOfSelected
	.ENDIF

	invoke isKeyPressed, VK_E
	mov firstStickSelected[2], al
	.IF (firstStickSelected[2] == TRUE)
		inc numOfSelected
		.IF (numOfSelected > 2)
			dec numOfSelected
			mov firstStickSelected[2], FALSE
		.ENDIF
	.ENDIF

	invoke isKeyPressed, VK_R
	mov firstStickSelected[3], al
	.IF (firstStickSelected[3] == TRUE)
		inc numOfSelected
		.IF (numOfSelected > 2)
			dec numOfSelected
			mov firstStickSelected[3], FALSE
		.ENDIF
	.ENDIF

	; kick (first)
	mov firstKick, 0
	invoke isLeftMouseClicked
	.IF (eax == TRUE)
		mov firstKick, KICK_DEFAULT_DIST
	.ENDIF
	invoke isRightMouseClicked
	.IF (eax == TRUE)
		mov firstKick, -KICK_DEFAULT_DIST
	.ENDIF

	; move sticks (sec)
	mov numOfSelected, 0
	invoke isKeyPressed, VK_P
	mov secStickSelected[0], al
	.IF (secStickSelected[0] == TRUE)
		inc numOfSelected
	.ENDIF

	invoke isKeyPressed, VK_O
	mov secStickSelected[1], al
	.IF (secStickSelected[1] == TRUE)
		inc numOfSelected
	.ENDIF

	invoke isKeyPressed, VK_I
	mov secStickSelected[2], al
	.IF (secStickSelected[2] == TRUE)
		inc numOfSelected
		.IF (numOfSelected > 2)
			dec numOfSelected
			mov secStickSelected[2], FALSE
		.ENDIF
	.ENDIF

	invoke isKeyPressed, VK_U
	mov secStickSelected[3], al
	.IF (secStickSelected[3] == TRUE)
		inc numOfSelected
		.IF (numOfSelected > 2)
			dec numOfSelected
			mov secStickSelected[3], FALSE
		.ENDIF
	.ENDIF

	mov secMovingUpDist, 0
	invoke isKeyPressed, VK_G
	.IF (eax == TRUE)
		mov secMovingUpDist, -RED_PLAYER_MOVING_DISTANCE
	.ENDIF
	invoke isKeyPressed, VK_B
	.IF (eax == TRUE)
		mov secMovingUpDist, RED_PLAYER_MOVING_DISTANCE
	.ENDIF

	; kick (sec)
	mov secKick, 0
	invoke isKeyPressed, VK_N
	.IF (eax == TRUE)
		mov secKick, KICK_DEFAULT_DIST
	.ENDIF
	invoke isKeyPressed, VK_V
	.IF (eax == TRUE)
	   mov secKick, -KICK_DEFAULT_DIST
	.ENDIF

	ret
updateInput endp

updateSticks proc
	local i:uint32

	mov i, 0
	.WHILE (i < 4)
		; first stick
		mov eax, i
		.IF (firstStickSelected[eax] == TRUE)
			mov ebx, mousePos.y
			mov firstStickY[eax *4], ebx

			; upper
			.IF (ebx > stickUpperLimit[eax *4])
				; firstStickY[i] = stickUpperLimit[i]
				push stickUpperLimit[eax *4]
				pop firstStickY[eax *4]
			.ENDIF

			; lower 
			.IF (ebx < stickLowerLimit[eax *4])
				; firstStickY[i] = stickLowerLimit[i]
				push stickLowerLimit[eax *4]
				pop firstStickY[eax *4]
			.ENDIF
		.ENDIF

		; sec stick
		mov eax, i
		.IF (secStickSelected[eax] == TRUE)
			mov ebx, secMovingUpDist
			add secStickY[eax *4], ebx
			mov ebx, secStickY[eax *4]

			; upper
			.IF (ebx > stickUpperLimit[eax *4])
				; secStickY[i] = stickUpperLimit[i]
				push stickUpperLimit[eax *4]
				pop secStickY[eax *4]
			.ENDIF

			; lower 
			.IF (ebx < stickLowerLimit[eax *4])
				; secStickY[i] = stickLowerLimit[i]
				push stickLowerLimit[eax *4]
				pop secStickY[eax *4]
			.ENDIF
		.ENDIF

		inc i
	.ENDW

	ret
updateSticks endp

updatePlayers proc
	local i:uint32

	mov i, 0
	.WHILE (i < 11)
		invoke updateFirstPlayersPositions, i
		invoke updateFirstLegsPositions, i

		invoke updateSecPlayersPositions, i
		invoke updateSecLegsPositions, i

		inc i
	.ENDW

	ret
updatePlayers endp

updateBall proc
	local ballBB:AABB, legBB:AABB, collided:bool, i:uint32, colDir:vec
	mov collided, FALSE
	invoke getBoundingBox, ballPos.x, ballPos.y, SPR_BALL_LEN, SPR_BALL_LEN, addr ballBB

	; detect collision with goals
	.IF (ballBB.y0 >= 175 && ballBB.y1 <= 325)
		.IF (ballBB.x0 <= 11) ; left
			call resetSticks
			inc secPlayerScore
			invoke vec_set, addr ballPos, BALL_START_SEC
			invoke vec_set, addr ballSpd, 0, 0
			ret
		.ELSEIF (ballBB.x1 >= 788) ; right
			call resetSticks
			inc firstPlayerScore
			invoke vec_set, addr ballPos, BALL_START_FIRST
			invoke vec_set, addr ballSpd, 0, 0
			ret
		.ENDIF
	.ENDIF

	; detect collision with walls
	.IF (ballBB.y0 <= 9 || ballBB.y1 >= 490) ; up or down
		invoke vec_negY, addr ballSpd
	.ELSEIF (ballBB.x0 <= 9 || ballBB.x1 >= 790) ; left or right
		invoke vec_negX, addr ballSpd
	.ENDIF
	
	; detect collision with legs
	mov i, 0
	.WHILE (i < 11) 
		; first legs
		mov edx, i
		invoke getBoundingBox, firstLeftLegX[edx *4], firstLeftLegY[edx *4], SPR_LEG_WIDTH, SPR_LEG_HEIGHT*2, addr legBB
		
		mov edx, i
		invoke hasCollided, ballBB, legBB, addr colDir
		mov collided, al
		.BREAK .IF (eax == TRUE)

		; sec legs
		mov edx, i
		invoke getBoundingBox, secRightLegX[edx *4], secRightLegY[edx *4], SPR_LEG_WIDTH, SPR_LEG_HEIGHT*2, addr legBB

		mov edx, i
		invoke hasCollided, ballBB, legBB, addr colDir
		mov collided, al
		.BREAK .IF (eax == TRUE)
		
		inc i	
	.ENDW

	.IF (collided == TRUE)
		invoke vec_smul, ballSpeedScalar, addr colDir
		invoke vec_cpy, addr ballSpd, addr colDir
	.ENDIF

	invoke vec_add, addr ballPos, addr ballSpd

	printf "colDir(%02i,%02i),ballSpd(%02i,%02i),", colDir.x, colDir.y, ballSpd.x, ballSpd.y

	ret
updateBall endp

drawSticks proc
	local i:uint32

	mov i, 0
	.WHILE (i < 4)
		.IF (firstPlayerColor == PLAYER_COLOR_BLUE)
			invoke setPen, bluePen
		.ELSE
			invoke setPen, redPen
		.ENDIF
		mov edx, i
		mov eax, SPR_PLAYER_WIDTH/2
		add eax, firstStickX[edx *4]
		invoke drawLine, eax, 0, eax, WND_HEIGHT

		.IF (secPlayerColor == PLAYER_COLOR_BLUE)
			invoke setPen, bluePen
		.ELSE
			invoke setPen, redPen
		.ENDIF
		mov edx, i
		mov eax, SPR_PLAYER_WIDTH/2
		add eax, secStickX[edx *4]
		invoke drawLine, eax, 0, eax, WND_HEIGHT

		inc i
	.ENDW

	ret
drawSticks endp

drawPlayers proc
	local i:uint32

	mov i, 0
	.WHILE (i < 11)
		invoke drawBluePlayer, i
		invoke drawRedPlayer, i
		inc i
	.ENDW

	ret
drawPlayers endp

resetSticks proc
	mov firstStickY[0], 250
	mov firstStickY[1*4], 250
	mov firstStickY[2*4], 250
	mov firstStickY[3*4], 250
	mov secStickY[0*4], 250
	mov secStickY[1*4], 250
	mov secStickY[2*4], 250
	mov secStickY[3*4], 250
	ret 
resetSticks endp

writeScore proc
	.CONST
	playersNames db "Player1 - Player2",0
	scoreFormat db "%02i - %02i",0 ; to use with sprintf, i.e "04 - 10"
	timeFormat db "Time: %03i",0
	.DATA
	buf db 8 dup(0)
	.CODE
	invoke drawText, offset playersNames, 615, 17, 777, 63, DT_LEFT or DT_CENTER

	invoke sprintf, offset buf, offset scoreFormat, firstPlayerScore, secPlayerScore
	invoke drawText, offset buf, 615, 17+20, 777, 63+20, DT_LEFT or DT_CENTER

	mov eax, elapsedTime
	mov ebx, 1000
	mov edx, 0
	div ebx
	invoke sprintf, offset buf, offset timeFormat, eax
	invoke drawText, offset buf, 36, 17, 128, 63, DT_LEFT or DT_TOP
	ret
writeScore endp

pointInBB proc a:AABB, p:vec
	mov eax, p.x
	mov ebx, p.y

	.if (eax >= a.x0 && eax <= a.x1 && ebx >= a.y0 && ebx <= a.y1)
		mov eax, TRUE
		ret
	.ENDIF

	mov eax, FALSE
	ret
pointInBB endp

printFinalResult proc
	local playerWon:uint32

	.CONST
	finalResultFormat db "Player %i",0
	finalScoreFormat db "Score: %i - %i",0
	drawResultStr db "Draw",0
	.DATA
	finalResultBuf db 50 dup(0)
	.CODE

	mov eax, secPlayerScore
	mov playerWon, 2
	.if (firstPlayerScore > eax)
		mov playerWon, 1
	.elseif (firstPlayerScore == eax)
		invoke drawText, offset drawResultStr, 283, 297, 514, 385, DT_LEFT or DT_CENTER
		ret
	.endif

	invoke sprintf, offset finalResultBuf, offset finalResultFormat, playerWon
	invoke drawText, offset finalResultBuf, 283, 297, 514, 385, DT_LEFT or DT_CENTER

	invoke sprintf, offset finalResultBuf, offset finalScoreFormat, firstPlayerScore, secPlayerScore
	invoke drawText, offset finalResultBuf, 283, 297+20, 514, 385+20, DT_LEFT or DT_CENTER
	ret
printFinalResult endp

end game_asm