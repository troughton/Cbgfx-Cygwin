#ifdef CYGWIN
#undef _WIN32 
#undef _WIN64 
#undef WINVER 
#undef _MSC_VER
#undef _WIN32_WINNT
#define _SDL_cpuinfo_h
#include "/usr/include/SDL2/SDL.h"
#else
#include "/usr/local/include/SDL2/SDL.h"
#endif

#ifdef CYGWIN
#define _WIN32
#define _WIN64
#define _MSC_VER 1900
#define WINVER 0x0601
#define _WIN32_WINNT 0x0601
#endif

#include "include/bgfx/bgfxplatform.h"
#include "include/bgfx/bgfx.h"