#ifndef __GFL_TEXTPRINT_H
#define __GFL_TEXTPRINT_H

#include "swantypes.h"

STRUCT_DECLARE(TextPrintState)

#include "gfl/g2d/gfl_bitmap.h"

C_DECL_BEGIN

extern void    GFL_TextPrintInit(const char* fontPath);
extern void    GFL_TextPrintDrawIndices(u16* printstr, TextPrintState* state);
extern void    GFL_TextPrintDrawString(const char* string, TextPrintState* state);
extern void    GFL_TextPrintStringToIndices(const char* cstr, u16* printstr, u32 destCapacity);
extern u32     GFL_TextPrintASCIIToIndex(u32 character);
extern int     GFL_TextPrintSJISToIndex(u32 character);

C_DECL_END

struct TextPrintState
{
    GFLBitmap* m_Bitmap;
    u16 OutOffsX;
    u16 OutOffsY;
    u8 LetterSpacing;
    u8 LineSpacing;
    u8 ColorIndices;
    u8 _Padding;
};

extern TextPrintState g_DebugPrintState;

#endif //__GFL_TEXTPRINT_H
//2022-11-02 23:13 / Tchaikovsky code generator
