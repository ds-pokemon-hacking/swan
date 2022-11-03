#ifndef __FIELD_BGM_INFO_H
#define __FIELD_BGM_INFO_H

#include "swantypes.h"

STRUCT_DECLARE(BGMInfo)

struct BGMInfo
{
    u8 EntryCount;
    u8 _padEntryCount1;
    u16 _padEntryCount2;
    u16* BGMIds;
    u8* ISSTypes;
};

#endif //__FIELD_BGM_INFO_H
//2022-11-02 23:13 / Tchaikovsky code generator
