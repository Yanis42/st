#ifndef _C_ANSI_FILES_H
#define _C_ANSI_FILES_H

#include <file_struc.h>
#include <types.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef u8 console_buff[256];
static console_buff stdin_buff;
static console_buff stdout_buff;
static console_buff stderr_buff;

#ifdef __cplusplus
}
#endif

#endif
