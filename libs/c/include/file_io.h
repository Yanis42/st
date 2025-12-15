#ifndef _C_FILE_IO_H
#define _C_FILE_IO_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <types.h>

int fclose(FILE *file);
int fflush(FILE *file);

#ifdef __cplusplus
}
#endif

#endif
