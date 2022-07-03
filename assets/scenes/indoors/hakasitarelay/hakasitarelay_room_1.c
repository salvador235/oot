#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "hakasitarelay_room_1.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "hakasitarelay_scene.h"
#include "hakasitarelay_room_0.h"
#include "hakasitarelay_room_2.h"
#include "hakasitarelay_room_3.h"
#include "hakasitarelay_room_4.h"
#include "hakasitarelay_room_5.h"
#include "hakasitarelay_room_6.h"

SceneCmd hakasitarelay_room_1Commands[] = {
    SCENE_CMD_ECHO_SETTINGS(7),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x01, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_MESH(&hakasitarelay_room_1PolygonType0_0000F0),
    SCENE_CMD_OBJECT_LIST(8, hakasitarelay_room_1ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(10, hakasitarelay_room_1ActorList_000050),
    SCENE_CMD_END(),
};

s16 hakasitarelay_room_1ObjectList_000040[] = {
    OBJECT_RELAY_OBJECTS,
    OBJECT_POH,
    OBJECT_BOX,
    OBJECT_SYOKUDAI,
    OBJECT_TK,
    OBJECT_FU,
    OBJECT_KANBAN,
    OBJECT_RD,
};

ActorEntry hakasitarelay_room_1ActorList_000050[] = {
    { ACTOR_EN_ITEM00,      {    385,   -551,  -2766 }, {      0,      0,      0 }, 0x3800 },
    { ACTOR_EN_ITEM00,      {    528,   -510,  -3216 }, {      0,      0,      0 }, 0x3900 },
    { ACTOR_EN_ITEM00,      {    753,   -570,  -4828 }, {      0,      0,      0 }, 0x3A00 },
    { ACTOR_EN_LIGHT,       {    460,   -450,  -3490 }, {      0, 0XC000,      0 }, 0x03F8 },
    { ACTOR_EN_LIGHT,       {    320,   -450,  -3490 }, {      0, 0X4000,      0 }, 0x03F8 },
    { ACTOR_EN_WONDER_ITEM, {    391,   -570,  -2681 }, {      0,      0,    0X1 }, 0x123F },
    { ACTOR_EN_WONDER_ITEM, {    394,   -570,  -2588 }, {      0,      0,    0X1 }, 0x123F },
    { ACTOR_EN_WONDER_ITEM, {    475,   -570,  -2591 }, {      0,      0,    0X1 }, 0x123F },
    { ACTOR_EN_WONDER_ITEM, {    562,   -570,  -2588 }, {      0,      0,    0X1 }, 0x123F },
    { ACTOR_EN_WONDER_ITEM, {    621,   -510,  -3219 }, {      0,      0,    0X1 }, 0x123F },
};

PolygonType0 hakasitarelay_room_1PolygonType0_0000F0 = { 
    0, 1,
    hakasitarelay_room_1PolygonDlist_0000FC,
    hakasitarelay_room_1PolygonDlist_0000FC + ARRAY_COUNTU(hakasitarelay_room_1PolygonDlist_0000FC)
};

PolygonDlist hakasitarelay_room_1PolygonDlist_0000FC[1] = {
    { hakasitarelay_room_1DL_003F00, NULL },
};

s32 hakasitarelay_room_1_terminatorMaybe_000104 = { 0x01000000 };

u8 hakasitarelay_room_1_possiblePadding_000108[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx hakasitarelay_room_1Vtx_000110[] = {
#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_room_1Vtx_000110.vtx.inc"
};

Gfx hakasitarelay_room_1DL_002260[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&hakasitarelay_room_1Vtx_000110[525], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(hakasitarelay_room_1Tex_004720, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(hakasitarelay_room_1Vtx_000110, 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(hakasitarelay_sceneTex_00D880, G_IM_FMT_I, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                            G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&hakasitarelay_room_1Vtx_000110[23], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hakasitarelay_room_1Tex_004720, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&hakasitarelay_room_1Vtx_000110[27], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(5, 8, 11, 0, 5, 11, 6, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(12, 15, 2, 0, 1, 12, 2, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 16, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 26, 21, 0, 28, 21, 29, 0),
    gsSPVertex(&hakasitarelay_room_1Vtx_000110[57], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 5, 0, 4, 5, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 22, 20, 0),
    gsSP2Triangles(22, 23, 20, 0, 23, 24, 20, 0),
    gsSP2Triangles(23, 25, 24, 0, 26, 27, 21, 0),
    gsSP2Triangles(26, 28, 27, 0, 27, 29, 21, 0),
    gsSP1Triangle(19, 21, 29, 0),
    gsSPVertex(&hakasitarelay_room_1Vtx_000110[87], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&hakasitarelay_room_1Vtx_000110[119], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&hakasitarelay_room_1Vtx_000110[151], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(1, 4, 7, 0, 1, 7, 2, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 8, 11, 0, 12, 11, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 14, 17, 0, 18, 17, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 20, 23, 0, 24, 23, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP2Triangles(30, 26, 29, 0, 30, 29, 31, 0),
    gsSPVertex(&hakasitarelay_room_1Vtx_000110[183], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 6, 9, 0, 10, 9, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 12, 15, 0, 16, 15, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 18, 21, 0, 22, 21, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(25, 28, 29, 0, 25, 29, 26, 0),
    gsSPVertex(&hakasitarelay_room_1Vtx_000110[213], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(1, 4, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(10, 12, 13, 0, 4, 10, 13, 0),
    gsSP2Triangles(4, 13, 5, 0, 13, 12, 14, 0),
    gsSP2Triangles(13, 14, 15, 0, 0, 2, 13, 0),
    gsSP2Triangles(0, 13, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(16, 18, 19, 0, 18, 20, 21, 0),
    gsSP2Triangles(18, 21, 19, 0, 7, 16, 19, 0),
    gsSP2Triangles(7, 19, 22, 0, 7, 22, 23, 0),
    gsSP2Triangles(24, 14, 25, 0, 24, 25, 26, 0),
    gsSP2Triangles(27, 0, 24, 0, 27, 24, 26, 0),
    gsSP2Triangles(8, 28, 29, 0, 8, 29, 9, 0),
    gsSP2Triangles(28, 30, 31, 0, 28, 31, 29, 0),
    gsSPVertex(&hakasitarelay_room_1Vtx_000110[245], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 9, 0),
    gsSP2Triangles(11, 9, 13, 0, 14, 11, 13, 0),
    gsSP2Triangles(14, 13, 15, 0, 15, 8, 10, 0),
    gsSP2Triangles(15, 10, 16, 0, 5, 17, 18, 0),
    gsSP2Triangles(5, 18, 6, 0, 17, 19, 18, 0),
    gsSP2Triangles(1, 20, 17, 0, 1, 17, 2, 0),
    gsSP2Triangles(20, 21, 19, 0, 20, 19, 17, 0),
    gsSP2Triangles(22, 10, 23, 0, 22, 23, 24, 0),
    gsSP2Triangles(25, 22, 24, 0, 25, 24, 26, 0),
    gsSP2Triangles(27, 15, 16, 0, 27, 16, 25, 0),
    gsSP2Triangles(28, 14, 15, 0, 28, 15, 27, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&hakasitarelay_room_1Vtx_000110[277], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(6, 3, 7, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 12, 0),
    gsSP2Triangles(12, 11, 13, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 13, 16, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 6, 19, 0, 18, 19, 20, 0),
    gsSP2Triangles(19, 21, 22, 0, 19, 22, 20, 0),
    gsSP2Triangles(21, 23, 24, 0, 21, 24, 22, 0),
    gsSP2Triangles(25, 15, 17, 0, 25, 17, 26, 0),
    gsSP2Triangles(27, 28, 25, 0, 27, 25, 26, 0),
    gsSP2Triangles(29, 12, 14, 0, 29, 14, 25, 0),
    gsSP2Triangles(28, 30, 29, 0, 28, 29, 25, 0),
    gsSP2Triangles(31, 9, 12, 0, 31, 12, 29, 0),
    gsSPVertex(&hakasitarelay_room_1Vtx_000110[309], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(5, 8, 9, 0, 5, 9, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(11, 14, 8, 0, 11, 8, 12, 0),
    gsSP2Triangles(15, 16, 17, 0, 16, 18, 19, 0),
    gsSP2Triangles(16, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 26, 22, 0),
    gsSP2Triangles(25, 22, 21, 0, 27, 23, 28, 0),
    gsSP2Triangles(27, 28, 29, 0, 30, 27, 29, 0),
    gsSP1Triangle(30, 29, 31, 0),
    gsSPVertex(&hakasitarelay_room_1Vtx_000110[341], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 4, 0, 8, 4, 7, 0),
    gsSP2Triangles(10, 6, 11, 0, 10, 11, 2, 0),
    gsSP2Triangles(1, 8, 10, 0, 1, 10, 2, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(13, 16, 17, 0, 13, 17, 14, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(20, 17, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(22, 24, 25, 0, 26, 27, 28, 0),
    gsSP2Triangles(26, 28, 29, 0, 27, 30, 31, 0),
    gsSPVertex(&hakasitarelay_room_1Vtx_000110[373], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 5, 7, 8, 0),
    gsSP2Triangles(5, 8, 6, 0, 7, 9, 10, 0),
    gsSP2Triangles(7, 10, 8, 0, 1, 11, 12, 0),
    gsSP2Triangles(1, 12, 2, 0, 11, 13, 14, 0),
    gsSP2Triangles(11, 14, 12, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 5, 0, 16, 14, 9, 0),
    gsSP2Triangles(16, 9, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(18, 20, 21, 0, 22, 18, 21, 0),
    gsSP2Triangles(22, 23, 18, 0, 24, 25, 26, 0),
    gsSP2Triangles(24, 26, 27, 0, 28, 29, 30, 0),
    gsSP1Triangle(28, 30, 31, 0),
    gsSPVertex(&hakasitarelay_room_1Vtx_000110[405], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 2, 0),
    gsSP2Triangles(1, 7, 4, 0, 1, 4, 2, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 0, 8, 0, 12, 8, 11, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 15, 16, 0),
    gsSP2Triangles(14, 17, 15, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 22, 18, 0, 21, 18, 20, 0),
    gsSP2Triangles(23, 24, 19, 0, 23, 19, 25, 0),
    gsSP2Triangles(22, 26, 23, 0, 22, 23, 25, 0),
    gsSP2Triangles(27, 28, 29, 0, 30, 24, 28, 0),
    gsSP1Triangle(30, 28, 31, 0),
    gsSPVertex(&hakasitarelay_room_1Vtx_000110[437], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(1, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 4, 5, 8, 0),
    gsSP2Triangles(4, 8, 2, 0, 9, 7, 10, 0),
    gsSP2Triangles(9, 10, 11, 0, 0, 2, 9, 0),
    gsSP2Triangles(0, 9, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(12, 14, 15, 0, 14, 16, 17, 0),
    gsSP2Triangles(14, 17, 15, 0, 18, 12, 19, 0),
    gsSP2Triangles(18, 19, 20, 0, 19, 21, 22, 0),
    gsSP2Triangles(19, 22, 20, 0, 23, 10, 24, 0),
    gsSP2Triangles(23, 24, 25, 0, 26, 0, 23, 0),
    gsSP2Triangles(26, 23, 25, 0, 27, 18, 28, 0),
    gsSP2Triangles(27, 28, 29, 0, 28, 22, 30, 0),
    gsSP1Triangle(28, 30, 29, 0),
    gsSPVertex(&hakasitarelay_room_1Vtx_000110[468], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 3, 0),
    gsSP2Triangles(6, 7, 1, 0, 6, 1, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 10, 12, 13, 0),
    gsSP2Triangles(10, 13, 14, 0, 15, 2, 16, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 4, 15, 0),
    gsSP2Triangles(18, 15, 17, 0, 13, 19, 20, 0),
    gsSP2Triangles(13, 20, 14, 0, 19, 21, 22, 0),
    gsSP2Triangles(19, 22, 20, 0, 23, 9, 24, 0),
    gsSP2Triangles(23, 24, 25, 0, 24, 26, 27, 0),
    gsSP2Triangles(24, 27, 25, 0, 9, 11, 28, 0),
    gsSP2Triangles(9, 28, 29, 0, 28, 22, 26, 0),
    gsSP2Triangles(28, 26, 29, 0, 5, 30, 6, 0),
    gsSP2Triangles(5, 6, 8, 0, 5, 31, 30, 0),
    gsSPVertex(&hakasitarelay_room_1Vtx_000110[500], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 5, 8, 9, 0),
    gsSP2Triangles(5, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(16, 18, 17, 0, 18, 19, 17, 0),
    gsSP2Triangles(20, 21, 22, 0, 21, 23, 22, 0),
    gsSP1Triangle(23, 24, 22, 0),
    gsSPEndDisplayList(),
};

Vtx hakasitarelay_room_1Vtx_002A08[] = {
#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_room_1Vtx_002A08.vtx.inc"
};

Gfx hakasitarelay_room_1DL_003418[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&hakasitarelay_room_1Vtx_002A08[153], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(hakasitarelay_room_1Tex_003F20, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(hakasitarelay_room_1Vtx_002A08, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(hakasitarelay_sceneTex_00D880, G_IM_FMT_I, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                            G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&hakasitarelay_room_1Vtx_002A08[8], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(9, 10, 4, 0, 8, 11, 10, 0),
    gsSP2Triangles(8, 10, 9, 0, 2, 9, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hakasitarelay_room_1Tex_004320, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hakasitarelay_room_1Vtx_002A08[20], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(hakasitarelay_sceneTex_00D880, G_IM_FMT_I, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                            G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hakasitarelay_room_1Vtx_002A08[44], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 3, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(6, 8, 7, 0, 8, 9, 7, 0),
    gsSP2Triangles(9, 10, 7, 0, 11, 12, 13, 0),
    gsSP2Triangles(12, 14, 13, 0, 14, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 18, 0),
    gsSP2Triangles(17, 20, 19, 0, 17, 7, 10, 0),
    gsSP2Triangles(17, 10, 20, 0, 21, 5, 17, 0),
    gsSP2Triangles(5, 7, 17, 0, 4, 2, 22, 0),
    gsSP2Triangles(2, 1, 23, 0, 2, 23, 22, 0),
    gsSP2Triangles(23, 24, 22, 0, 1, 25, 26, 0),
    gsSP2Triangles(1, 26, 23, 0, 26, 27, 24, 0),
    gsSP2Triangles(26, 24, 23, 0, 25, 28, 29, 0),
    gsSP2Triangles(25, 29, 26, 0, 29, 30, 26, 0),
    gsSP2Triangles(29, 31, 30, 0, 30, 27, 26, 0),
    gsSPVertex(&hakasitarelay_room_1Vtx_002A08[76], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(1, 6, 2, 0, 6, 7, 2, 0),
    gsSP2Triangles(6, 8, 7, 0, 7, 9, 4, 0),
    gsSP2Triangles(7, 4, 2, 0, 8, 10, 11, 0),
    gsSP2Triangles(8, 11, 7, 0, 11, 12, 9, 0),
    gsSP2Triangles(11, 9, 7, 0, 10, 13, 14, 0),
    gsSP2Triangles(10, 14, 11, 0, 14, 15, 12, 0),
    gsSP2Triangles(14, 12, 11, 0, 13, 16, 17, 0),
    gsSP2Triangles(13, 17, 14, 0, 17, 18, 15, 0),
    gsSP2Triangles(17, 15, 14, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 21, 23, 24, 0),
    gsSP2Triangles(21, 24, 22, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 27, 29, 30, 0),
    gsSP1Triangle(27, 30, 28, 0),
    gsSPVertex(&hakasitarelay_room_1Vtx_002A08[107], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 3, 5, 6, 0),
    gsSP2Triangles(3, 6, 2, 0, 7, 3, 1, 0),
    gsSP2Triangles(7, 1, 8, 0, 9, 10, 7, 0),
    gsSP2Triangles(9, 7, 8, 0, 4, 11, 8, 0),
    gsSP2Triangles(4, 8, 1, 0, 11, 12, 9, 0),
    gsSP2Triangles(11, 9, 8, 0, 13, 14, 15, 0),
    gsSP2Triangles(14, 16, 15, 0, 14, 17, 16, 0),
    gsSP2Triangles(16, 18, 19, 0, 16, 19, 15, 0),
    gsSP2Triangles(17, 20, 21, 0, 17, 21, 16, 0),
    gsSP2Triangles(21, 22, 18, 0, 21, 18, 16, 0),
    gsSP2Triangles(23, 21, 20, 0, 23, 24, 21, 0),
    gsSP2Triangles(24, 22, 21, 0, 23, 25, 24, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 15, 27, 0),
    gsSP2Triangles(26, 13, 15, 0, 15, 19, 27, 0),
    gsSP2Triangles(29, 30, 0, 0, 30, 31, 0, 0),
    gsSP1Triangle(31, 4, 0, 0),
    gsSPVertex(&hakasitarelay_room_1Vtx_002A08[139], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 6, 7, 5, 0),
    gsSP2Triangles(4, 8, 6, 0, 4, 3, 9, 0),
    gsSP2Triangles(4, 9, 10, 0, 11, 12, 13, 0),
    gsSPEndDisplayList(),
};

Vtx hakasitarelay_room_1Vtx_0037C0[] = {
#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_room_1Vtx_0037C0.vtx.inc"
};

Gfx hakasitarelay_room_1DL_003BE0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&hakasitarelay_room_1Vtx_0037C0[58], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(hakasitarelay_room_1Tex_005F20, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(hakasitarelay_room_1Vtx_0037C0, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hakasitarelay_room_1Tex_005720, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hakasitarelay_room_1Vtx_0037C0[6], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hakasitarelay_room_1Tex_005F20, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hakasitarelay_room_1Vtx_0037C0[10], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hakasitarelay_room_1Tex_005720, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hakasitarelay_room_1Vtx_0037C0[28], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 0, 5, 4, 0),
    gsSP2Triangles(4, 3, 1, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 3, 7, 0, 3, 4, 7, 0),
    gsSP2Triangles(4, 8, 7, 0, 4, 5, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hakasitarelay_room_1Tex_006320, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hakasitarelay_room_1Vtx_0037C0[37], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hakasitarelay_room_1Tex_005F20, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hakasitarelay_room_1Vtx_0037C0[41], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hakasitarelay_room_1Tex_006320, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_MIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hakasitarelay_room_1Vtx_0037C0[44], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hakasitarelay_room_1Tex_005F20, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hakasitarelay_room_1Vtx_0037C0[52], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
};

Gfx hakasitarelay_room_1DL_003F00[] = {
    gsSPDisplayList(hakasitarelay_room_1DL_002260),
    gsSPDisplayList(hakasitarelay_room_1DL_003418),
    gsSPDisplayList(hakasitarelay_room_1DL_003BE0),
    gsSPEndDisplayList(),
};

u64 hakasitarelay_room_1Tex_003F20[] = {
#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_room_1Tex_003F20.i8.inc.c"
};

u64 hakasitarelay_room_1Tex_004320[] = {
#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_room_1Tex_004320.i8.inc.c"
};

u64 hakasitarelay_room_1Tex_004720[] = {
#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_room_1Tex_004720.rgba16.inc.c"
};

u64 hakasitarelay_room_1Tex_005720[] = {
#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_room_1Tex_005720.rgba16.inc.c"
};

u64 hakasitarelay_room_1Tex_005F20[] = {
#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_room_1Tex_005F20.rgba16.inc.c"
};

u64 hakasitarelay_room_1Tex_006320[] = {
#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_room_1Tex_006320.rgba16.inc.c"
};

