/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER within this package.
 */
#define __NO_INLINE__
#include <time.h>

extern wchar_t * (__cdecl *__MINGW_IMP_SYMBOL(wctime))(const __time32_t *);

wchar_t *__cdecl _wctime32(const __time32_t *_Time)
{
  return (*__MINGW_IMP_SYMBOL(wctime))(_Time);
}

