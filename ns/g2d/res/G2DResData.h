#ifndef __G2DRESDATA_H
#define __G2DRESDATA_H

#include "swantypes.h"

STRUCT_DECLARE(NNSG2DResData)

SWAN_CPPTYPE_EX(ns::g2d::res, Data, NNSG2DResData)

#include "ns/cmn/res/ResBase.h"

struct NNSG2DResData
{
    NNSCmnResHeader Header;
    char Content[];
};

#endif //__G2DRESDATA_H
//2022-11-02 23:13 / Tchaikovsky code generator
