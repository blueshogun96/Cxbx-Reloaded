// ******************************************************************
// *
// *    .,-:::::    .,::      .::::::::.    .,::      .:
// *  ,;;;'````'    `;;;,  .,;;  ;;;'';;'   `;;;,  .,;; 
// *  [[[             '[[,,[['   [[[__[[\.    '[[,,[['  
// *  $$$              Y$$$P     $$""""Y$$     Y$$$P    
// *  `88bo,__,o,    oP"``"Yo,  _88o,,od8P   oP"``"Yo,  
// *    "YUMMMMMP",m"       "Mm,""YUMMMP" ,m"       "Mm,
// *
// *   Cxbx->Win32->CxbxKrnl->HLEDataBase.cpp
// *
// *  This file is part of the Cxbx project.
// *
// *  Cxbx and Cxbe are free software; you can redistribute them
// *  and/or modify them under the terms of the GNU General Public
// *  License as published by the Free Software Foundation; either
// *  version 2 of the license, or (at your option) any later version.
// *
// *  This program is distributed in the hope that it will be useful,
// *  but WITHOUT ANY WARRANTY; without even the implied warranty of
// *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// *  GNU General Public License for more details.
// *
// *  You should have recieved a copy of the GNU General Public License
// *  along with this program; see the file COPYING.
// *  If not, write to the Free Software Foundation, Inc.,
// *  59 Temple Place - Suite 330, Bostom, MA 02111-1307, USA.
// *
// *  (c) 2002-2003 Aaron Robinson <caustik@caustik.com>
// *
// *  All rights reserved
// *
// ******************************************************************
#define _CXBXKRNL_INTERNAL
#define _XBOXKRNL_LOCAL_

#undef FIELD_OFFSET     // prevent macro redefinition warnings
#include <windows.h>

// ******************************************************************
// * prevent name collisions
// ******************************************************************
namespace xapi
{
    #include "EmuXapi.h"
};

#include "HLEDataBase.h"

// ******************************************************************
// * prevent name collisions
// ******************************************************************
namespace xd3d8
{
    #include "xd3d8.h"
};

#include "Xapi.1.0.3911.inl"
#include "Xapi.1.0.4034.inl"
#include "Xapi.1.0.4361.inl"
#include "Xapi.1.0.4627.inl"
#include "D3D8.1.0.3925.inl"
#include "D3D8.1.0.4034.inl"
#include "D3D8.1.0.4361.inl"
#include "D3D8.1.0.4627.inl"

// ******************************************************************
// * HLEDataBase
// ******************************************************************
HLEData HLEDataBase[] =
{
    // Xapilib Version 1.0.3911
    {
        "XAPILIB",
        1, 0, 3911,
        XAPI_1_0_3911,
        XAPI_1_0_3911_SIZE
    },
    // Xapilib Version 1.0.4361
    {
        "XAPILIB",
        1, 0, 4361,
        XAPI_1_0_4361,
        XAPI_1_0_4361_SIZE
    },
    // Xapilib Version 1.0.4034
    {
        "XAPILIB",
        1, 0, 4034,
        XAPI_1_0_4034,
        XAPI_1_0_4034_SIZE
    },
    // Xapilib Version 1.0.4627
    {
        "XAPILIB",
        1, 0, 4627,
        XAPI_1_0_4627,
        XAPI_1_0_4627_SIZE
    },
    // D3D8 Version 1.0.3925
    {
        "D3D8",
        1, 0, 3925,
        D3D8_1_0_3925,
        D3D8_1_0_3925_SIZE
    },
    // D3D8 Version 1.0.4034
    {
        "D3D8",
        1, 0, 4034,
        D3D8_1_0_4034,
        D3D8_1_0_4034_SIZE
    },
    // D3D8 Version 1.0.4361
    {
        "D3D8",
        1, 0, 4361,
        D3D8_1_0_4361,
        D3D8_1_0_4361_SIZE
    },
    // D3D8 Version 1.0.4627
    {
        "D3D8",
        1, 0, 4627,
        D3D8_1_0_4627,
        D3D8_1_0_4627_SIZE
    },
};

// ******************************************************************
// * HLEDataBaseSize
// ******************************************************************
extern uint32 HLEDataBaseSize = sizeof(HLEDataBase);