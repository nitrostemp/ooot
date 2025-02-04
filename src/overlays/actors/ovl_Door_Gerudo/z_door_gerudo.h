#pragma once
#define Z_DOOR_GERUDO_H

#include "ultra64.h"
#include "global.h"

struct DoorGerudo;

typedef void (*DoorGerudoActionFunc)(struct DoorGerudo*, GlobalContext*);


struct DoorGerudo {

    /* 0x0000 */ DynaPolyActor dyna;
    /* 0x0164 */ s16 unk_164;
    /* 0x0166 */ u8 unk_166;
    /* 0x0168 */ DoorGerudoActionFunc actionFunc;
}; 


