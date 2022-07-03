#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "ddan_room_2.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "ddan_scene.h"
#include "ddan_room_0.h"
#include "ddan_room_1.h"
#include "ddan_room_3.h"
#include "ddan_room_4.h"
#include "ddan_room_5.h"
#include "ddan_room_6.h"
#include "ddan_room_7.h"
#include "ddan_room_8.h"
#include "ddan_room_9.h"
#include "ddan_room_10.h"
#include "ddan_room_11.h"
#include "ddan_room_12.h"
#include "ddan_room_13.h"
#include "ddan_room_14.h"
#include "ddan_room_15.h"
#include "ddan_room_16.h"

SceneCmd ddan_room_2Commands[] = {
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_MESH(&ddan_room_2PolygonType2_000320),
    SCENE_CMD_OBJECT_LIST(10, ddan_room_2ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(44, ddan_room_2ActorList_000054),
    SCENE_CMD_END(),
};

s16 ddan_room_2ObjectList_000040[] = {
    OBJECT_DDAN_OBJECTS,
    OBJECT_BWALL,
    OBJECT_BOMBF,
    OBJECT_SYOKUDAI,
    OBJECT_D_ELEVATOR,
    OBJECT_KIBAKO2,
    OBJECT_ST,
    OBJECT_VM,
    OBJECT_SHOPNUTS,
    OBJECT_DEKUBABA,
};

ActorEntry ddan_room_2ActorList_000054[] = {
    { ACTOR_OBJ_ELEVATOR, {  -1957,    -97,  -1800 }, {      0,      0,      0 }, 0x2200 },
    { ACTOR_EN_KAREBABA,  {  -1901,      0,   -917 }, {      0,      0,      0 }, 0x0001 },
    { ACTOR_EN_ST,        {  -2183,    720,  -1114 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_EN_ST,        {  -1744,    720,  -1114 }, {      0, 0X4000,      0 }, 0x0000 },
    { ACTOR_BG_BREAKWALL, {  -1960,      0,  -1040 }, {      0, 0X8000,      0 }, 0xA002 },
    { ACTOR_BG_DDAN_KD,   {  -1960,    480,  -1900 }, {      0, 0XC000,      0 }, 0x000B },
    { ACTOR_ELF_MSG,      {  -1960,     20,  -1303 }, {   0X1E,   0X24,      0 }, 0xBF14 },
    { ACTOR_EN_VM,        {  -2277,      0,  -1362 }, {      0,      0,      0 }, 0x0401 },
    { ACTOR_EN_VM,        {  -1645,      0,  -1362 }, {      0,      0,      0 }, 0x0401 },
    { ACTOR_OBJ_SYOKUDAI, {  -2081,      0,  -1108 }, {      0,      0,      0 }, 0x2400 },
    { ACTOR_EN_G_SWITCH,  {  -2277,      0,  -1362 }, {      0,      0,      0 }, 0x1165 },
    { ACTOR_EN_G_SWITCH,  {  -2189,      0,  -1834 }, {      0,      0,      0 }, 0x1165 },
    { ACTOR_EN_G_SWITCH,  {  -2411,    380,  -1836 }, {      0,      0,      0 }, 0x1165 },
    { ACTOR_EN_G_SWITCH,  {  -1907,    627,  -1243 }, {      0,      0,      0 }, 0x1165 },
    { ACTOR_EN_G_SWITCH,  {  -1512,    531,  -1083 }, {      0,      0,      0 }, 0x1165 },
    { ACTOR_EN_G_SWITCH,  {  -1733,      0,  -1461 }, {      0,      0,      0 }, 0x0165 },
    { ACTOR_OBJ_TSUBO,    {  -2391,      0,  -1804 }, {      0,      0,      0 }, 0x6603 },
    { ACTOR_OBJ_TSUBO,    {  -2361,      0,  -1161 }, {      0,      0,      0 }, 0x6802 },
    { ACTOR_OBJ_TSUBO,    {  -1525,      0,  -1800 }, {      0,      0,      0 }, 0x6A02 },
    { ACTOR_OBJ_TSUBO,    {  -1558,      0,  -1169 }, {      0,      0,      0 }, 0x6C03 },
    { ACTOR_EN_SHOPNUTS,  {  -1961,    490,  -1980 }, {      0,      0,      0 }, 0x0004 },
    { ACTOR_EN_BOMBF,     {  -2070,     20,  -1665 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_EN_BOMBF,     {  -2070,     20,  -1605 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_EN_BOMBF,     {  -2070,     20,  -1545 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_EN_BOMBF,     {  -2070,     20,  -1485 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_EN_BOMBF,     {  -2070,     20,  -1425 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_EN_BOMBF,     {  -2070,     20,  -1365 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_EN_BOMBF,     {  -2070,     20,  -1305 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_EN_BOMBF,     {  -2040,     55,   -972 }, { 0X4000, 0X4000,      0 }, 0xFFFF },
    { ACTOR_EN_BOMBF,     {  -2015,     20,  -1305 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_EN_BOMBF,     {  -1903,     20,  -1305 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_EN_BOMBF,     {  -1844,     20,  -1665 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_EN_BOMBF,     {  -1844,     20,  -1605 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_EN_BOMBF,     {  -1844,     20,  -1545 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_EN_BOMBF,     {  -1844,     20,  -1485 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_EN_BOMBF,     {  -1844,     20,  -1425 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_EN_BOMBF,     {  -1844,     20,  -1365 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_EN_BOMBF,     {  -1844,     20,  -1305 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2,  {  -2411,    380,  -1836 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2,  {  -2410,    531,  -1084 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2,  {  -2190,      0,  -1835 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2,  {  -1730,      0,  -1836 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2,  {  -1511,    531,  -1084 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2,  {  -1510,    380,  -1837 }, {      0,      0,      0 }, 0xFFFF },
};

u8 ddan_room_2_possiblePadding_000314[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

PolygonType2 ddan_room_2PolygonType2_000320 = { 
    2, 3,
    ddan_room_2PolygonDlist2_00032C,
    ddan_room_2PolygonDlist2_00032C + ARRAY_COUNTU(ddan_room_2PolygonDlist2_00032C)
};

PolygonDlist2 ddan_room_2PolygonDlist2_00032C[3] = {
    { {  -1640,    380,  -1296 },   1049, ddan_room_2DL_001B30, NULL },
    { {  -1960,    380,  -1560 },    740, ddan_room_2DL_0035C8, NULL },
    { {  -1960,    460,  -1440 },    517, NULL, ddan_room_2DL_006CB0 },
};

s32 ddan_room_2_terminatorMaybe_00035C = { 0x01000000 };

Vtx ddan_room_2Vtx_000360[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_2Vtx_000360.vtx.inc"
};

Gfx ddan_room_2DL_001B30[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&ddan_room_2Vtx_000360[373], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(ddan_room_2Tex_004B80, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(ddan_sceneTLUT_011D70),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(ddan_room_2Vtx_000360, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(5, 4, 2, 0, 5, 2, 6, 0),
    gsSP2Triangles(2, 7, 6, 0, 2, 8, 7, 0),
    gsSP2Triangles(1, 8, 2, 0, 3, 0, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_006380, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[9], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_003B80, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[15], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_004B80, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[19], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_003B80, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[23], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_004B80, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[27], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_006380, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[31], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_004B80, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[35], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_005F80, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[39], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_005380, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[47], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 17, 16, 0, 20, 21, 17, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&ddan_room_2Vtx_000360[77], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 1, 7, 2, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
    gsSP2Triangles(12, 13, 8, 0, 12, 8, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_005F80, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[91], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_005380, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[99], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 1, 0, 0, 4, 5, 1, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 6, 8, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 22, 24, 0),
    gsSP2Triangles(26, 27, 22, 0, 26, 22, 25, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&ddan_room_2Vtx_000360[131], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_005F80, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[143], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_004B80, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[151], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_006380, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[155], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 3, 0, 0, 4, 0, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_004B80, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[161], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_003B80, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[165], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_004B80, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[169], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_003B80, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[173], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_006380, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[177], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_005380, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[181], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_006380, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[201], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_004780, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[207], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_006380, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[211], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 1, 0, 6, 2, 1, 0),
    gsSP1Triangle(3, 5, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_004380, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[218], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_006380, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[222], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(1, 6, 2, 0, 6, 5, 2, 0),
    gsSP2Triangles(6, 3, 5, 0, 5, 7, 2, 0),
    gsSP1Triangle(5, 8, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_005B80, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[231], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_006380, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[235], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 2, 4, 0, 2, 3, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_005B80, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[240], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_006380, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[244], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 2, 4, 0, 2, 3, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_005B80, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[249], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_006380, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[253], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_004380, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[258], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_006380, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[266], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_005B80, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[270], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_006380, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[286], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 4, 2, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_004380, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[291], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_006380, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[303], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 3, 0, 4, 3, 2, 0),
    gsSP2Triangles(6, 7, 2, 0, 6, 2, 8, 0),
    gsSP2Triangles(2, 1, 8, 0, 1, 9, 8, 0),
    gsSP2Triangles(3, 10, 11, 0, 3, 11, 12, 0),
    gsSP2Triangles(0, 12, 13, 0, 0, 3, 12, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(16, 18, 17, 0, 18, 19, 17, 0),
    gsSP2Triangles(16, 20, 18, 0, 21, 22, 23, 0),
    gsSP1Triangle(21, 23, 24, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_004780, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[328], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_004B80, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[340], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_003B80, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[348], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(6, 0, 3, 0, 6, 3, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(14, 8, 11, 0, 14, 11, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_006380, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_000360[364], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 7, 8, 0),
    gsSP2Triangles(7, 0, 8, 0, 7, 3, 0, 0),
    gsSP1Triangle(0, 2, 8, 0),
    gsSPEndDisplayList(),
};

Vtx ddan_room_2Vtx_002B18[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_2Vtx_002B18.vtx.inc"
};

Gfx ddan_room_2DL_0035C8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&ddan_room_2Vtx_002B18[163], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(ddan_room_2Tex_003B80, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(ddan_sceneTLUT_011D70),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(ddan_room_2Vtx_002B18, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_004B80, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_002B18[4], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 8, 10, 0),
    gsSP2Triangles(11, 5, 12, 0, 13, 9, 14, 0),
    gsSP2Triangles(15, 6, 5, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 22, 16, 23, 0),
    gsSP2Triangles(24, 25, 20, 0, 26, 27, 16, 0),
    gsSP2Triangles(27, 17, 16, 0, 28, 29, 30, 0),
    gsSP1Triangle(28, 31, 29, 0),
    gsSPVertex(&ddan_room_2Vtx_002B18[36], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_003B80, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_002B18[39], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 0, 4, 0),
    gsSP1Triangle(5, 4, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_004B80, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_002B18[46], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(3, 2, 4, 0, 5, 3, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_003B80, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_002B18[52], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_004B80, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_002B18[60], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 5, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 13, 12, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 17, 15, 0),
    gsSP2Triangles(16, 13, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(18, 13, 11, 0, 14, 16, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_003B80, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_002B18[80], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_004B80, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_002B18[84], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 5, 6, 7, 0),
    gsSP1Triangle(5, 8, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_003B80, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_002B18[93], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_004B80, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_002B18[97], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_003B80, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_002B18[103], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_2Tex_004B80, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_2Vtx_002B18[111], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(2, 1, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 9, 7, 0, 9, 5, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(12, 11, 14, 0, 10, 13, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 16, 22, 23, 0),
    gsSP2Triangles(16, 19, 22, 0, 24, 25, 23, 0),
    gsSP2Triangles(7, 26, 22, 0, 27, 28, 29, 0),
    gsSP2Triangles(27, 29, 30, 0, 23, 31, 2, 0),
    gsSP2Triangles(7, 22, 21, 0, 24, 23, 2, 0),
    gsSPVertex(&ddan_room_2Vtx_002B18[143], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(1, 10, 2, 0, 0, 3, 11, 0),
    gsSP2Triangles(1, 12, 5, 0, 12, 13, 5, 0),
    gsSP2Triangles(0, 14, 15, 0, 0, 15, 1, 0),
    gsSP2Triangles(8, 16, 0, 0, 8, 17, 16, 0),
    gsSP2Triangles(5, 18, 19, 0, 5, 19, 8, 0),
    gsSPEndDisplayList(),
};

u8 ddan_room_2_unaccounted_003B68[] = {
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x1B, 0x30, 0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x35, 0xC8, 
    0xDF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 ddan_room_2Tex_003B80[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_2Tex_003B80.ci8.inc.c"
};

u64 ddan_room_2Tex_004380[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_2Tex_004380.ci8.inc.c"
};

u64 ddan_room_2Tex_004780[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_2Tex_004780.ci8.inc.c"
};

u64 ddan_room_2Tex_004B80[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_2Tex_004B80.ci8.inc.c"
};

u64 ddan_room_2Tex_005380[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_2Tex_005380.ci8.inc.c"
};

u64 ddan_room_2Tex_005B80[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_2Tex_005B80.ci8.inc.c"
};

u64 ddan_room_2Tex_005F80[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_2Tex_005F80.ci8.inc.c"
};

u64 ddan_room_2Tex_006380[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_2Tex_006380.ci8.inc.c"
};

Vtx ddan_room_2Vtx_006780[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_2Vtx_006780.vtx.inc"
};

Gfx ddan_room_2DL_006CB0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&ddan_room_2Vtx_006780[75], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(ddan_room_2Tex_006EB8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, PRIMITIVE, 0, TEXEL1, 0,
                       PRIM_LOD_FRAC, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 204),
    gsSPVertex(ddan_room_2Vtx_006780, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 7, 6, 0),
    gsSP2Triangles(4, 9, 6, 0, 4, 10, 9, 0),
    gsSP2Triangles(4, 11, 10, 0, 12, 11, 4, 0),
    gsSP2Triangles(13, 12, 4, 0, 14, 13, 4, 0),
    gsSP2Triangles(14, 4, 0, 0, 14, 0, 15, 0),
    gsSP2Triangles(0, 16, 15, 0, 0, 17, 16, 0),
    gsSP2Triangles(18, 19, 0, 0, 19, 17, 0, 0),
    gsSP2Triangles(18, 0, 3, 0, 20, 5, 4, 0),
    gsSP2Triangles(20, 4, 6, 0, 3, 2, 21, 0),
    gsSP2Triangles(3, 21, 22, 0, 23, 3, 22, 0),
    gsSP2Triangles(24, 23, 22, 0, 25, 20, 6, 0),
    gsSP2Triangles(25, 6, 26, 0, 6, 8, 26, 0),
    gsSP2Triangles(8, 27, 26, 0, 27, 28, 26, 0),
    gsSP2Triangles(29, 24, 22, 0, 23, 30, 3, 0),
    gsSP2Triangles(30, 18, 3, 0, 28, 31, 26, 0),
    gsSPVertex(&ddan_room_2Vtx_006780[32], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 3, 6, 0),
    gsSP2Triangles(8, 7, 6, 0, 9, 8, 6, 0),
    gsSP2Triangles(10, 9, 6, 0, 7, 11, 3, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(12, 14, 10, 0, 12, 10, 6, 0),
    gsSP2Triangles(12, 18, 13, 0, 12, 19, 18, 0),
    gsSP2Triangles(20, 0, 2, 0, 21, 20, 2, 0),
    gsSP2Triangles(22, 21, 2, 0, 23, 22, 2, 0),
    gsSP2Triangles(15, 23, 2, 0, 15, 17, 23, 0),
    gsSP2Triangles(15, 24, 25, 0, 24, 26, 25, 0),
    gsSP2Triangles(15, 27, 28, 0, 15, 28, 24, 0),
    gsSP2Triangles(15, 25, 16, 0, 2, 29, 27, 0),
    gsSP2Triangles(2, 27, 15, 0, 6, 5, 30, 0),
    gsSP1Triangle(6, 30, 12, 0),
    gsSPVertex(&ddan_room_2Vtx_006780[63], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 0, 3, 0, 8, 3, 9, 0),
    gsSP2Triangles(5, 10, 11, 0, 5, 11, 6, 0),
    gsSP2Triangles(3, 2, 10, 0, 3, 10, 5, 0),
    gsSP2Triangles(9, 3, 5, 0, 9, 5, 4, 0),
    gsSPEndDisplayList(),
};

u8 ddan_room_2_unaccounted_006EA8[] = {
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x6C, 0xB0, 0xDF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 ddan_room_2Tex_006EB8[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_2Tex_006EB8.rgba16.inc.c"
};
