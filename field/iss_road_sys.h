#ifndef __ISS_ROAD_SYS_H
#define __ISS_ROAD_SYS_H

#include "swantypes.h"

STRUCT_DECLARE(ISSRoadSystem)

#include "math/vector.h"
#include "field/field_player.h"

struct ISSRoadSystem
{
    b32 IsEnabled;
    u32 Volume;
    PlayerState* m_PlayerState;
    VecFx32 LastPlayerPos;
};

#endif //__ISS_ROAD_SYS_H
//2022-09-28 13:26 / Tchaikovsky code generator
