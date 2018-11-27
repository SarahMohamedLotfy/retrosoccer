; ..\X86\avifil32.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

AVIBuildFilterA PROTO :DWORD,:DWORD,:DWORD
AVIBuildFilter equ <AVIBuildFilterA>

AVIClearClipboard PROTO
AVIFileAddRef PROTO :DWORD
AVIFileCreateStreamA PROTO :DWORD,:DWORD,:DWORD
AVIFileCreateStream equ <AVIFileCreateStreamA>

AVIFileEndRecord PROTO :DWORD
AVIFileExit PROTO
AVIFileGetStream PROTO :DWORD,:DWORD,:DWORD,:DWORD
AVIFileInfoA PROTO :DWORD,:DWORD,:DWORD
AVIFileInfo equ <AVIFileInfoA>

AVIFileInit PROTO
AVIFileOpenA PROTO :DWORD,:DWORD,:DWORD,:DWORD
AVIFileOpen equ <AVIFileOpenA>

AVIFileReadData PROTO :DWORD,:DWORD,:DWORD,:DWORD
AVIFileRelease PROTO :DWORD
AVIFileWriteData PROTO :DWORD,:DWORD,:DWORD,:DWORD
AVIGetFromClipboard PROTO :DWORD
AVIMakeCompressedStream PROTO :DWORD,:DWORD,:DWORD,:DWORD
AVIMakeFileFromStreams PROTO :DWORD,:DWORD,:DWORD
AVIMakeStreamFromClipboard PROTO :DWORD,:DWORD,:DWORD
AVIPutFileOnClipboard PROTO :DWORD
AVISaveOptions PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AVISaveOptionsFree PROTO :DWORD,:DWORD
AVISaveVA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AVISaveV equ <AVISaveVA>

AVIStreamAddRef PROTO :DWORD
AVIStreamBeginStreaming PROTO :DWORD,:DWORD,:DWORD,:DWORD
AVIStreamCreate PROTO :DWORD,:DWORD,:DWORD,:DWORD
AVIStreamEndStreaming PROTO :DWORD
AVIStreamFindSample PROTO :DWORD,:DWORD,:DWORD
AVIStreamGetFrame PROTO :DWORD,:DWORD
AVIStreamGetFrameClose PROTO :DWORD
AVIStreamGetFrameOpen PROTO :DWORD,:DWORD
AVIStreamInfoA PROTO :DWORD,:DWORD,:DWORD
AVIStreamInfo equ <AVIStreamInfoA>

AVIStreamLength PROTO :DWORD
AVIStreamOpenFromFileA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AVIStreamOpenFromFile equ <AVIStreamOpenFromFileA>

AVIStreamRead PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AVIStreamReadData PROTO :DWORD,:DWORD,:DWORD,:DWORD
AVIStreamReadFormat PROTO :DWORD,:DWORD,:DWORD,:DWORD
AVIStreamRelease PROTO :DWORD
AVIStreamSampleToTime PROTO :DWORD,:DWORD
AVIStreamSetFormat PROTO :DWORD,:DWORD,:DWORD,:DWORD
AVIStreamStart PROTO :DWORD
AVIStreamTimeToSample PROTO :DWORD,:DWORD
AVIStreamWrite PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AVIStreamWriteData PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreateEditableStream PROTO :DWORD,:DWORD
EditStreamClone PROTO :DWORD,:DWORD
EditStreamCopy PROTO :DWORD,:DWORD,:DWORD,:DWORD
EditStreamCut PROTO :DWORD,:DWORD,:DWORD,:DWORD
EditStreamPaste PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EditStreamSetInfoA PROTO :DWORD,:DWORD,:DWORD
EditStreamSetInfo equ <EditStreamSetInfoA>

EditStreamSetNameA PROTO :DWORD,:DWORD
EditStreamSetName equ <EditStreamSetNameA>

