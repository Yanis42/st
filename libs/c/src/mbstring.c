#include <locale.h>

char *strncpy(char *dest, const char *src, size_t n);
size_t strlen(const char *str);

s32 mbtowc(s16 *pwc, const char *s, s32 n) {
    return _current_locale.ctype_cmpt_ptr->decode_mb(pwc, s, n);
}

s32 __mbtowc_noconv(u16 *pwc, const char *str, s32 n) {
    const unsigned char *s = (const unsigned char *) str;

    if (s == NULL) {
        return 0;
    }

    if (n == 0) {
        return -1;
    }

    if (pwc != NULL) {
        *pwc = (u8) *s;
    }

    if (*s == 0) {
        return 0;
    }

    return 1;
}

s32 __wctomb_noconv(char *s, u16 wchar) {
    if (s == NULL) {
        return 0;
    }
    *s = wchar;
    return 1;
}

size_t mbstowcs(wchar_t *pDest, const char *pSrc, size_t num) {
    int res;
    unsigned char *src;
    int count;
    size_t src_len;

    src_len = strlen(pSrc);

    if (pDest != 0) {
        src = (unsigned char *) pSrc;

        for (count = 0; count < num; count++) {
            if (*src) {
                res = mbtowc(pDest++, src, src_len);

                if (res > 0) {
                    src += res;
                    src_len -= res;
                } else {
                    return -1;
                }
            } else {
                *pDest = 0;
                break;
            }
        }
    } else {
        count = 0;
    }

    return count;
}
