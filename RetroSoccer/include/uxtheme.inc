; ..\X86\Uxtheme.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

BeginBufferedAnimation PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BeginBufferedPaint PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
BufferedPaintClear PROTO :DWORD,:DWORD
BufferedPaintInit PROTO
BufferedPaintRenderAnimation PROTO :DWORD,:DWORD
BufferedPaintSetAlpha PROTO :DWORD,:DWORD,:DWORD
BufferedPaintStopAllAnimations PROTO :DWORD
BufferedPaintUnInit PROTO
CloseThemeData PROTO :DWORD
DrawThemeBackground PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DrawThemeBackgroundEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DrawThemeEdge PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DrawThemeIcon PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DrawThemeParentBackground PROTO :DWORD,:DWORD,:DWORD
DrawThemeParentBackgroundEx PROTO :DWORD,:DWORD,:DWORD,:DWORD
DrawThemeText PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DrawThemeTextEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
EnableThemeDialogTexture PROTO :DWORD,:DWORD
EnableTheming PROTO :DWORD
EndBufferedAnimation PROTO :DWORD,:DWORD
EndBufferedPaint PROTO :DWORD,:DWORD
GetBufferedPaintBits PROTO :DWORD,:DWORD,:DWORD
GetBufferedPaintDC PROTO :DWORD
GetBufferedPaintTargetDC PROTO :DWORD
GetBufferedPaintTargetRect PROTO :DWORD,:DWORD
GetCurrentThemeName PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetThemeAnimationProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetThemeAnimationTransform PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetThemeAppProperties PROTO
GetThemeBackgroundContentRect PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetThemeBackgroundExtent PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetThemeBackgroundRegion PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetThemeBitmap PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetThemeBool PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetThemeColor PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetThemeDocumentationProperty PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetThemeEnumValue PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetThemeFilename PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetThemeFont PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetThemeInt PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetThemeIntList PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetThemeMargins PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetThemeMetric PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetThemePartSize PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetThemePosition PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetThemePropertyOrigin PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetThemeRect PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetThemeStream PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetThemeString PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetThemeSysBool PROTO :DWORD,:DWORD
GetThemeSysColor PROTO :DWORD,:DWORD
GetThemeSysColorBrush PROTO :DWORD,:DWORD
GetThemeSysFont PROTO :DWORD,:DWORD,:DWORD
GetThemeSysInt PROTO :DWORD,:DWORD,:DWORD
GetThemeSysSize PROTO :DWORD,:DWORD
GetThemeSysString PROTO :DWORD,:DWORD,:DWORD,:DWORD
GetThemeTextExtent PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetThemeTextMetrics PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetThemeTimingFunction PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetThemeTransitionDuration PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetWindowTheme PROTO :DWORD
HitTestThemeBackground PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
IsAppThemed PROTO
IsCompositionActive PROTO
IsThemeActive PROTO
IsThemeBackgroundPartiallyTransparent PROTO :DWORD,:DWORD,:DWORD
IsThemeDialogTextureEnabled PROTO :DWORD
IsThemePartDefined PROTO :DWORD,:DWORD,:DWORD
OpenThemeData PROTO :DWORD,:DWORD
OpenThemeDataEx PROTO :DWORD,:DWORD,:DWORD
SetThemeAppProperties PROTO :DWORD
SetWindowTheme PROTO :DWORD,:DWORD,:DWORD
SetWindowThemeAttribute PROTO :DWORD,:DWORD,:DWORD,:DWORD
ThemeInitApiHook PROTO :DWORD,:DWORD
