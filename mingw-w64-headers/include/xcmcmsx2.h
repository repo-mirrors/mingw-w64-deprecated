/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER within this package.
 */
#ifndef _XCMCMSX2_H
#define _XCMCMSX2_H

#ifndef XCMCMSXT_H
#include <xcmcmsxt.h>
#endif

#ifndef MAPIDEFS_H
#include <mapidefs.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

#ifdef MAPIX_H
  STDMETHODIMP_(SCODE) ScMAPIXFromCMC(CMC_session_id cmc_session,ULONG ulFlags,LPCIID lpInterface,LPMAPISESSION *lppMAPISession);
#endif

#define CMC_X_MS_ATTACH_MESSAGE ((CMC_flags) 4)

  typedef struct {
    CMC_message_reference *message;
    CMC_uint32 id;
    CMC_buffer object;
  } CMC_X_MS_ATTACH;

#ifdef __cplusplus
}
#endif
#endif
