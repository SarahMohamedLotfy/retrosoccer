; ..\X86\msdmo.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~

DMOEnum PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DMOGetName PROTO :DWORD,:DWORD
DMOGetTypes PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DMOGuidToStrA PROTO :DWORD,:DWORD
DMOGuidToStr equ <DMOGuidToStrA>

DMORegister PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DMOStrToGuidA PROTO :DWORD,:DWORD
DMOStrToGuid equ <DMOStrToGuidA>

DMOUnregister PROTO :DWORD,:DWORD
MoCopyMediaType PROTO :DWORD,:DWORD
MoCreateMediaType PROTO :DWORD,:DWORD
MoDeleteMediaType PROTO :DWORD
MoDuplicateMediaType PROTO :DWORD,:DWORD
MoFreeMediaType PROTO :DWORD
MoInitMediaType PROTO :DWORD,:DWORD
