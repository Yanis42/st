#ifndef TYPES_H
#define TYPES_H

#include <stddef.h>

typedef unsigned long long u64;
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;

typedef long long s64;
typedef int s32;
typedef short s16;
typedef char s8;

typedef float f32;
typedef double f64;

typedef s8 unk8;
typedef s16 unk16;
typedef s32 unk32;

#define CEIL_DIV(a, b) (((a) + (b) - 1) / (b))

#endif
