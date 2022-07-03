#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "malon_stable_room_0.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "malon_stable_scene.h"

SceneCmd malon_stable_room_0Commands[] = {
    SCENE_CMD_ECHO_SETTINGS(1),
    SCENE_CMD_ROOM_BEHAVIOR(0x02, 0x04, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_MESH(&malon_stable_room_0MeshHeader1Single_0000E0),
    SCENE_CMD_OBJECT_LIST(5, malon_stable_room_0ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(9, malon_stable_room_0ActorList_00004C),
    SCENE_CMD_END(),
};

s16 malon_stable_room_0ObjectList_000040[] = {
    OBJECT_HORSE_NORMAL,
    OBJECT_TA,
    OBJECT_MA2,
    OBJECT_IN,
    OBJECT_COW,
};

ActorEntry malon_stable_room_0ActorList_00004C[] = {
    { ACTOR_EN_IN,           {    -35,      0,     95 }, {      0, 0X78E4,    0X2 }, 0xFFFF },
    { ACTOR_EN_IN,           {    -35,      0,     95 }, {      0, 0X78E4,    0X3 }, 0xFFFF },
    { ACTOR_EN_IN,           {    -35,      0,     95 }, {      0, 0X78E4,    0X4 }, 0xFFFF },
    { ACTOR_EN_MA2,          {    120,      0,      0 }, {      0, 0XCAAB,    0X5 }, 0xFFFF },
    { ACTOR_EN_HORSE_NORMAL, {    355,      0,   -245 }, {      0,      0,   0XAA }, 0x000F },
    { ACTOR_EN_COW,          {   -122,      0,   -254 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_EN_COW,          {     -3,      0,   -254 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_EN_HORSE_NORMAL, {    238,      0,   -245 }, {      0,      0,   0XAA }, 0x000F },
    { ACTOR_EN_TA,           {   -149,      0,      2 }, {      0, 0X4000,      0 }, 0x0002 },
};

u8 malon_stable_room_0_possiblePadding_0000DC[] = {
    0x00, 0x00, 0x00, 0x00, 
};

MeshHeader1Single malon_stable_room_0MeshHeader1Single_0000E0 = { 
    { 1, 1, &malon_stable_room_0PolygonDlist_000100, }, 
    malon_stable_room_0Background_008A50, 
    0x00000000, 0x00000000, 
    320, 240, 
    0, 2, 
    0x0000, 0x0000, 
};

PolygonDlist malon_stable_room_0PolygonDlist_000100 = { 
    malon_stable_room_0DL_008A00, NULL
};

u8 malon_stable_room_0_possiblePadding_000108[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx malon_stable_room_0Vtx_000110[] = {
#include "assets/scenes/indoors/malon_stable/malon_stable_room_0Vtx_000110.vtx.inc"
};

Gfx malon_stable_room_0DL_007510[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&malon_stable_room_0Vtx_000110[1808], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 127, 255, 0, 255),
    gsSPVertex(malon_stable_room_0Vtx_000110, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[64], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[96], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPEndDisplayList(),
};

Gfx malon_stable_room_0DL_0076A0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&malon_stable_room_0Vtx_000110[1816], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 0, 255, 0, 255),
    gsSPVertex(&malon_stable_room_0Vtx_000110[128], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[160], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[192], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[224], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[256], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[288], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx malon_stable_room_0DL_007890[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&malon_stable_room_0Vtx_000110[1824], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 0, 255),
    gsSPVertex(&malon_stable_room_0Vtx_000110[296], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 3, 0, 4, 3, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSP1Triangle(27, 30, 31, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[328], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP1Triangle(1, 4, 2, 0),
    gsSPEndDisplayList(),
};

Gfx malon_stable_room_0DL_007968[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&malon_stable_room_0Vtx_000110[1832], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 0, 255, 0, 255),
    gsSPVertex(&malon_stable_room_0Vtx_000110[333], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[365], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[397], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPEndDisplayList(),
};

Gfx malon_stable_room_0DL_007AB0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&malon_stable_room_0Vtx_000110[1840], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 127, 255, 0, 255),
    gsSPVertex(&malon_stable_room_0Vtx_000110[429], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[461], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[493], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPEndDisplayList(),
};

Gfx malon_stable_room_0DL_007BF8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&malon_stable_room_0Vtx_000110[1848], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 127, 0, 255),
    gsSPVertex(&malon_stable_room_0Vtx_000110[525], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 6, 0),
    gsSP2Triangles(4, 7, 8, 0, 4, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 12, 0),
    gsSP2Triangles(10, 13, 14, 0, 10, 14, 15, 0),
    gsSP2Triangles(13, 16, 17, 0, 13, 17, 18, 0),
    gsSP2Triangles(16, 19, 20, 0, 16, 20, 21, 0),
    gsSP2Triangles(19, 22, 23, 0, 19, 23, 24, 0),
    gsSP2Triangles(22, 25, 26, 0, 22, 26, 27, 0),
    gsSP2Triangles(25, 28, 29, 0, 25, 29, 30, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[556], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 6, 0),
    gsSP2Triangles(4, 7, 8, 0, 4, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 12, 0),
    gsSP2Triangles(10, 13, 14, 0, 10, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 18, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 22, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 25, 0),
    gsSP2Triangles(29, 30, 31, 0, 29, 31, 28, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[588], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 2, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 9, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 15, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 15, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 18, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 21, 0),
    gsSP2Triangles(25, 26, 27, 0, 25, 27, 24, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 27, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[619], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 9, 0),
    gsSP2Triangles(10, 12, 13, 0, 10, 13, 11, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(14, 16, 17, 0, 14, 17, 15, 0),
    gsSP2Triangles(16, 18, 19, 0, 16, 19, 17, 0),
    gsSP2Triangles(18, 20, 21, 0, 18, 21, 19, 0),
    gsSP2Triangles(20, 22, 23, 0, 20, 23, 21, 0),
    gsSP2Triangles(22, 24, 25, 0, 22, 25, 23, 0),
    gsSP2Triangles(24, 26, 27, 0, 24, 27, 25, 0),
    gsSP2Triangles(26, 28, 29, 0, 26, 29, 27, 0),
    gsSP2Triangles(28, 30, 31, 0, 28, 31, 29, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[651], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 9, 0),
    gsSP2Triangles(10, 12, 13, 0, 10, 13, 11, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(14, 16, 17, 0, 14, 17, 15, 0),
    gsSP2Triangles(16, 18, 19, 0, 16, 19, 17, 0),
    gsSP2Triangles(18, 20, 21, 0, 18, 21, 19, 0),
    gsSP2Triangles(20, 22, 23, 0, 20, 23, 21, 0),
    gsSP2Triangles(22, 24, 25, 0, 22, 25, 23, 0),
    gsSP2Triangles(24, 26, 27, 0, 24, 27, 25, 0),
    gsSP2Triangles(26, 28, 29, 0, 26, 29, 27, 0),
    gsSP2Triangles(28, 30, 31, 0, 28, 31, 29, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[683], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 9, 0),
    gsSP2Triangles(10, 12, 13, 0, 10, 13, 11, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(14, 16, 17, 0, 14, 17, 15, 0),
    gsSP2Triangles(16, 18, 19, 0, 16, 19, 17, 0),
    gsSP2Triangles(18, 20, 21, 0, 18, 21, 19, 0),
    gsSP2Triangles(20, 22, 23, 0, 20, 23, 21, 0),
    gsSP2Triangles(22, 24, 25, 0, 22, 25, 23, 0),
    gsSP2Triangles(24, 26, 27, 0, 24, 27, 25, 0),
    gsSP2Triangles(26, 28, 29, 0, 26, 29, 27, 0),
    gsSP2Triangles(28, 30, 31, 0, 28, 31, 29, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[715], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 9, 0),
    gsSP2Triangles(10, 12, 13, 0, 10, 13, 11, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(14, 16, 17, 0, 14, 17, 15, 0),
    gsSP2Triangles(16, 18, 19, 0, 16, 19, 17, 0),
    gsSP2Triangles(18, 20, 21, 0, 18, 21, 19, 0),
    gsSP2Triangles(20, 22, 23, 0, 20, 23, 21, 0),
    gsSP2Triangles(22, 24, 25, 0, 22, 25, 23, 0),
    gsSP2Triangles(24, 26, 27, 0, 24, 27, 25, 0),
    gsSP2Triangles(26, 28, 29, 0, 26, 29, 27, 0),
    gsSP2Triangles(28, 30, 31, 0, 28, 31, 29, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[747], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 9, 0),
    gsSP2Triangles(10, 12, 13, 0, 10, 13, 11, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(14, 16, 17, 0, 14, 17, 15, 0),
    gsSP2Triangles(16, 18, 19, 0, 16, 19, 17, 0),
    gsSP2Triangles(18, 20, 21, 0, 18, 21, 19, 0),
    gsSP2Triangles(20, 22, 23, 0, 20, 23, 21, 0),
    gsSP2Triangles(22, 24, 25, 0, 22, 25, 23, 0),
    gsSP2Triangles(24, 26, 27, 0, 24, 27, 25, 0),
    gsSP2Triangles(26, 28, 29, 0, 26, 29, 27, 0),
    gsSP2Triangles(28, 30, 31, 0, 28, 31, 29, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[779], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 9, 0),
    gsSP2Triangles(10, 12, 13, 0, 10, 13, 11, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(14, 16, 17, 0, 14, 17, 15, 0),
    gsSP2Triangles(16, 18, 19, 0, 16, 19, 17, 0),
    gsSP2Triangles(18, 20, 21, 0, 18, 21, 19, 0),
    gsSP2Triangles(20, 22, 23, 0, 20, 23, 21, 0),
    gsSP2Triangles(22, 24, 25, 0, 22, 25, 23, 0),
    gsSP2Triangles(24, 26, 27, 0, 24, 27, 25, 0),
    gsSP2Triangles(26, 28, 29, 0, 26, 29, 27, 0),
    gsSP2Triangles(28, 30, 31, 0, 28, 31, 29, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[811], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 9, 0),
    gsSP2Triangles(10, 12, 13, 0, 10, 13, 11, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(14, 16, 17, 0, 14, 17, 15, 0),
    gsSP2Triangles(16, 18, 19, 0, 16, 19, 17, 0),
    gsSP2Triangles(18, 20, 21, 0, 18, 21, 19, 0),
    gsSP2Triangles(20, 22, 23, 0, 20, 23, 21, 0),
    gsSP2Triangles(22, 24, 25, 0, 22, 25, 23, 0),
    gsSP2Triangles(24, 26, 27, 0, 24, 27, 25, 0),
    gsSP2Triangles(26, 28, 29, 0, 26, 29, 27, 0),
    gsSP2Triangles(28, 30, 31, 0, 28, 31, 29, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[843], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 9, 0),
    gsSP2Triangles(10, 12, 13, 0, 10, 13, 11, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(14, 16, 17, 0, 14, 17, 15, 0),
    gsSP2Triangles(16, 18, 19, 0, 16, 19, 17, 0),
    gsSP2Triangles(18, 20, 21, 0, 18, 21, 19, 0),
    gsSP2Triangles(20, 22, 23, 0, 20, 23, 21, 0),
    gsSP2Triangles(22, 24, 25, 0, 22, 25, 23, 0),
    gsSP2Triangles(24, 26, 27, 0, 24, 27, 25, 0),
    gsSP2Triangles(26, 28, 29, 0, 26, 29, 27, 0),
    gsSP2Triangles(28, 30, 31, 0, 28, 31, 29, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[875], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 6, 0),
    gsSP2Triangles(4, 7, 8, 0, 4, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 12, 0),
    gsSP2Triangles(10, 13, 14, 0, 10, 14, 15, 0),
    gsSP2Triangles(13, 16, 17, 0, 13, 17, 18, 0),
    gsSP2Triangles(16, 19, 20, 0, 16, 20, 21, 0),
    gsSP2Triangles(19, 22, 23, 0, 19, 23, 24, 0),
    gsSP2Triangles(22, 25, 26, 0, 22, 26, 27, 0),
    gsSP2Triangles(25, 28, 29, 0, 25, 29, 30, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[906], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 6, 0),
    gsSP2Triangles(4, 7, 8, 0, 4, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 12, 0),
    gsSP2Triangles(10, 13, 14, 0, 10, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 18, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 22, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 25, 0),
    gsSP2Triangles(29, 30, 31, 0, 29, 31, 28, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[938], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 2, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 9, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 15, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 15, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 18, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 21, 0),
    gsSP2Triangles(25, 26, 27, 0, 25, 27, 24, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 27, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[969], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 5, 0, 4, 5, 6, 0),
    gsSP2Triangles(7, 4, 8, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 7, 11, 0, 10, 11, 12, 0),
    gsSP2Triangles(13, 10, 14, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 13, 17, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 16, 20, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 19, 23, 0, 22, 23, 24, 0),
    gsSP2Triangles(25, 22, 26, 0, 25, 26, 27, 0),
    gsSP2Triangles(28, 25, 29, 0, 28, 29, 30, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[1000], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 6, 0),
    gsSP2Triangles(4, 7, 8, 0, 4, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 12, 0),
    gsSP2Triangles(10, 13, 14, 0, 10, 14, 15, 0),
    gsSP2Triangles(13, 16, 17, 0, 13, 17, 18, 0),
    gsSP2Triangles(16, 19, 20, 0, 16, 20, 21, 0),
    gsSP2Triangles(19, 22, 23, 0, 19, 23, 24, 0),
    gsSP2Triangles(22, 25, 26, 0, 22, 26, 27, 0),
    gsSP2Triangles(25, 28, 29, 0, 25, 29, 30, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[1031], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[1063], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[1095], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[1127], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[1159], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[1191], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[1223], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[1255], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 21, 25, 22, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP1Triangle(26, 30, 27, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[1286], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 4, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 5, 9, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(10, 14, 11, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 15, 19, 16, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(20, 24, 21, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 25, 29, 26, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[1316], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 4, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 5, 9, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(10, 14, 11, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 15, 19, 16, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(20, 24, 21, 0, 25, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[1348], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 1, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 26, 27, 28, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[1380], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 19, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 26, 27, 28, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[1412], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(30, 28, 31, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[1444], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 3, 7, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(8, 12, 9, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 13, 17, 14, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(18, 22, 19, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 23, 27, 24, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[1476], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 3, 7, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(8, 12, 9, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 13, 17, 14, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(18, 22, 19, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 23, 27, 24, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[1508], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 3, 7, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 11, 15, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 19, 23, 20, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(24, 28, 25, 0, 29, 30, 31, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[1540], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 7, 8, 0),
    gsSP2Triangles(5, 9, 6, 0, 10, 11, 12, 0),
    gsSP2Triangles(10, 12, 13, 0, 10, 14, 11, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(15, 19, 16, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 22, 23, 0, 20, 24, 21, 0),
    gsSP2Triangles(25, 26, 27, 0, 25, 27, 28, 0),
    gsSP1Triangle(25, 29, 26, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[1570], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 4, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 11, 15, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(16, 20, 17, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 21, 25, 22, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP1Triangle(26, 30, 27, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[1601], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 4, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 5, 9, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(10, 14, 11, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 15, 19, 16, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 23, 27, 24, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[1633], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 7, 0, 8, 7, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 14, 0, 15, 14, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 20, 0),
    gsSP2Triangles(25, 26, 27, 0, 25, 27, 28, 0),
    gsSP2Triangles(29, 30, 31, 0, 29, 31, 27, 0),
    gsSP2Triangles(21, 24, 28, 0, 21, 28, 31, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[1665], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 2, 0),
    gsSP2Triangles(7, 8, 3, 0, 7, 3, 6, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 15, 11, 0),
    gsSP2Triangles(16, 17, 12, 0, 16, 12, 15, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 20, 0),
    gsSP2Triangles(25, 26, 21, 0, 25, 21, 24, 0),
    gsSP2Triangles(27, 28, 22, 0, 1, 29, 30, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[1696], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[1726], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(8, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 24, 0, 0, 25, 26, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[1757], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPVertex(&malon_stable_room_0Vtx_000110[1788], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSPEndDisplayList(),
};

Gfx malon_stable_room_0DL_008A00[] = {
    gsSPDisplayList(malon_stable_room_0DL_007510),
    gsSPDisplayList(malon_stable_room_0DL_0076A0),
    gsSPDisplayList(malon_stable_room_0DL_007890),
    gsSPDisplayList(malon_stable_room_0DL_007968),
    gsSPDisplayList(malon_stable_room_0DL_007AB0),
    gsSPDisplayList(malon_stable_room_0DL_007BF8),
    gsSPEndDisplayList(),
};

u8 malon_stable_room_0_unaccounted_008A38[] = {
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x8A, 0x00, 0xDF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 malon_stable_room_0Background_008A50[SCREEN_WIDTH * SCREEN_HEIGHT / 4] = {
#include "assets/scenes/indoors/malon_stable/malon_stable_room_0Background_008A50.jpg.inc.c"
};
