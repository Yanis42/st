#include "FileSelect/FileSelect.hpp"
#include "Unknown/UnkStruct_02049a2c.hpp"
#include "Unknown/UnkStruct_02049bd4.hpp"
#include "Unknown/UnkStruct_0204a060.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_ov000_02067bc4.hpp"
#include "Unknown/UnkStruct_ov000_020b50c0.hpp"
#include "Unknown/UnkStruct_ov000_020b51b8.hpp"
#include "Unknown/UnkStruct_ov000_020b5214.hpp"
#include "Unknown/UnkStruct_ov000_020b62a8.hpp"
#include "Unknown/UnkStruct_ov003_020ba740.hpp"
#include "global.h"
#include "regs.h"

extern "C" {
void func_ov000_02067344();
void func_ov001_020be054();
void func_ov001_020be0d8();
void func_ov001_020be0ec();
void func_ov001_020bd6a8();
void func_0201867c();
void func_02018694();
void func_02018984();
void func_02021c2c();
void func_02021c08();
void func_020249d4(void *pReg, unk32 param1, unk32 param2, unk32 param3, unk32 param4);
};

static unk32 data_ov019_020d1d80 = 0;
static unk32 data_ov019_020d1bb0;
static unk32 data_ov019_020d1db4;

ARM FileSelect_UnkStruct1 *FileSelect_UnkStruct1::Create() {
    return new(1, 4) FileSelect_UnkStruct1();
}

ARM FileSelect_UnkStruct1::FileSelect_UnkStruct1() {
    this->mUnk_20 = 0;
    data_02049bd4.func_02014cdc(2);
    data_02049bd4.mUnk_02 &= 0xFFFB;
    data_02049a2c.func_02013370(1);
    data_0204999c_2.mUnk_60 = 0xD6D8;
    data_ov000_020b504c.func_ov001_020be668();
    data_0204a110.func_ov001_020bd514(2, FileSelect_UnkStruct2::Create, 0, 1);
}

// ARM UnkSystem1_ov019_1::~UnkSystem1_ov019_1() {}

ARM FileSelect_UnkStruct1::~FileSelect_UnkStruct1() {
    data_0204a088->func_ov000_02061098();
    data_ov000_020b62a8.func_ov000_020ba7c8(this->mUnk_22);
    data_ov000_020b504c.func_ov001_020be6f4();
    data_02049bd4.func_02014c60(2);
    data_ov000_020b51b8.func_ov000_0206d0bc(1);
    data_ov000_020b50c0.func_ov001_020bd8dc();
}

// https://decomp.me/scratch/bJVks
ARM void FileSelect_UnkStruct1::vfunc_08(unk32 param1, unk32 param2, unk32 param3) {
    data_ov000_020b62a8.func_ov019_020d0964();
    this->func_02018374();

    data_ov000_020b62a8.test(this->mUnk_18, data_ov019_020d1d80, &this->mUnk_04, param3);
    data_ov000_020b50c0.func_ov000_020bd8ac();
    data_ov000_020b51b8.func_ov000_0206c9a8(3, 0, 0x7F, 0);
}

ARM void FileSelect_UnkStruct1::vfunc_14() {}

ARM void FileSelect_UnkStruct1::vfunc_0C() {
    if ((this->mUnk_0C & 0xFFFF) != 0xFFFF) {
        this->mUnk_04.vfunc_04();
    }
}

ARM void FileSelect_UnkStruct1::vfunc_18() {}

ARM void FileSelect_UnkStruct1::vfunc_20() {}

ARM void FileSelect_UnkStruct1::func_ov019_020c4ae4(unk32 param1) {
    this->mUnk_20 = param1;
    data_0204a060.func_020183d4(((param1 * 0x2700 + data_ov000_020b62a8.mUnk_218->mUnk_50) & 0x10000), func_ov001_020be054, 1);
}

ARM void FileSelect_UnkStruct1::func_ov019_020c4b2c(unk32 param1) {
    this->mUnk_20 = param1;
    data_0204a060.func_020183d4(true, func_ov001_020be0ec, 1);
}

ARM void FileSelect_UnkStruct1::func_ov019_020c4b54(unk32 param1) {
    this->mUnk_20 = param1;
    data_0204a060.func_020183d4(true, func_ov001_020be0d8, 1);
}

ARM FileSelect_UnkStruct2 *FileSelect_UnkStruct2::Create(unk32 param1) {
    return new(1, 4) FileSelect_UnkStruct2(param1);
}

ARM FileSelect_UnkStruct2::FileSelect_UnkStruct2(unk32 param1) :
    mUnk_154(&this->mUnk_104),
    mUnk_158(NULL),
    mUnk_15C(NULL),
    mUnk_160(NULL),
    mUnk_164(NULL) {
    REG_DISPCNT &= 0xFFCFFFEF;
    REG_DISPCNT |= 0x00200010;

    REG_DISPCNT_SUB &= 0xFFCFFFEF;
    REG_DISPCNT_SUB |= 0x00200010;

    this->mUnk_004.func_ov001_020bd734(&data_ov019_020d1bb0);
    func_ov001_020bd6a8();
}

ARM FileSelect_UnkStruct2::~FileSelect_UnkStruct2() {
    this->func_ov019_020c51a8();
    data_0204a110.mUnk_DA4 = 1;
    this->mUnk_004.func_ov001_020bd784();

    delete this->mUnk_164;
    this->mUnk_164 = NULL;

    delete this->mUnk_160;
    this->mUnk_160 = NULL;

    delete this->mUnk_15C;
    this->mUnk_15C = NULL;

    delete this->mUnk_158;
    this->mUnk_158 = NULL;
}

ARM void FileSelect::func_ov019_020c4de4() {}

ARM void FileSelect_UnkStruct2::func_ov019_020c4ed8(unk32 param1, unk32 param2, unk32 param3) {
    void *unkPtr;

    this->mUnk_004.func_0201c00c(0x25, 1, param3);

    FileSelect_UnkClass2_Sub3 *newSub3 = new(1, 4) FileSelect_UnkClass2_Sub3();
    unkPtr                             = newSub3;
    if (newSub3 != NULL) {
        unkPtr = newSub3->mUnk_0004;
    }
    this->mUnk_158 = newSub3;
    this->mUnk_154->mUnk_04.func_020166cc(unkPtr);
    newSub3->vfunc_18();

    FileSelect_UnkClass2_Sub4 *newSub4 = new(1, 4) FileSelect_UnkClass2_Sub4();
    unkPtr                             = newSub4;
    if (newSub4 != NULL) {
        unkPtr = newSub4->mUnk_04;
    }
    this->mUnk_15C = newSub4;
    this->mUnk_154->mUnk_04.func_020166cc(unkPtr);
    newSub4->vfunc_18();

    this->mUnk_160 = new(1, 4) FileSelect_UnkClass2_Sub5(&this->mUnk_104, this->mUnk_158);
    this->mUnk_164 = new(1, 4) FileSelect_UnkClass2_Sub6(&this->mUnk_104, this->mUnk_158);

    data_0204a110.mUnk_DA4 = 0;
}

ARM void FileSelect_UnkStruct2::func_ov019_020c4ff8() {
    func_0201867c();
    this->func_0201875c();
    this->func_02018908();

    if (this->mUnk_132 == 0) {
        this->mUnk_148 = -1;
    }

    this->func_ov019_020c5038();
    this->func_ov019_020c503c();
}

ARM void FileSelect_UnkStruct2::func_ov019_020c5038() {}

class UnkStruct {
public:
    unk8 pad[0x3AC];
    unk8 mUnk_3AC;
};

// https://decomp.me/scratch/hJi8l
ARM void FileSelect_UnkStruct2::func_ov019_020c503c() {
    if (data_0204a088->mUnk_00 == 0x0F) {
        unk32 iVar1 = data_0204a110.func_01ff9b50();
        unk32 uVar2;

        switch (iVar1) {
            case 0x58:
                data_ov003_020ba740->func_ov003_020b69d8(2);
                data_ov000_020b5214.func_ov000_0206db44(0x13);
                break;
            case 0x57:
                data_ov003_020ba740->func_ov003_020b69d8(3);
                test(data_ov019_020d1db4, &data_ov000_020b504c, &this->mUnk_168, this->mUnk_158->mUnk_0024);
                UnkStruct *pVar1 = (UnkStruct *) data_ov000_020b504c.func_ov000_02067bb4(0);
                pVar1->mUnk_3AC  = 1;
                data_ov000_020b5214.func_ov000_0206db44(0x12);
                break;
            default:
                break;
        }
    }

    if ((this->mUnk_170 & 0xFFFF) != 0xFFFF) {
        this->mUnk_168.vfunc_04();

        if ((this->mUnk_170 & 0xFFFF) == 0xFFFF) {
            if (this->mUnk_17C != 0) {
                data_ov003_020ba740->func_ov003_020b69d8(4);
            } else {
                data_ov003_020ba740->func_ov003_020b69d8(6);
            }
        }
    }
}

ARM void FileSelect_UnkStruct2::func_ov019_020c5168(unk32 param1) {
    func_02018694();
    this->func_02018a14(param1);
}

ARM void FileSelect_UnkStruct2::func_ov019_020c5188(unk32 param1) {
    func_02018984();
    this->func_02018830(param1);
}

ARM void FileSelect_UnkStruct2::func_ov019_020c51a8() {
    delete data_0204a088;
}

ARM UnkStruct_0204a088_Base::~UnkStruct_0204a088_Base() {
    data_0204a088 = NULL;
}

ARM UnkSystem1_ov019_Derived1::UnkSystem1_ov019_Derived1(unk32 param1, unk32 param2, unk32 param3) :
    UnkSystem1_ov019_1(0, 0, param3) {
    this->mUnk_14 = 0;
    this->mUnk_18 = -1;
    this->mUnk_1B = 0;
}

ARM void UnkSystem1_ov019_Derived1::vfunc_08() {}

static void *data_ov019_020d1e2c[2];
static void *data_ov019_020d1e34[2];
static void *data_ov019_020d1e3c[2];
static void *data_ov019_020d1e44[2];
extern u8 data_ov000_020b64b0[8]; // bool?

ARM unk32 UnkSystem1_ov019_Derived1::vfunc_1C(u32 param1, unk32 param2, unk32 param3) {
    UnkStruct_ov000_02067bc4 *pVar1;
    void **callbacks;

    if (param1 < 3) {
        if (this->mUnk_04 < 1) {
            this->func_ov019_020c5590(0x1B, param2, param3);
        } else {
            pVar1 = data_ov000_020b504c.func_ov000_02067bc4(0x4C);

            if (pVar1->vfunc_08() != 0) {
                switch (this->mUnk_04) {
                    case 0x1E:
                        switch (param1) {
                            case 0:
                                data_ov000_020b62a8.func_ov000_020d08fc(2, data_ov019_020d1e2c[0], data_ov019_020d1e2c[1],
                                                                        param3);
                                data_ov000_020b64b0[2] = 0;
                                this->mUnk_18          = -1;
                                break;
                            case 1:
                                callbacks = data_ov019_020d1e34;
                                break;
                            case 2:
                                callbacks = data_ov019_020d1e3c;
                                break;
                            case 3:
                                callbacks = data_ov019_020d1e44;
                                break;
                            default:
                                this->mUnk_18 = -1;
                                break;
                        }

                        data_ov000_020b62a8.func_ov019_020d08fc(2, callbacks[0], callbacks[1], param3);
                        break;
                    case 0x3C:
                        break;
                    default:
                        if (data_ov000_020b62a8.mUnk_000 == 0) {
                            if (this->mUnk_1B == 0) {
                                pVar1       = data_ov000_020b504c.func_ov000_02067bc4(0x4c);
                                unk32 uVar1 = pVar1->mUnk_160.func_02022128();

                                if (uVar1 != 0) {
                                    data_ov000_020b5214.func_ov000_0206db44(0x1F);
                                    data_ov000_020b504c.func_ov000_02067e60(this->mUnk_1A, this->mUnk_10);
                                    this->mUnk_1B = 0;
                                    data_02049bd4.mUnk_04--;
                                    return 1;
                                }
                            } else {
                                data_ov000_020b504c.func_ov000_02067bc4(0x4c);
                                this->mUnk_1B = 1;
                                func_02021c2c();
                            }
                        }
                        break;
                }
            }

            return 0;
        }
    }

    this->mUnk_04++;
    return 1;
}

ARM unk32 UnkSystem1_ov019_Derived1::vfunc_20(unk32 param1, unk32 param2, unk32 param3) {
    bool isParam3 = false;

    if (param3 != 0) {
        isParam3 = true;
    }

    switch (param1) {
        case 0:
            return data_ov000_020b62a8.mUnk_20A;
        case 1:
            if (!data_ov000_020b62a8.IsUnk210()) {
                return -1;
            }

            return this->func_ov019_020c5540(isParam3, this->mUnk_14->func_ov019_020d0c90(param3));
        case 2:
            if (!data_ov000_020b62a8.IsUnk210()) {
                return -1;
            }

            return this->func_ov019_020c5540(isParam3, this->mUnk_14->func_ov019_020d0c4c(2, isParam3, param3));
        case 3:
            if (!data_ov000_020b62a8.IsUnk210()) {
                return -1;
            }

            return this->func_ov019_020c5540(isParam3, this->mUnk_14->func_ov019_020d0c4c(4, isParam3, param3));
        default:
            break;
    }

    return -1;
}

ARM unk32 UnkSystem1_ov019_Derived1::func_ov019_020c5540(bool param1, unk16 param2) {
    if (param2 >= 0) {
        if (param1 != 1 || this->mUnk_18 != 0) {
            this->mUnk_18                   = param2;
            unk32 sVar1                     = this->mUnk_18 + 1;
            UnkStruct_ov000_02067bc4 *pTest = data_ov000_020b504c.func_ov000_02067bc4(0);
            pTest->mUnk_008->mUnk_54        = sVar1;
        }

        return 1;
    }

    return 0;
}

ARM void UnkSystem1_ov019_Derived1::func_ov019_020c5590(unk32 param1, unk32 param2, unk32 param3) {
    data_02049bd4.mUnk_04++;
    UnkStruct_ov000_02067bc4::UnkStruct1 auStack_20(param3);
    this->mUnk_1A = data_ov000_020b504c.func_ov000_02067cf8(param1, this->mUnk_10, &auStack_20);
    data_ov000_020b504c.func_ov000_02067bc4(this->mUnk_10)->func_02021bec(1);
    ;
    data_ov000_020b504c.func_ov000_02067bc4(this->mUnk_10);
    func_02021c08();
}

ARM UnkSystem1_ov019_Derived1::~UnkSystem1_ov019_Derived1() {}

class Test1 {
public:
    unk8 mUnk_00[0x10];
    Test1();
};

class Test2 {
public:
    unk8 mUnk_00[0x6C];
    Test2();
};

static unk16 data_ov019_020d24c0[4];

//! TODO: update class on ghidra
ARM FileSelect_UnkClass2_Sub3::FileSelect_UnkClass2_Sub3() :
    mUnk_001C(0),
    mUnk_0020(3),
    mUnk_0024(-1),
    mUnk_005C(5, 0x8E, 0, 1, 0x8E, 0),
    mUnk_0100(-1, 0x89, 0, 0, 0x89, 0),
    mUnk_0160(&mUnk_0100, 0x89, 0, 0x20012),
    // mUnk_03E0(NULL),
    // mUnk_03E4(NULL),
    mUnk_0488(0x43, 0x8A, 0, 0x0D, 0x8A, 0),
    mUnk_0520(&mUnk_0488, 0x8A, 0, 0x20016),
    mUnk_07E4(0x44, 0x8A, 1, 3, 0x8A, 2),
    mUnk_0844(&mUnk_07E4, 0x8A, 2, 0x20014),
    mUnk_0AC4(0x45, 0x8A, 2, 4, 0x8A, 1),
    mUnk_0B24(&mUnk_0AC4, 0x8A, 1, 0x20015),
    mUnk_0DA4(0x46, 0x8B, 1, 0x0E, 0x8B, 1),
    mUnk_0E3C(&mUnk_0DA4, 0x8B, 2, 0x20017),
    mUnk_11BC(0x47, 0x8B, 0, 0x0F, 0x8B, 0),
    mUnk_1254(&mUnk_11BC, 0x8B, 0, 0x20018),
    mUnk_15D4(0x48, 0x8B, 0, 0x10, 0x8B, 3),
    mUnk_166C(&mUnk_15D4, 0x8B, 3, 0x20019),
    mUnk_18EC(0x49, 0x8B, 3, 0x11, 0x8B, 2),
    mUnk_1984(&mUnk_18EC, 0x8B, 1, 0x2001A) {

    // ghidra lines 163-221

        // delete &mUnk_03E0;
    mUnk_03E0.Reset();
    // if (mUnk_03E0[0].mUnk_03E0 != mUnk_03E0[1].mUnk_03E0) {
    // }

    // mUnk_03E0[0] = new(1, 4) FileSelect_UnkClass2_Sub3::Dummy();

    this->mUnk_0010.func_020166cc(&this->mUnk_0100.mUnk_04);
    this->mUnk_0100.mUnk_2A = 0;
    this->mUnk_0488.mUnk_2C = 1;
    this->mUnk_07E4.mUnk_2C = 1;
    this->mUnk_0AC4.mUnk_2C = 1;
    this->mUnk_005C.mUnk_2C = 1;
    this->mUnk_0DA4.mUnk_2C = 1;
    this->mUnk_11BC.mUnk_2C = 1;
    this->mUnk_15D4.mUnk_2C = 1;
    this->mUnk_18EC.mUnk_2C = 1;

    // ghidra lines 163-221

    this->mUnk_11BC.mUnk_2A = 0;
    this->mUnk_15D4.mUnk_2A = 0;
    this->mUnk_18EC.mUnk_2A = 0;
    this->mUnk_15BA += data_ov019_020d24c0[3];
    this->mUnk_15B8 += data_ov019_020d24c0[2];
    this->mUnk_0488.mUnk_2A = 0;
    this->mUnk_07E4.mUnk_2A = 0;
    this->mUnk_0AC4.mUnk_2A = 0;
    this->mUnk_005C.mUnk_2A = 0;
    this->mUnk_0DA4.mUnk_2A = 0;

    // ghidra lines 233-239

    data_0204a110.func_020195a0("MSB:SelectBG.nclr", 0, 6, 0);
    Test1 aauStack_94[6];
    Test2 aauStack_48;
    REG_DISPCNT &= 0xFFFFE0FF;
    REG_DISPCNT |= 0x00001C00;
    func_020249d4(&REG_BLDCNT, 4, 8, 0, 0x10);
    this->mUnk_0010.func_020166cc(&this->mUnk_005C.mUnk_04);
    this->func_ov019_020c63dc();
    this->func_ov019_020c6d10();
}

ARM FileSelect_UnkClass2_Sub3::~FileSelect_UnkClass2_Sub3() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c6c14() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c6c18() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c6c54() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c6c9c() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c6ca0() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c6cd0() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c6d08() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c6d0c() {}
ARM void FileSelect_UnkClass2_Sub3::func_ov019_020c6d10() {}

ARM void FileSelect::func_ov019_020c6d48() {}
ARM void FileSelect::func_ov019_020c6e14() {}
ARM void FileSelect::func_ov019_020c6e3c() {}
ARM void FileSelect::func_ov019_020c7000() {}
ARM void FileSelect::func_ov019_020c717c() {}
ARM void FileSelect::func_ov019_020c71d0() {}
ARM void FileSelect::func_ov019_020c71f0() {}
ARM void FileSelect::func_ov019_020c7210() {}
ARM void FileSelect::func_ov019_020c7274() {}
ARM void FileSelect::func_ov019_020c72a0() {}
ARM void FileSelect::func_ov019_020c757c() {}
ARM void FileSelect::func_ov019_020c7768() {}
ARM void FileSelect::func_ov019_020c77b8() {}
ARM void FileSelect::func_ov019_020c7804() {}
ARM void FileSelect::func_ov019_020c7858() {}
ARM void FileSelect::func_ov019_020c7878() {}
ARM void FileSelect::func_ov019_020c78ac() {}
ARM void FileSelect::func_ov019_020c7910() {}
ARM void FileSelect::func_ov019_020c7a44() {}
ARM void FileSelect::func_ov019_020c7c3c() {}
ARM void FileSelect::func_ov019_020c7c48() {}
ARM void FileSelect::func_ov019_020c7c70() {}
ARM void FileSelect::func_ov019_020c7d3c() {}
ARM void FileSelect::func_ov019_020c7dc8() {}
ARM void FileSelect::func_ov019_020c80dc() {}
ARM void FileSelect::func_ov019_020c80e8() {}
ARM void FileSelect::func_ov019_020c80f4() {}
ARM void FileSelect_UnkClass2_Sub3::vfunc_08() {}
ARM void FileSelect::func_ov019_020c8290() {}
ARM void FileSelect::func_ov019_020c82c4() {}
ARM void FileSelect::func_ov019_020c8454() {}
ARM void FileSelect::func_ov019_020c8524() {}
ARM void FileSelect::func_ov019_020c854c() {}
ARM void FileSelect::func_ov019_020c8aac() {}
ARM void FileSelect::func_ov019_020c8ad8() {}
ARM void FileSelect::func_ov019_020c8b10() {}
ARM void FileSelect::func_ov019_020c8b48() {}
ARM void FileSelect::func_ov019_020c8b74() {}
ARM void FileSelect::func_ov019_020c8c4c() {}
ARM void FileSelect::func_ov019_020c92dc() {}
ARM void FileSelect::func_ov019_020c9b28() {}
ARM void FileSelect::func_ov019_020c9b70() {}
ARM void FileSelect::func_ov019_020c9bcc() {}
ARM void FileSelect::func_ov019_020c9c18() {}
ARM void FileSelect::func_ov019_020c9c70() {}
ARM void FileSelect::func_ov019_020c9d88() {}
ARM void FileSelect::func_ov019_020c9e08() {}
ARM void FileSelect::func_ov019_020ca6a4() {}
ARM void FileSelect::func_ov019_020ca80c() {}
ARM void FileSelect::func_ov019_020ca844() {}
ARM void FileSelect::func_ov019_020ca87c() {}
ARM void FileSelect::func_ov019_020ca8b4() {}
ARM void FileSelect::func_ov019_020ca940() {}
ARM void FileSelect::func_ov019_020cb180() {}
ARM void FileSelect::func_ov019_020cb1dc() {}
ARM void FileSelect::func_ov019_020cb238() {}
ARM void FileSelect::func_ov019_020cb268() {}
ARM void FileSelect::func_ov019_020cb26c() {}
ARM void FileSelect_UnkClass2_Sub3::vfunc_10() {}
ARM void FileSelect::func_ov019_020cb2a8() {}
ARM void FileSelect::func_ov019_020cb2dc() {}
ARM void FileSelect::func_ov019_020cb324() {}
ARM void FileSelect::func_ov019_020cb4bc() {}
ARM void FileSelect::func_ov019_020cb4c8() {}
ARM void FileSelect::func_ov019_020cb4d4() {}
ARM void FileSelect::func_ov019_020cb4e0() {}
ARM void FileSelect::func_ov019_020cb4ec() {}
ARM void FileSelect::func_ov019_020cb4f8() {}
ARM void FileSelect::func_ov019_020cb504() {}
ARM void FileSelect::func_ov019_020cb510() {}
ARM void FileSelect::func_ov019_020cb51c() {}
ARM void FileSelect::func_ov019_020cb528() {}
ARM void FileSelect::func_ov019_020cb534() {}
ARM void FileSelect::func_ov019_020cb540() {}
ARM void FileSelect::func_ov019_020cb54c() {}
ARM void FileSelect::func_ov019_020cb558() {}
ARM void FileSelect::func_ov019_020cb564() {}
ARM void FileSelect::func_ov019_020cb570() {}
ARM void FileSelect::func_ov019_020cb57c() {}
ARM void FileSelect::func_ov019_020cb588() {}
ARM void FileSelect::func_ov019_020cb5b0() {}
ARM void FileSelect::func_ov019_020cb5bc() {}
ARM void FileSelect::func_ov019_020cb5c8() {}
ARM void FileSelect_UnkClass2_Sub3::vfunc_18() {}
ARM void FileSelect::func_ov019_020cb5dc() {}
ARM void FileSelect::func_ov019_020cb664() {}
ARM void FileSelect::func_ov019_020cb6e8() {}
ARM void FileSelect::func_ov019_020cb718() {}
ARM void FileSelect::func_ov019_020cb748() {}
ARM void FileSelect::func_ov019_020cb768() {}
ARM void FileSelect::func_ov019_020cbaec() {}
ARM void FileSelect::func_ov019_020cbb10() {}
ARM void FileSelect::func_ov019_020cbb40() {}
ARM void FileSelect::func_ov019_020cbb94() {}
ARM void FileSelect::func_ov019_020cbc0c() {}
ARM void FileSelect::func_ov019_020cc5ac() {}
ARM void FileSelect::func_ov019_020cc5c0() {}
ARM void FileSelect::func_ov019_020cc5f4() {}
ARM void FileSelect::func_ov019_020cc6ac() {}
ARM void FileSelect::func_ov019_020cc718() {}
ARM void FileSelect::func_ov019_020cc78c() {}
ARM void FileSelect::func_ov019_020cc85c() {}
ARM void FileSelect::func_ov019_020cc874() {}
ARM void FileSelect::func_ov019_020cc880() {}
ARM void FileSelect::func_ov019_020ccb18() {}
ARM void FileSelect::func_ov019_020ccc28() {}
ARM void FileSelect::func_ov019_020ccd40() {}
ARM void FileSelect::func_ov019_020ccd78() {}
ARM void FileSelect::func_ov019_020ccdb0() {}
ARM void FileSelect::func_ov019_020ccdf4() {}
ARM void FileSelect::func_ov019_020cce04() {}
ARM void FileSelect::func_ov019_020cce30() {}
ARM void FileSelect::func_ov019_020cd16c() {}
ARM void FileSelect::func_ov019_020cd41c() {}
ARM void FileSelect::func_ov019_020cd5f8() {}
ARM void FileSelect::func_ov019_020cd614() {}
ARM void FileSelect::func_ov019_020cd788() {}
ARM void FileSelect::func_ov019_020cd7f8() {}
ARM void FileSelect::func_ov019_020cd8d4() {}
ARM void FileSelect::func_ov019_020cdbdc() {}
ARM void FileSelect::func_ov019_020cdc0c() {}
ARM void FileSelect::func_ov019_020cdc38() {}
ARM void FileSelect::func_ov019_020cdc5c() {}
ARM void FileSelect::func_ov019_020cdc60() {}
ARM void FileSelect::func_ov019_020cdc8c() {}
ARM void FileSelect::func_ov019_020cdcb8() {}
ARM void FileSelect::func_ov019_020cde8c() {}
ARM void FileSelect::func_ov019_020cde9c() {}
ARM void FileSelect::func_ov019_020cdeac() {}
ARM void FileSelect::func_ov019_020ce314() {}
ARM void FileSelect::func_ov019_020ce414() {}
ARM void FileSelect::func_ov019_020ce4dc() {}
ARM void FileSelect::func_ov019_020ce61c() {}
ARM void FileSelect::func_ov019_020ce668() {}
ARM void FileSelect::func_ov019_020ce6c8() {}
ARM void FileSelect::func_ov019_020ce704() {}
ARM void FileSelect::func_ov019_020ce74c() {}
ARM void FileSelect::func_ov019_020ce7a0() {}
ARM void FileSelect::func_ov019_020ce7d4() {}
ARM void FileSelect::func_ov019_020ce820() {}
ARM void FileSelect::func_ov019_020ce830() {}
ARM void FileSelect::func_ov019_020ce844() {}
ARM void FileSelect::func_ov019_020ce9a4() {}
ARM void FileSelect::func_ov019_020cea04() {}
ARM void FileSelect::func_ov019_020cea6c() {}
ARM void FileSelect::func_ov019_020cea70() {}
ARM void FileSelect::func_ov019_020cea74() {}
ARM void FileSelect::func_ov019_020ceaac() {}
ARM void FileSelect::func_ov019_020cebcc() {}
ARM void FileSelect::func_ov019_020cec64() {}
ARM void FileSelect::func_ov019_020cef04() {}
ARM void FileSelect::func_ov019_020cef6c() {}
ARM void FileSelect::func_ov019_020cefe4() {}
ARM void FileSelect::func_ov019_020ceff8() {}
ARM void FileSelect::func_ov019_020cf00c() {}
ARM void FileSelect::func_ov019_020cf130() {}
ARM void FileSelect::func_ov019_020cf168() {}
ARM void FileSelect::func_ov019_020cf21c() {}

ARM FileSelect_UnkClass2_Sub4::FileSelect_UnkClass2_Sub4() {}
ARM void FileSelect::func_ov019_020cf5e8() {}
ARM void FileSelect::func_ov019_020cf73c() {}
ARM void FileSelect::func_ov019_020cf85c() {}
ARM void FileSelect::func_ov019_020cf870() {}
ARM void FileSelect::func_ov019_020cf9fc() {}
ARM void FileSelect::func_ov019_020cfad0() {}
ARM void FileSelect::func_ov019_020cfb28() {}

ARM FileSelect_UnkClass2_Sub5::FileSelect_UnkClass2_Sub5(FileSelect_UnkClass2_Sub7 *param1,
                                                         FileSelect_UnkClass2_Sub3 *param2) {}
ARM void FileSelect::func_ov019_020cfc68() {}
ARM void FileSelect::func_ov019_020cfc7c() {}
ARM void FileSelect::func_ov019_020cfc98() {}
ARM void FileSelect::func_ov019_020cfce8() {}
ARM void FileSelect::func_ov019_020cfd4c() {}
ARM void FileSelect::func_ov019_020cfd50() {}
ARM void FileSelect::func_ov019_020cfddc() {}
ARM void FileSelect::func_ov019_020cfdec() {}
ARM void FileSelect::func_ov019_020cfe50() {}
ARM void FileSelect::func_ov019_020cfefc() {}

ARM FileSelect_UnkClass2_Sub6::FileSelect_UnkClass2_Sub6(FileSelect_UnkClass2_Sub7 *param1,
                                                         FileSelect_UnkClass2_Sub3 *param2) {}
ARM void FileSelect::func_ov019_020cff7c() {}
ARM void FileSelect::func_ov019_020cffb8() {}
ARM void FileSelect::func_ov019_020cfffc() {}
ARM void FileSelect::func_ov019_020d004c() {}
ARM void FileSelect::func_ov019_020d00dc() {}
ARM void FileSelect::func_ov019_020d00e0() {}
ARM void FileSelect::func_ov019_020d0188() {}
ARM void FileSelect::func_ov019_020d01c0() {}
ARM void FileSelect::func_ov019_020d0264() {}
ARM void FileSelect::func_ov019_020d02f4() {}

ARM UnkSystem1_ov019_Derived2::UnkSystem1_ov019_Derived2(unk32 param1, unk32 param2, unk32 param3) :
    UnkSystem1_ov019_2(0, 0, param3) {}
ARM void UnkSystem1_ov019_Derived2::vfunc_08() {}
ARM unk32 UnkSystem1_ov019_Derived2::vfunc_1C(u32 param1, unk32 param2, unk32 param3) {}
ARM void FileSelect::func_ov019_020d0594() {}
ARM void FileSelect::func_ov019_020d05b0() {}
ARM void FileSelect::func_ov019_020d05fc() {}
ARM void FileSelect::func_ov019_020d0610() {}
ARM void FileSelect::func_ov019_020d0658() {}
ARM void FileSelect::func_ov019_020d0850() {}
ARM void FileSelect::func_ov019_020d086c() {}
// ARM void FileSelect::func_ov019_020d08fc() {}
ARM void FileSelect::func_ov019_020d0964() {}
ARM void FileSelect::func_ov019_020d09dc() {}
ARM void FileSelect::func_ov019_020d0a04() {}
ARM void FileSelect::func_ov019_020d0a2c() {}
ARM void FileSelect::func_ov019_020d0ae0() {}
ARM void FileSelect::func_ov019_020d0b04() {}
// ARM void FileSelect::func_ov019_020d0c4c() {}
// ARM void FileSelect::func_ov019_020d0c90() {}
ARM void FileSelect::func_ov019_020d0d50() {}
ARM void FileSelect::func_ov019_020d0e18() {}
ARM void FileSelect::func_ov019_020d0ea8() {}
ARM void FileSelect::func_ov019_020d1108() {}
ARM void FileSelect::func_ov019_020d127c() {}
ARM void FileSelect::func_ov019_020d13b8() {}
ARM void FileSelect::func_ov019_020d1400() {}
ARM void FileSelect::func_ov019_020d1434() {}
ARM void FileSelect::func_ov019_020d14c0() {}
ARM void FileSelect::func_ov019_020d14fc() {}
ARM void FileSelect::func_ov019_020d1538() {}
ARM void FileSelect::func_ov019_020d15cc() {}
ARM void FileSelect::func_ov019_020d1600() {}
ARM void FileSelect::func_ov019_020d1634() {}
ARM void FileSelect::func_ov019_020d16d0() {}
ARM void FileSelect::func_ov019_020d17e0() {}
ARM void FileSelect::func_ov019_020d1808() {}
ARM void FileSelect::func_ov019_020d1aac() {}
ARM void FileSelect::func_ov019_020d1b14() {}
