#ifndef _C_MEM_H
#define _C_MEM_H

#include <types.h>

#ifdef __cplusplus
extern "C" {
#endif

void *memcpy(void *dst, const void *src, s32 n);
void *memmove(void *dst, const void *src, size_t len);
void *memset(void *dest, s32 val, s32 n);
void *memchr(const void *src, s32 val, s32 n);
int memcmp(const void *src1, const void *src2, int n);

#ifdef __cplusplus
}
#endif

#endif
