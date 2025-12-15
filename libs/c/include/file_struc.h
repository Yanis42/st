#ifndef _C_FILE_STRUC_H
#define _C_FILE_STRUC_H

#include <types.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef unsigned long __file_handle;
typedef unsigned long fpos_t;
typedef struct _FILE _FILE, *P_FILE;

#define __ungetc_buffer_size 2

enum __file_kinds {
    __closed_file,
    __disk_file,
    __console_file,
    __unavailable_file
};

enum __open_modes {
    __must_exist,
    __create_if_necessary,
    __create_or_truncate
};

enum __file_orientation {
    __unoriented,
    __char_oriented,
    __wide_oriented
};

enum __io_modes {
    __read       = 1,
    __write      = 2,
    __read_write = 3,
    __append     = 4
};

typedef struct __file_modes {
    u32 open_mode : 2;
    u32 io_mode : 3;
    u32 buffer_mode : 2;
    u32 file_kind : 3;
    u32 file_orientation : 2;
    u32 binary_io : 1;
} __file_modes;

enum __io_states {
    __neutral,
    __writing,
    __reading,
    __rereading
};

typedef struct __file_state {
    u32 io_state : 3;
    u32 free_buffer : 1;
    u8 eof;
    u8 error;
} __file_state;

typedef void *__ref_con;
typedef void (*__idle_proc)(void);
typedef int (*__pos_proc)(u32 file, u32 *position, s32 mode, void *ref);
typedef int (*__io_proc)(u32 file, u8 *buffer, s32 *count, void *ref);
typedef int (*__close_proc)(u32 file);

struct _FILE {
    __file_handle handle;
    __file_modes mode;
    __file_state state;
    u8 char_buffer;
    u8 char_buffer_overflow;
    u8 ungetc_buffer[__ungetc_buffer_size];
    wchar_t ungetwc_buffer[__ungetc_buffer_size];
    u32 position;
    u8 *buffer;
    u32 buffer_size;
    u8 *buffer_ptr;
    u32 buffer_len;
    u32 buffer_alignment;
    u32 saved_buffer_len;
    u32 buffer_pos;
    __pos_proc position_proc;
    __io_proc read_proc;
    __io_proc write_proc;
    __close_proc close_proc;
    __ref_con ref_con;
};

typedef struct _FILE FILE;

#define _IONBF 0
#define _IOLBF 1
#define _IOFBF 2

// define standard C file pointer location names
#define SEEK_SET (0)
#define SEEK_CUR (1)
#define SEEK_END (2)

#define set_error(file)          \
    do {                         \
        (file)->state.error = 1; \
        (file)->buffer_len  = 0; \
    } while (FALSE)

#define stdin &(__files[0])
#define stdout &(__files[1])
#define stderr &(__files[2])

#define _STATIC_FILES 4

extern FILE __files[];

#ifdef __cplusplus
}
#endif

#endif
