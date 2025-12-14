#include <mem_funcs.h>

void *memcpy(void *dst, const void *src, s32 n) {
    const unsigned char *p = (unsigned char *) src;
    unsigned char *q       = (unsigned char *) dst;

    for (n++; --n;) {
        *q++ = *p++;
    }

    return dst;
}

void *memmove(void *dst, const void *src, size_t len) {
    unsigned char *csrc;
    unsigned char *cdst;

    int reverse = (unsigned int) src < (unsigned int) dst;

    if (!reverse) {
        for (csrc = (const char *) src, cdst = (char *) dst, len++; --len;) {
            *++cdst = *++csrc;
        }
    } else {
        for (csrc = (const char *) src + len, cdst = (char *) dst + len, len++; --len;) {
            *--cdst = *--csrc;
        }
    }

    return dst;
}

void *memset(void *dest, s32 val, s32 n) {
    __fill_mem(dest, val, n);
    return dest;
}

void *memchr(const void *src, s32 val, s32 n) {
    const u8 *p;

    u32 v = (val & 0xff);

    for (p = (u8 *) src, n++; --n;) {
        if (*p++ == v) {
            return ((void *) (p - 1));
        }
    }

    return NULL;
}

int memcmp(const void *src1, const void *src2, int n) {
    const u8 *p1;
    const u8 *p2;

    for (p1 = (const u8 *) src1, p2 = (const u8 *) src2, n++; --n;) {
        if (*p1++ != *p2++) {
            return ((*--p1 < *--p2) ? -1 : +1);
        }
    }

    return 0;
}
