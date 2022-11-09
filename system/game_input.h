#ifndef __GAME_INPUT_H
#define __GAME_INPUT_H

#include "swantypes.h"

namespace game { struct HID; }

#include "nds/hid.h"

C_DECL_BEGIN

extern InputButton GCTX_HIDGetNewPressKeys();
extern InputButton GCTX_HIDGetHeldKeys();
extern InputButton GCTX_HIDGetReleasedKeys();
extern void        GCTX_HIDSetUpdateRate(u8 updateRate);
extern u8          GCTX_HIDGetUpdateRate();
extern void        GCTX_HIDChangeFPS(u8 fps);

C_DECL_END

#ifdef __cplusplus
struct game::HID {
    INLINE static InputButton GetNewKeys() {
        return GCTX_HIDGetNewPressKeys();
    }

    INLINE static InputButton GetHeldKeys() {
        return GCTX_HIDGetHeldKeys();
    }

    INLINE static InputButton GetReleasedKeys() {
        return GCTX_HIDGetReleasedKeys();
    }

    INLINE static u8 GetUpdateRate() {
        return GCTX_HIDGetUpdateRate();
    }

    INLINE static void SetUpdateRate(u8 updateRate) {
        GCTX_HIDSetUpdateRate(updateRate);
    }

    INLINE static void ChangeFPS(u8 fps) {
        GCTX_HIDChangeFPS(fps);
    }

};
#endif //__cplusplus

#endif //__GAME_INPUT_H
// Tchaikovsky code generator
