#pragma once

#include "../dxgi/dxgi_include.h"

#include <d3d11_1.h>

// This is not defined in the mingw headers
#ifndef D3D11_1_UAV_SLOT_COUNT
#define D3D11_1_UAV_SLOT_COUNT 64
#endif

// Most of these were copied from d3d11.h
// For some strange reason, we cannot use the structures
// directly, although others from the same header work.
// Some structures are missing from the mingw headers.
typedef struct D3D11_FEATURE_DATA_THREADING {
    BOOL DriverConcurrentCreates;
    BOOL DriverCommandLists;
} D3D11_FEATURE_DATA_THREADING;
typedef struct D3D11_FEATURE_DATA_DOUBLES {
    BOOL DoublePrecisionFloatShaderOps;
} D3D11_FEATURE_DATA_DOUBLES;
typedef struct D3D11_FEATURE_DATA_FORMAT_SUPPORT {
    DXGI_FORMAT InFormat;
    UINT OutFormatSupport;
} D3D11_FEATURE_DATA_FORMAT_SUPPORT;
typedef struct D3D11_FEATURE_DATA_D3D10_X_HARDWARE_OPTIONS {
  BOOL ComputeShaders_Plus_RawAndStructuredBuffers_Via_Shader_4_x;
} D3D11_FEATURE_DATA_D3D10_X_HARDWARE_OPTIONS;
typedef enum D3D11_BUFFEREX_SRV_FLAG { 
  D3D11_BUFFEREX_SRV_FLAG_RAW = 1
} D3D11_BUFFEREX_SRV_FLAG;
typedef struct D3D11_QUERY_DATA_PIPELINE_STATISTICS {
  UINT64 IAVertices;
  UINT64 IAPrimitives;
  UINT64 VSInvocations;
  UINT64 GSInvocations;
  UINT64 GSPrimitives;
  UINT64 CInvocations;
  UINT64 CPrimitives;
  UINT64 PSInvocations;
  UINT64 HSInvocations;
  UINT64 DSInvocations;
  UINT64 CSInvocations;
} D3D11_QUERY_DATA_PIPELINE_STATISTICS;