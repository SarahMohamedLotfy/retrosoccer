; ..\X86\WER.LIB PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~

FwsWrap PROTO :DWORD,:DWORD
MmsCreate PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
MmsFree PROTO :DWORD
MmsGetSize PROTO :DWORD,:DWORD
WerAddExcludedApplication PROTO :DWORD,:DWORD
WerRemoveExcludedApplication PROTO :DWORD,:DWORD
WerReportAddDump PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WerReportAddFile PROTO :DWORD,:DWORD,:DWORD,:DWORD
WerReportCloseHandle PROTO :DWORD
WerReportCreate PROTO :DWORD,:DWORD,:DWORD,:DWORD
WerReportSetParameter PROTO :DWORD,:DWORD,:DWORD,:DWORD
WerReportSetUIOption PROTO :DWORD,:DWORD,:DWORD
WerReportSubmit PROTO :DWORD,:DWORD,:DWORD,:DWORD
WerpAddFile PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WerpAddFileBuffer PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WerpAddFileCallback PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
WerpAuxmdDumpProcessImages PROTO :DWORD,:DWORD
WerpAuxmdDumpRegisteredBlocks PROTO :DWORD
WerpAuxmdFree PROTO :DWORD
WerpAuxmdFreeCopyBuffer PROTO :DWORD
WerpAuxmdHashVaRanges PROTO :DWORD,:DWORD
WerpAuxmdInitialize PROTO :DWORD,:DWORD,:DWORD,:DWORD
WerpAuxmdMapFile PROTO :DWORD
WerpCreateIntegratorReportId PROTO :DWORD
WerpDownloadResponseOnly PROTO :DWORD,:DWORD
WerpFreeString PROTO :DWORD
WerpGetIntegratorReportId PROTO :DWORD,:DWORD
WerpGetReportConsent PROTO :DWORD,:DWORD,:DWORD
WerpGetStoreLocation PROTO :DWORD,:DWORD,:DWORD
WerpIsDisabled PROTO :DWORD,:DWORD
WerpLaunchResponse PROTO :DWORD,:DWORD
WerpOpenUserQueue PROTO :DWORD
WerpSetAuxiliaryArchivePath PROTO :DWORD,:DWORD
WerpSetCallBack PROTO :DWORD,:DWORD,:DWORD
WerpSetDefaultUserConsent PROTO :DWORD,:DWORD
WerpSetIntegratorReportId PROTO :DWORD,:DWORD
