; ..\X86\dxgi.lib PROTOTYPES
; ~~~~~~~~~~~~~~~~~~~~~~~~~~

CreateDXGIFactory PROTO :DWORD,:DWORD
CreateDXGIFactory1 PROTO :DWORD,:DWORD
CreateDXGIFactory2 PROTO :DWORD,:DWORD,:DWORD
DXGID3D10CreateDevice PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DXGID3D10CreateLayeredDevice PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
DXGID3D10GetLayeredDeviceSize PROTO :DWORD,:DWORD
DXGID3D10RegisterLayers PROTO :DWORD,:DWORD
DXGIGetDebugInterface1 PROTO :DWORD,:DWORD,:DWORD
DXGIReportAdapterConfiguration PROTO :DWORD
