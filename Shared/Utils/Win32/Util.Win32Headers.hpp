// Win32 necessary headers
// Author(s):       AliAssassiN <ailsynthax@gmail.com>
//
// Copyright (c) 2015-2016 The San Andreas Online Open Source Project
//
// Distributed under the MIT license (See accompanying file LICENSE.md or copy at
// https://opensource.org/licenses/MIT)

#pragma once

// Macros
#ifndef WIN32_LEAN_AND_MEAN
#   define WIN32_LEAN_AND_MEAN
#endif

#ifdef WINVER
#   undef WINVER
#endif
#define WINVER 0x0601 // Win7

#ifdef _WIN32_WINNT
#   undef _WIN32_WINNT
#endif
#define _WIN32_WINNT 0x0601 // Win7

// Headers
#include <Windows.h>

// Until custom implementation
#include <cassert>
