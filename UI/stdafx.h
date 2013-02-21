//////////////////////////////////////////////////
//
// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//
//////////////////////////////////////////////////

//======================================
#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>



// include guard
#ifndef UI_STDAFX_H
#define UI_STDAFX_H

//======================================
// dependencies

#define WIN32_LEAN_AND_MEAN // Exclude rarely-used stuff from Windows headers

// Windows Header Files:
#include <windows.h>

// C RunTime Header Files
#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>

// DirectX Header Files
#include <d3d9.h>
#include <d3dx9tex.h>
#include <Dxerr.h>
#include "D3dx9core.h"

// Globals
extern LPDIRECT3D9        g_pD3D;        // The DirectX object
extern LPDIRECT3DDEVICE9  g_pD3DDevice;  // The DirectX device
extern IDirect3DSurface9* g_pBackBuffer; // The DirectX backbuffer

#endif // !UI_STDAFX_H
