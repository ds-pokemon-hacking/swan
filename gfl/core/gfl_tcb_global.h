#ifndef __GFL_TCB_GLOBAL_H
#define __GFL_TCB_GLOBAL_H

#include "swantypes.h"

namespace gfl::core { struct GlobalTCB; }

#include "gfl/core/gfl_tcb.h"

C_DECL_BEGIN

extern TCBManager* GFL_G2DGetTCBMgr();
extern TCB*        GFL_G2DTCBAdd(TCBFunc callback, void* data, u32 priority);
extern TCB*        GFL_IRQHBlankTCBAdd(TCBFunc callback, void* data, u32 priority);
extern void        GFL_IRQHBlankTCBUpdate();

C_DECL_END

#ifdef __cplusplus
struct gfl::core::GlobalTCB {
    INLINE static gfl::core::TCBManager* GetG2DTCBMgr() {
        return GFL_G2DGetTCBMgr();
    }

    INLINE static gfl::core::TCB* AddG2DTCB(TCBFunc callback, void* data, u32 priority) {
        return GFL_G2DTCBAdd(callback, data, priority);
    }

    INLINE static gfl::core::TCB* AddHBlankTCB(TCBFunc callback, void* data, u32 priority) {
        return GFL_IRQHBlankTCBAdd(callback, data, priority);
    }

    INLINE static void UpdateHBlankTCBs() {
        GFL_IRQHBlankTCBUpdate();
    }

};
#endif //__cplusplus

#endif //__GFL_TCB_GLOBAL_H
//2022-09-28 13:26 / Tchaikovsky code generator
