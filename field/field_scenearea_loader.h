#ifndef __FIELD_SCENEAREA_LOADER_H
#define __FIELD_SCENEAREA_LOADER_H

#include "swantypes.h"

STRUCT_DECLARE(FieldSceneAreaLoader)

#include "gfl/fs/gfl_archive.h"
#include "field/field_scenearea.h"

struct FieldSceneAreaLoader
{
    CameraArea* CameraData;
    int CameraCount;
    ArcTool* CamArcTools[2];
};

#endif //__FIELD_SCENEAREA_LOADER_H
//2022-09-28 13:26 / Tchaikovsky code generator
