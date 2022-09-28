#ifndef __SAVEDATA_BAG_H
#define __SAVEDATA_BAG_H

#include "swantypes.h"

STRUCT_DECLARE(BagItem)
STRUCT_DECLARE(BagSaveData)

SWAN_CPPTYPE(savedata, BagItem)
SWAN_CPPTYPE_EX(savedata, Bag, BagSaveData)

struct BagItem
{
    u16 ItemID;
    u16 Count;
};

struct BagSaveData
{
    BagItem Items[310];
    BagItem KeyItems[83];
    BagItem TMsHMs[109];
    BagItem Medicine[48];
    BagItem Berries[64];
    u32 FreeSpaceBits[21];
};

#endif //__SAVEDATA_BAG_H
//2022-09-28 13:26 / Tchaikovsky code generator
