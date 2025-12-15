#ifndef _C_STDDEF_H
#define _C_STDDEF_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef NULL
    #define NULL (void *) 0
#endif

#ifndef nullptr
    #define nullptr 0
#endif

#define offsetof(ST, M) ((size_t) &(((ST *) 0)->M))

typedef signed long intptr_t;
typedef unsigned long uintptr_t;
typedef intptr_t ptrdiff_t;

typedef unsigned int size_t;

#ifndef __cplusplus
typedef unsigned short wchar_t;
#endif

typedef wchar_t wint_t;

#ifdef __cplusplus
}
#endif

#endif
