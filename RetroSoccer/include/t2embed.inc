; ..\X86\t2embed.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

TTCharToUnicode PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TTDeleteEmbeddedFont PROTO :DWORD,:DWORD,:DWORD
TTEmbedFont PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TTEmbedFontEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TTEmbedFontFromFileA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TTEmbedFontFromFile equ <TTEmbedFontFromFileA>

TTEnableEmbeddingForFacename PROTO :DWORD,:DWORD
TTGetEmbeddedFontInfo PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TTGetEmbeddingType PROTO :DWORD,:DWORD
TTGetNewFontName PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TTIsEmbeddingEnabled PROTO :DWORD,:DWORD
TTIsEmbeddingEnabledForFacename PROTO :DWORD,:DWORD
TTLoadEmbeddedFont PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
TTRunValidationTests PROTO :DWORD,:DWORD
TTRunValidationTestsEx PROTO :DWORD,:DWORD
