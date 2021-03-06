; ..\X86\Gdi32.Lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~

AbortDoc PROTO :DWORD
AbortPath PROTO :DWORD
AddFontMemResourceEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
AddFontResourceA PROTO :DWORD
AddFontResource equ <AddFontResourceA>

AddFontResourceExA PROTO :DWORD,:DWORD,:DWORD
AddFontResourceEx equ <AddFontResourceExA>

AngleArc PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
AnimatePalette PROTO :DWORD,:DWORD,:DWORD,:DWORD
Arc PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ArcTo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BeginPath PROTO :DWORD
BitBlt PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CancelDC PROTO :DWORD
CheckColorsInGamut PROTO :DWORD,:DWORD,:DWORD,:DWORD
ChoosePixelFormat PROTO :DWORD,:DWORD
Chord PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CloseEnhMetaFile PROTO :DWORD
CloseFigure PROTO :DWORD
CloseMetaFile PROTO :DWORD
ColorCorrectPalette PROTO :DWORD,:DWORD,:DWORD,:DWORD
ColorMatchToTarget PROTO :DWORD,:DWORD,:DWORD
CombineRgn PROTO :DWORD,:DWORD,:DWORD,:DWORD
CombineTransform PROTO :DWORD,:DWORD,:DWORD
CopyEnhMetaFileA PROTO :DWORD,:DWORD
CopyEnhMetaFile equ <CopyEnhMetaFileA>

CopyMetaFileA PROTO :DWORD,:DWORD
CopyMetaFile equ <CopyMetaFileA>

CreateBitmap PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateBitmapIndirect PROTO :DWORD
CreateBrushIndirect PROTO :DWORD
CreateColorSpaceA PROTO :DWORD
CreateColorSpace equ <CreateColorSpaceA>

CreateCompatibleBitmap PROTO :DWORD,:DWORD,:DWORD
CreateCompatibleDC PROTO :DWORD
CreateDCA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreateDC equ <CreateDCA>

CreateDIBPatternBrush PROTO :DWORD,:DWORD
CreateDIBPatternBrushPt PROTO :DWORD,:DWORD
CreateDIBSection PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateDIBitmap PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateDiscardableBitmap PROTO :DWORD,:DWORD,:DWORD
CreateEllipticRgn PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreateEllipticRgnIndirect PROTO :DWORD
CreateEnhMetaFileA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreateEnhMetaFile equ <CreateEnhMetaFileA>

CreateFontA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateFont equ <CreateFontA>

CreateFontIndirectA PROTO :DWORD
CreateFontIndirect equ <CreateFontIndirectA>

CreateFontIndirectExA PROTO :DWORD
CreateFontIndirectEx equ <CreateFontIndirectExA>

CreateHalftonePalette PROTO :DWORD
CreateHatchBrush PROTO :DWORD,:DWORD
CreateICA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreateIC equ <CreateICA>

CreateMetaFileA PROTO :DWORD
CreateMetaFile equ <CreateMetaFileA>

CreatePalette PROTO :DWORD
CreatePatternBrush PROTO :DWORD
CreatePen PROTO :DWORD,:DWORD,:DWORD
CreatePenIndirect PROTO :DWORD
CreatePolyPolygonRgn PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreatePolygonRgn PROTO :DWORD,:DWORD,:DWORD
CreateRectRgn PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreateRectRgnIndirect PROTO :DWORD
CreateRoundRectRgn PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreateScalableFontResourceA PROTO :DWORD,:DWORD,:DWORD,:DWORD
CreateScalableFontResource equ <CreateScalableFontResourceA>

CreateSolidBrush PROTO :DWORD
D3DKMTAcquireKeyedMutex PROTO :DWORD
D3DKMTAcquireKeyedMutex2 PROTO :DWORD
D3DKMTCacheHybridQueryValue PROTO :DWORD
D3DKMTCheckExclusiveOwnership PROTO
D3DKMTCheckMonitorPowerState PROTO :DWORD
D3DKMTCheckMultiPlaneOverlaySupport PROTO :DWORD
D3DKMTCheckOcclusion PROTO :DWORD
D3DKMTCheckSharedResourceAccess PROTO :DWORD
D3DKMTCheckVidPnExclusiveOwnership PROTO :DWORD
D3DKMTCloseAdapter PROTO :DWORD
D3DKMTConfigureSharedResource PROTO :DWORD
D3DKMTCreateAllocation PROTO :DWORD
D3DKMTCreateAllocation2 PROTO :DWORD
D3DKMTCreateContext PROTO :DWORD
D3DKMTCreateDCFromMemory PROTO :DWORD
D3DKMTCreateDevice PROTO :DWORD
D3DKMTCreateKeyedMutex PROTO :DWORD
D3DKMTCreateKeyedMutex2 PROTO :DWORD
D3DKMTCreateOutputDupl PROTO :DWORD
D3DKMTCreateOverlay PROTO :DWORD
D3DKMTCreateSynchronizationObject PROTO :DWORD
D3DKMTCreateSynchronizationObject2 PROTO :DWORD
D3DKMTDestroyAllocation PROTO :DWORD
D3DKMTDestroyContext PROTO :DWORD
D3DKMTDestroyDCFromMemory PROTO :DWORD
D3DKMTDestroyDevice PROTO :DWORD
D3DKMTDestroyKeyedMutex PROTO :DWORD
D3DKMTDestroyOutputDupl PROTO :DWORD
D3DKMTDestroyOverlay PROTO :DWORD
D3DKMTDestroySynchronizationObject PROTO :DWORD
D3DKMTEnumAdapters PROTO :DWORD
D3DKMTEscape PROTO :DWORD
D3DKMTFlipOverlay PROTO :DWORD
D3DKMTGetCachedHybridQueryValue PROTO :DWORD
D3DKMTGetContextInProcessSchedulingPriority PROTO :DWORD
D3DKMTGetContextSchedulingPriority PROTO :DWORD
D3DKMTGetDeviceState PROTO :DWORD
D3DKMTGetDisplayModeList PROTO :DWORD
D3DKMTGetMultisampleMethodList PROTO :DWORD
D3DKMTGetOverlayState PROTO :DWORD
D3DKMTGetPresentHistory PROTO :DWORD
D3DKMTGetPresentQueueEvent PROTO :DWORD,:DWORD
D3DKMTGetProcessSchedulingPriorityClass PROTO :DWORD,:DWORD
D3DKMTGetRuntimeData PROTO :DWORD
D3DKMTGetScanLine PROTO :DWORD
D3DKMTGetSharedPrimaryHandle PROTO :DWORD
D3DKMTGetSharedResourceAdapterLuid PROTO :DWORD
D3DKMTInvalidateActiveVidPn PROTO :DWORD
D3DKMTLock PROTO :DWORD
D3DKMTNetDispGetNextChunkInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DKMTNetDispQueryMiracastDisplayDeviceStatus PROTO :DWORD,:DWORD
D3DKMTNetDispQueryMiracastDisplayDeviceSupport PROTO :DWORD
D3DKMTNetDispStartMiracastDisplayDevice2 PROTO :DWORD,:DWORD,:DWORD
D3DKMTNetDispStopMiracastDisplayDevice PROTO :DWORD,:DWORD
D3DKMTOfferAllocations PROTO :DWORD
D3DKMTOpenAdapterFromDeviceName PROTO :DWORD
D3DKMTOpenAdapterFromGdiDisplayName PROTO :DWORD
D3DKMTOpenAdapterFromHdc PROTO :DWORD
D3DKMTOpenAdapterFromLuid PROTO :DWORD
D3DKMTOpenKeyedMutex PROTO :DWORD
D3DKMTOpenKeyedMutex2 PROTO :DWORD
D3DKMTOpenNtHandleFromName PROTO :DWORD
D3DKMTOpenResource PROTO :DWORD
D3DKMTOpenResource2 PROTO :DWORD
D3DKMTOpenResourceFromNtHandle PROTO :DWORD
D3DKMTOpenSyncObjectFromNtHandle PROTO :DWORD
D3DKMTOpenSynchronizationObject PROTO :DWORD
D3DKMTOutputDuplGetFrameInfo PROTO :DWORD
D3DKMTOutputDuplGetMetaData PROTO :DWORD
D3DKMTOutputDuplGetPointerShapeData PROTO :DWORD
D3DKMTOutputDuplPresent PROTO :DWORD
D3DKMTOutputDuplReleaseFrame PROTO :DWORD
D3DKMTPinDirectFlipResources PROTO :DWORD
D3DKMTPollDisplayChildren PROTO :DWORD
D3DKMTPresent PROTO :DWORD
D3DKMTPresentMultiPlaneOverlay PROTO :DWORD
D3DKMTQueryAdapterInfo PROTO :DWORD
D3DKMTQueryAllocationResidency PROTO :DWORD
D3DKMTQueryRemoteVidPnSourceFromGdiDisplayName PROTO :DWORD
D3DKMTQueryResourceInfo PROTO :DWORD
D3DKMTQueryResourceInfoFromNtHandle PROTO :DWORD
D3DKMTQueryStatistics PROTO :DWORD
D3DKMTReclaimAllocations PROTO :DWORD
D3DKMTReleaseKeyedMutex PROTO :DWORD
D3DKMTReleaseKeyedMutex2 PROTO :DWORD
D3DKMTReleaseProcessVidPnSourceOwners PROTO :DWORD
D3DKMTRender PROTO :DWORD
D3DKMTSetAllocationPriority PROTO :DWORD
D3DKMTSetContextInProcessSchedulingPriority PROTO :DWORD
D3DKMTSetContextSchedulingPriority PROTO :DWORD
D3DKMTSetDisplayMode PROTO :DWORD
D3DKMTSetDisplayPrivateDriverFormat PROTO :DWORD
D3DKMTSetGammaRamp PROTO :DWORD
D3DKMTSetProcessSchedulingPriorityClass PROTO :DWORD,:DWORD
D3DKMTSetQueuedLimit PROTO :DWORD
D3DKMTSetStereoEnabled PROTO :DWORD
D3DKMTSetVidPnSourceOwner PROTO :DWORD
D3DKMTSetVidPnSourceOwner1 PROTO :DWORD
D3DKMTShareObjects PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3DKMTSharedPrimaryLockNotification PROTO :DWORD
D3DKMTSharedPrimaryUnLockNotification PROTO :DWORD
D3DKMTSignalSynchronizationObject PROTO :DWORD
D3DKMTSignalSynchronizationObject2 PROTO :DWORD
D3DKMTUnlock PROTO :DWORD
D3DKMTUnpinDirectFlipResources PROTO :DWORD
D3DKMTUpdateOverlay PROTO :DWORD
D3DKMTWaitForIdle PROTO :DWORD
D3DKMTWaitForSynchronizationObject PROTO :DWORD
D3DKMTWaitForSynchronizationObject2 PROTO :DWORD
D3DKMTWaitForVerticalBlankEvent PROTO :DWORD
D3DKMTWaitForVerticalBlankEvent2 PROTO :DWORD
DPtoLP PROTO :DWORD,:DWORD,:DWORD
DeleteColorSpace PROTO :DWORD
DeleteDC PROTO :DWORD
DeleteEnhMetaFile PROTO :DWORD
DeleteMetaFile PROTO :DWORD
DeleteObject PROTO :DWORD
DescribePixelFormat PROTO :DWORD,:DWORD,:DWORD,:DWORD
DeviceCapabilitiesExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DeviceCapabilitiesEx equ <DeviceCapabilitiesExA>

DrawEscape PROTO :DWORD,:DWORD,:DWORD,:DWORD
Ellipse PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EnableEUDC PROTO :DWORD
EndDoc PROTO :DWORD
EndFormPage PROTO :DWORD
EndPage PROTO :DWORD
EndPath PROTO :DWORD
EnumEnhMetaFile PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EnumFontFamiliesA PROTO :DWORD,:DWORD,:DWORD,:DWORD
EnumFontFamilies equ <EnumFontFamiliesA>

EnumFontFamiliesExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EnumFontFamiliesEx equ <EnumFontFamiliesExA>

EnumFontsA PROTO :DWORD,:DWORD,:DWORD,:DWORD
EnumFonts equ <EnumFontsA>

EnumICMProfilesA PROTO :DWORD,:DWORD,:DWORD
EnumICMProfiles equ <EnumICMProfilesA>

EnumMetaFile PROTO :DWORD,:DWORD,:DWORD,:DWORD
EnumObjects PROTO :DWORD,:DWORD,:DWORD,:DWORD
EqualRgn PROTO :DWORD,:DWORD
Escape PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ExcludeClipRect PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ExtCreatePen PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ExtCreateRegion PROTO :DWORD,:DWORD,:DWORD
ExtEscape PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ExtFloodFill PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ExtSelectClipRgn PROTO :DWORD,:DWORD,:DWORD
ExtTextOutA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ExtTextOut equ <ExtTextOutA>

FillPath PROTO :DWORD
FillRgn PROTO :DWORD,:DWORD,:DWORD
FixBrushOrgEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
FlattenPath PROTO :DWORD
FloodFill PROTO :DWORD,:DWORD,:DWORD,:DWORD
FrameRgn PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GdiAlphaBlend PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GdiArtificialDecrementDriver PROTO :DWORD,:DWORD
GdiComment PROTO :DWORD,:DWORD,:DWORD
GdiDeleteSpoolFileHandle PROTO :DWORD
GdiEndDocEMF PROTO :DWORD
GdiEndPageEMF PROTO :DWORD,:DWORD
GdiFlush PROTO
GdiGetBatchLimit PROTO
GdiGetDC PROTO :DWORD
GdiGetDevmodeForPage PROTO :DWORD,:DWORD,:DWORD,:DWORD
GdiGetPageCount PROTO :DWORD
GdiGetPageHandle PROTO :DWORD,:DWORD,:DWORD
GdiGetSpoolFileHandle PROTO :DWORD,:DWORD,:DWORD
GdiGradientFill PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GdiPlayDCScript PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GdiPlayEMF PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GdiPlayJournal PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GdiPlayPageEMF PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GdiPlayPrivatePageEMF PROTO :DWORD,:DWORD,:DWORD
GdiPlayScript PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GdiResetDCEMF PROTO :DWORD,:DWORD
GdiSetBatchLimit PROTO :DWORD
GdiStartDocEMF PROTO :DWORD,:DWORD
GdiStartPageEMF PROTO :DWORD
GdiTransparentBlt PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetArcDirection PROTO :DWORD
GetAspectRatioFilterEx PROTO :DWORD,:DWORD
GetBitmapBits PROTO :DWORD,:DWORD,:DWORD
GetBitmapDimensionEx PROTO :DWORD,:DWORD
GetBkColor PROTO :DWORD
GetBkMode PROTO :DWORD
GetBoundsRect PROTO :DWORD,:DWORD,:DWORD
GetBrushOrgEx PROTO :DWORD,:DWORD
GetCharABCWidthsA PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetCharABCWidths equ <GetCharABCWidthsA>

GetCharABCWidthsFloatA PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetCharABCWidthsFloat equ <GetCharABCWidthsFloatA>

GetCharABCWidthsI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetCharWidth32A PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetCharWidth32 equ <GetCharWidth32A>

GetCharWidthA PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetCharWidth equ <GetCharWidthA>

GetCharWidthFloatA PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetCharWidthFloat equ <GetCharWidthFloatA>

GetCharWidthI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetCharacterPlacementA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetCharacterPlacement equ <GetCharacterPlacementA>

GetClipBox PROTO :DWORD,:DWORD
GetClipRgn PROTO :DWORD,:DWORD
GetColorAdjustment PROTO :DWORD,:DWORD
GetColorSpace PROTO :DWORD
GetCurrentObject PROTO :DWORD,:DWORD
GetCurrentPositionEx PROTO :DWORD,:DWORD
GetDCBrushColor PROTO :DWORD
GetDCOrgEx PROTO :DWORD,:DWORD
GetDCPenColor PROTO :DWORD
GetDIBColorTable PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetDIBits PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetDeviceCaps PROTO :DWORD,:DWORD
GetDeviceGammaRamp PROTO :DWORD,:DWORD
GetEnhMetaFileA PROTO :DWORD
GetEnhMetaFile equ <GetEnhMetaFileA>

GetEnhMetaFileBits PROTO :DWORD,:DWORD,:DWORD
GetEnhMetaFileDescriptionA PROTO :DWORD,:DWORD,:DWORD
GetEnhMetaFileDescription equ <GetEnhMetaFileDescriptionA>

GetEnhMetaFileHeader PROTO :DWORD,:DWORD,:DWORD
GetEnhMetaFilePaletteEntries PROTO :DWORD,:DWORD,:DWORD
GetEnhMetaFilePixelFormat PROTO :DWORD,:DWORD,:DWORD
GetFontAssocStatus PROTO :DWORD
GetFontData PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetFontLanguageInfo PROTO :DWORD
GetFontUnicodeRanges PROTO :DWORD,:DWORD
GetGlyphIndicesA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetGlyphIndices equ <GetGlyphIndicesA>

GetGlyphOutlineA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetGlyphOutline equ <GetGlyphOutlineA>

GetGraphicsMode PROTO :DWORD
GetICMProfileA PROTO :DWORD,:DWORD,:DWORD
GetICMProfile equ <GetICMProfileA>

GetKerningPairsA PROTO :DWORD,:DWORD,:DWORD
GetKerningPairs equ <GetKerningPairsA>

GetLayout PROTO :DWORD
GetLogColorSpaceA PROTO :DWORD,:DWORD,:DWORD
GetLogColorSpace equ <GetLogColorSpaceA>

GetMapMode PROTO :DWORD
GetMetaFileA PROTO :DWORD
GetMetaFile equ <GetMetaFileA>

GetMetaFileBitsEx PROTO :DWORD,:DWORD,:DWORD
GetMetaRgn PROTO :DWORD,:DWORD
GetMiterLimit PROTO :DWORD,:DWORD
GetNearestColor PROTO :DWORD,:DWORD
GetNearestPaletteIndex PROTO :DWORD,:DWORD
GetObjectA PROTO :DWORD,:DWORD,:DWORD
GetObject equ <GetObjectA>

GetObjectType PROTO :DWORD
GetOutlineTextMetricsA PROTO :DWORD,:DWORD,:DWORD
GetOutlineTextMetrics equ <GetOutlineTextMetricsA>

GetPaletteEntries PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetPath PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetPixel PROTO :DWORD,:DWORD,:DWORD
GetPixelFormat PROTO :DWORD
GetPolyFillMode PROTO :DWORD
GetROP2 PROTO :DWORD
GetRandomRgn PROTO :DWORD,:DWORD,:DWORD
GetRasterizerCaps PROTO :DWORD,:DWORD
GetRegionData PROTO :DWORD,:DWORD,:DWORD
GetRelAbs PROTO :DWORD,:DWORD
GetRgnBox PROTO :DWORD,:DWORD
GetStockObject PROTO :DWORD
GetStretchBltMode PROTO :DWORD
GetSystemPaletteEntries PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetSystemPaletteUse PROTO :DWORD
GetTextAlign PROTO :DWORD
GetTextCharacterExtra PROTO :DWORD
GetTextCharset PROTO :DWORD
GetTextCharsetInfo PROTO :DWORD,:DWORD,:DWORD
GetTextColor PROTO :DWORD
GetTextExtentExPointA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetTextExtentExPoint equ <GetTextExtentExPointA>

GetTextExtentExPointI PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetTextExtentPoint32A PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetTextExtentPoint32 equ <GetTextExtentPoint32A>

GetTextExtentPointA PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetTextExtentPoint equ <GetTextExtentPointA>

GetTextExtentPointI PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetTextFaceA PROTO :DWORD,:DWORD,:DWORD
GetTextFace equ <GetTextFaceA>

GetTextMetricsA PROTO :DWORD,:DWORD
GetTextMetrics equ <GetTextMetricsA>

GetViewportExtEx PROTO :DWORD,:DWORD
GetViewportOrgEx PROTO :DWORD,:DWORD
GetWinMetaFileBits PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetWindowExtEx PROTO :DWORD,:DWORD
GetWindowOrgEx PROTO :DWORD,:DWORD
GetWorldTransform PROTO :DWORD,:DWORD
IntersectClipRect PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
InvertRgn PROTO :DWORD,:DWORD
LPtoDP PROTO :DWORD,:DWORD,:DWORD
LineDDA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
LineDD equ <LineDDA>

LineTo PROTO :DWORD,:DWORD,:DWORD
MaskBlt PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ModifyWorldTransform PROTO :DWORD,:DWORD,:DWORD
MoveToEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
OffsetClipRgn PROTO :DWORD,:DWORD,:DWORD
OffsetRgn PROTO :DWORD,:DWORD,:DWORD
OffsetViewportOrgEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
OffsetWindowOrgEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
PaintRgn PROTO :DWORD,:DWORD
PatBlt PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PathToRegion PROTO :DWORD
Pie PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PlayEnhMetaFile PROTO :DWORD,:DWORD,:DWORD
PlayEnhMetaFileRecord PROTO :DWORD,:DWORD,:DWORD,:DWORD
PlayMetaFile PROTO :DWORD,:DWORD
PlayMetaFileRecord PROTO :DWORD,:DWORD,:DWORD,:DWORD
PlgBlt PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
PolyBezier PROTO :DWORD,:DWORD,:DWORD
PolyBezierTo PROTO :DWORD,:DWORD,:DWORD
PolyDraw PROTO :DWORD,:DWORD,:DWORD,:DWORD
PolyPolygon PROTO :DWORD,:DWORD,:DWORD,:DWORD
PolyPolyline PROTO :DWORD,:DWORD,:DWORD,:DWORD
PolyTextOutA PROTO :DWORD,:DWORD,:DWORD
PolyTextOut equ <PolyTextOutA>

Polygon PROTO :DWORD,:DWORD,:DWORD
Polyline PROTO :DWORD,:DWORD,:DWORD
PolylineTo PROTO :DWORD,:DWORD,:DWORD
PtInRegion PROTO :DWORD,:DWORD,:DWORD
PtVisible PROTO :DWORD,:DWORD,:DWORD
RealizePalette PROTO :DWORD
RectInRegion PROTO :DWORD,:DWORD
RectVisible PROTO :DWORD,:DWORD
Rectangle PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
RemoveFontMemResourceEx PROTO :DWORD
RemoveFontResourceA PROTO :DWORD
RemoveFontResource equ <RemoveFontResourceA>

RemoveFontResourceExA PROTO :DWORD,:DWORD,:DWORD
RemoveFontResourceEx equ <RemoveFontResourceExA>

ResetDCA PROTO :DWORD,:DWORD
ResetDC equ <ResetDCA>

ResizePalette PROTO :DWORD,:DWORD
RestoreDC PROTO :DWORD,:DWORD
RoundRect PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SaveDC PROTO :DWORD
ScaleViewportExtEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ScaleWindowExtEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SelectBrushLocal PROTO :DWORD,:DWORD
SelectClipPath PROTO :DWORD,:DWORD
SelectClipRgn PROTO :DWORD,:DWORD
SelectFontLocal PROTO :DWORD,:DWORD
SelectObject PROTO :DWORD,:DWORD
SelectPalette PROTO :DWORD,:DWORD,:DWORD
SetAbortProc PROTO :DWORD,:DWORD
SetArcDirection PROTO :DWORD,:DWORD
SetBitmapBits PROTO :DWORD,:DWORD,:DWORD
SetBitmapDimensionEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetBkColor PROTO :DWORD,:DWORD
SetBkMode PROTO :DWORD,:DWORD
SetBoundsRect PROTO :DWORD,:DWORD,:DWORD
SetBrushOrgEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetColorAdjustment PROTO :DWORD,:DWORD
SetColorSpace PROTO :DWORD,:DWORD
SetDCBrushColor PROTO :DWORD,:DWORD
SetDCPenColor PROTO :DWORD,:DWORD
SetDIBColorTable PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetDIBits PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetDIBitsToDevice PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetDeviceGammaRamp PROTO :DWORD,:DWORD
SetEnhMetaFileBits PROTO :DWORD,:DWORD
SetFontEnumeration PROTO :DWORD
SetGraphicsMode PROTO :DWORD,:DWORD
SetICMMode PROTO :DWORD,:DWORD
SetICMProfileA PROTO :DWORD,:DWORD
SetICMProfile equ <SetICMProfileA>

SetLayout PROTO :DWORD,:DWORD
SetMagicColors PROTO :DWORD,:DWORD,:DWORD
SetMapMode PROTO :DWORD,:DWORD
SetMapperFlags PROTO :DWORD,:DWORD
SetMetaFileBitsEx PROTO :DWORD,:DWORD
SetMetaRgn PROTO :DWORD
SetMiterLimit PROTO :DWORD,:DWORD,:DWORD
SetPaletteEntries PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetPixel PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetPixelFormat PROTO :DWORD,:DWORD,:DWORD
SetPixelV PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetPolyFillMode PROTO :DWORD,:DWORD
SetROP2 PROTO :DWORD,:DWORD
SetRectRgn PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
SetRelAbs PROTO :DWORD,:DWORD
SetStretchBltMode PROTO :DWORD,:DWORD
SetSystemPaletteUse PROTO :DWORD,:DWORD
SetTextAlign PROTO :DWORD,:DWORD
SetTextCharacterExtra PROTO :DWORD,:DWORD
SetTextColor PROTO :DWORD,:DWORD
SetTextJustification PROTO :DWORD,:DWORD,:DWORD
SetViewportExtEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetViewportOrgEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetWinMetaFileBits PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetWindowExtEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetWindowOrgEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
SetWorldTransform PROTO :DWORD,:DWORD
StartDocA PROTO :DWORD,:DWORD
StartDoc equ <StartDocA>

StartFormPage PROTO :DWORD
StartPage PROTO :DWORD
StretchBlt PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
StretchDIBits PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
StrokeAndFillPath PROTO :DWORD
StrokePath PROTO :DWORD
SwapBuffers PROTO :DWORD
TextOutA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TextOut equ <TextOutA>

TranslateCharsetInfo PROTO :DWORD,:DWORD,:DWORD
UnrealizeObject PROTO :DWORD
UpdateColors PROTO :DWORD
UpdateICMRegKeyA PROTO :DWORD,:DWORD,:DWORD,:DWORD
UpdateICMRegKey equ <UpdateICMRegKeyA>

WidenPath PROTO :DWORD
gdiPlaySpoolStream PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD

