#pragma once

#include "Unknown/UnkStruct_ov000_02067bc4.hpp"
#include "types.h"

class UnkStruct_ov000_020b62a8_Sub1 {
public:
    /* 00 */ unk8 mUnk_000[0x50 - 0x00];
    /* 50 */ unk32 mUnk_50;
};

class UnkStruct_ov000_020b62a8 {
public:
    /* 000 */ unk8 mUnk_000[0x20A - 0x00];
    /* 20A */ u8 mUnk_20A; // bool?
    /* 20B */ unk8 mUnk_20B;
    /* 20C */ unk32 mUnk_20C;
    /* 210 */ unk32 mUnk_210;
    /* 214 */ unk32 mUnk_214;
    /* 218 */ UnkStruct_ov000_020b62a8_Sub1 *mUnk_218;

    bool IsUnk20A() {
        return mUnk_20A == 0;
    }
    unk32 IsUnk210() {
        return mUnk_210 == 0;
    }

    void test(unk32 *param1, unk32 param2, void *param3, unk32 param4) {
        // UnkStruct_ov000_020b62a8_Sub1* unk218 = &mUnk_218;

        // *param1 = unk218;
        // data_ov000_020b504c.func_ov000_0206807c(param2, param3, unk218, param4);
    }

    void func_ov000_020ba7c8(u16 param1);
    void func_ov000_020d08fc(unk32 param1, void *param2, void *param3, unk32 param4);
    void func_ov019_020d08fc(unk32 param1, void *param2, void *param3, unk32 param4);
    void func_ov019_020d0964(void);
};

extern UnkStruct_ov000_020b62a8 data_ov000_020b62a8;
