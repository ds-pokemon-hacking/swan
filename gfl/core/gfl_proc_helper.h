#ifndef __GFL_PROC_HELPER_H
#define __GFL_PROC_HELPER_H

#include "swantypes.h"

#define MAKE_PROC_VTBL(initFunc, updateFunc, endFunc) {\
	(GameProcFunc) initFunc,\
	(GameProcFunc) updateFunc,\
	(GameProcFunc) endFunc\
};

#include "gfl/core/gfl_procsys.h"

#endif //__GFL_PROC_HELPER_H
//2022-11-02 23:13 / Tchaikovsky code generator
