#ifndef _C_MBSTRING_H
#define _C_MBSTRING_H

#include <types.h>

#ifdef __cplusplus
extern "C" {
#endif

s32 mbtowc(s16 *pwc, const char *s, s32 n);
s32 __mbtowc_noconv(u16 *pwc, const char *str, s32 n);
s32 __wctomb_noconv(char *s, u16 wchar);
size_t mbstowcs(wchar_t *pDest, const char *pSrc, size_t num);

#ifdef __cplusplus
}
#endif

#endif
