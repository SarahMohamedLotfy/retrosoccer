; ..\X86\d3d10.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~~

D3D10CompileEffectFromMemory PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3D10CompileShader PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3D10CreateBlob PROTO :DWORD,:DWORD
D3D10CreateDevice PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3D10CreateDeviceAndSwapChain PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3D10CreateEffectFromMemory PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3D10CreateEffectPoolFromMemory PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3D10CreateStateBlock PROTO :DWORD,:DWORD,:DWORD
D3D10DisassembleEffect PROTO :DWORD,:DWORD,:DWORD
D3D10DisassembleShader PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3D10GetGeometryShaderProfile PROTO :DWORD
D3D10GetInputAndOutputSignatureBlob PROTO :DWORD,:DWORD,:DWORD
D3D10GetInputSignatureBlob PROTO :DWORD,:DWORD,:DWORD
D3D10GetOutputSignatureBlob PROTO :DWORD,:DWORD,:DWORD
D3D10GetPixelShaderProfile PROTO :DWORD
D3D10GetShaderDebugInfo PROTO :DWORD,:DWORD,:DWORD
D3D10GetVersion PROTO
D3D10GetVertexShaderProfile PROTO :DWORD
D3D10PreprocessShader PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
D3D10ReflectShader PROTO :DWORD,:DWORD,:DWORD
D3D10RegisterLayers PROTO
D3D10StateBlockMaskDifference PROTO :DWORD,:DWORD,:DWORD
D3D10StateBlockMaskDisableAll PROTO :DWORD
D3D10StateBlockMaskDisableCapture PROTO :DWORD,:DWORD,:DWORD,:DWORD
D3D10StateBlockMaskEnableAll PROTO :DWORD
D3D10StateBlockMaskEnableCapture PROTO :DWORD,:DWORD,:DWORD,:DWORD
D3D10StateBlockMaskGetSetting PROTO :DWORD,:DWORD,:DWORD
D3D10StateBlockMaskIntersect PROTO :DWORD,:DWORD,:DWORD
D3D10StateBlockMaskUnion PROTO :DWORD,:DWORD,:DWORD
