#pragma once

#include "types.h"

typedef u32 UnkId;
enum __UnkId {
    UnkId_EXPH = 'EXPH',
    UnkId_FRMH = 'FRMH',
    UnkId_UNTH = 'UNTH',
    UnkId_UNSH = 'UNSH',
};

struct UnkStruct_02011e10 {
    /* 00 */ UnkId mId;
    /* 04 */ unk8 mUnk_04[0x28];
    /* 2C */ unk8 mUnk_2C[0x60 - 0x2C];
    unk32 mUnk_60;
};

//! TODO: figure this out
extern UnkStruct_02011e10 *data_0204999c[4];
extern UnkStruct_02011e10 data_0204999c_2;

void *SysNew(UnkStruct_02011e10 *param1, s32 length, s32 param3);
void SysDelete(void *ptr);
void *func_02011f10(s32 length);
void *func_02011f30(s32 length);

class SysObject {
public:
    static void *operator new(unsigned long length, u32 id, u32 idLength);
    static void *operator new[](unsigned long length, u32 *id, u32 idLength);
    static void operator delete(void *ptr);
    static void operator delete[](void *ptr);
};
