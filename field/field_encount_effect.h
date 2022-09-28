#ifndef __FIELD_ENCOUNT_EFFECT_H
#define __FIELD_ENCOUNT_EFFECT_H

#include "swantypes.h"

STRUCT_DECLARE(EncEff)

#include "field/fieldmap.h"

struct EncEff
{
    void* EventData;
    void (*RenderFunc)(EncEff*);
    Field* m_Field;
    u32 SubOverlayIDs[3];
    u32 SubOverlayCount;
    void* WorkArea;
};

#endif //__FIELD_ENCOUNT_EFFECT_H
//2022-09-28 13:26 / Tchaikovsky code generator
