#ifndef __SAVEDATA_EVENTWORK_H
#define __SAVEDATA_EVENTWORK_H

#include "swantypes.h"

STRUCT_DECLARE(EventWorkSave)

struct EventWorkSave
{
    u16 Works[431];
    u8 FlagBytes[383];
    u8 CanRespawnHiddenItems;
};

#endif //__SAVEDATA_EVENTWORK_H
//2022-11-02 23:13 / Tchaikovsky code generator
