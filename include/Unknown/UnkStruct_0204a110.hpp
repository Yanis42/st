#pragma once

#include "types.h"

class UnkStruct_0204a110 {
public:
    /* 000 */ unk8 mUnk_000[0xDA4 - 0x000];
    /* DA4 */ unk8 mUnk_DA4;

    unk32 func_01ff9b50();
    void func_ov001_020bd514(unk32 param1, void *param2, unk32 param3, unk32 param4);
    void func_020195a0(const char *param1, unk32 param2, unk32 param3, unk32 param4);
};

extern UnkStruct_0204a110 data_0204a110;
