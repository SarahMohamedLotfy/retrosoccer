; ..\X86\shdocvw.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

AddUrlToFavorites PROTO :DWORD,:DWORD,:DWORD,:DWORD
DllRegisterWindowClasses PROTO :DWORD
DoAddToFavDlg PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DoFileDownload PROTO :DWORD
DoFileDownloadEx PROTO :DWORD,:DWORD
DoOrganizeFavDlg PROTO :DWORD,:DWORD
DoPrivacyDlg PROTO :DWORD,:DWORD,:DWORD,:DWORD
HlinkFindFrame PROTO :DWORD,:DWORD
HlinkFrameNavigate PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
HlinkFrameNavigateNHL PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ImportPrivacySettings PROTO :DWORD,:DWORD,:DWORD
OpenURL PROTO :DWORD,:DWORD,:DWORD,:DWORD
SHGetIDispatchForFolder PROTO :DWORD,:DWORD
SetQueryNetSessionCount PROTO :DWORD
SoftwareUpdateMessageBox PROTO :DWORD,:DWORD,:DWORD,:DWORD
URLQualifyA PROTO :DWORD,:DWORD,:DWORD
URLQualify equ <URLQualifyA>

