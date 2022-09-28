#ifndef __CP15_H
#define __CP15_H

#include "swantypes.h"

C_DECL_BEGIN

extern void        cp15_halt();
extern signed int  cp15_invalidateIC(char* addr, int size);
extern void        cp15_invalidateICAll();
extern void        cp15_drainWriteBuffer();
extern u32         cp15_flushDC(void* ptr, u32 size);
extern signed int  cp15_cleanDC(char* addr, size_t size);
extern signed int  cp15_invalidateDC(char* addr, int size);
extern int         cp15_invalidateDCAll();

C_DECL_END

#endif //__CP15_H
//2022-09-28 13:26 / Tchaikovsky code generator
