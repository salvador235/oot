#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_egg.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

Vtx object_gi_eggVtx_000000[] = {
#include "assets/objects/object_gi_egg/object_gi_eggVtx_000000.vtx.inc"
};

Gfx gGiEggMaterialDL[] = {
    gsDPPipeSync(),
    gsDPSetCycleType(G_CYC_1CYCLE),
    gsDPSetRenderMode(G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 1, 1, PRIM_LOD_FRAC, 1, PRIMITIVE, ENVIRONMENT,
                       TEXEL0, ENVIRONMENT, 1, 1, PRIM_LOD_FRAC, 1),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(80, 80, 40, 255),
    gsSPEndDisplayList(),
};

Gfx gGiEggDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x0FA0, 0x0FA0, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffUnknown10Tex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR
                         | G_TX_WRAP, 5, 5, 1, 1),
    gsSPClearGeometryMode(G_FOG),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(object_gi_eggVtx_000000, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_eggVtx_000000[3], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(5, 6, 4, 0, 7, 8, 6, 0),
    gsSP2Triangles(9, 10, 8, 0, 11, 12, 10, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 15, 17, 0),
    gsSP2Triangles(18, 17, 19, 0, 20, 19, 21, 0),
    gsSP2Triangles(22, 21, 23, 0, 24, 23, 25, 0),
    gsSP2Triangles(26, 25, 27, 0, 27, 12, 28, 0),
    gsSP2Triangles(15, 2, 1, 0, 17, 1, 4, 0),
    gsSP2Triangles(19, 4, 6, 0, 21, 6, 8, 0),
    gsSP2Triangles(23, 8, 10, 0, 25, 10, 12, 0),
    gsSP2Triangles(12, 11, 29, 0, 2, 30, 0, 0),
    gsSP2Triangles(1, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 5, 7, 0, 8, 7, 9, 0),
    gsSP1Triangle(10, 9, 11, 0),
    gsSPVertex(&object_gi_eggVtx_000000[34], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 3, 2, 0, 5, 4, 2, 0),
    gsSP2Triangles(6, 5, 2, 0, 7, 6, 2, 0),
    gsSP2Triangles(1, 7, 2, 0, 8, 9, 10, 0),
    gsSP2Triangles(9, 11, 10, 0, 11, 12, 10, 0),
    gsSP2Triangles(12, 13, 10, 0, 13, 14, 10, 0),
    gsSP2Triangles(14, 15, 10, 0, 15, 8, 10, 0),
    gsSP2Triangles(16, 9, 8, 0, 17, 11, 9, 0),
    gsSP2Triangles(18, 12, 11, 0, 19, 20, 12, 0),
    gsSP2Triangles(21, 22, 20, 0, 23, 24, 22, 0),
    gsSP2Triangles(25, 26, 24, 0, 27, 16, 28, 0),
    gsSP2Triangles(29, 17, 16, 0, 30, 18, 17, 0),
    gsSP1Triangle(31, 19, 18, 0),
    gsSPVertex(&object_gi_eggVtx_000000[66], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP1Triangle(5, 6, 4, 0),
    gsDPPipeSync(),
    gsDPSetCycleType(G_CYC_2CYCLE),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 1, 1, PRIM_LOD_FRAC, 1, COMBINED, 0, SHADE, 0, 1, 1,
                       PRIM_LOD_FRAC, 1),
    gsDPSetPrimColor(0, 0, 200, 130, 40, 255),
    gsDPSetEnvColor(90, 50, 0, 255),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffUnknown12Tex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_eggVtx_000000[73], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&object_gi_eggVtx_000000[103], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&object_gi_eggVtx_000000[133], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&object_gi_eggVtx_000000[163], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&object_gi_eggVtx_000000[193], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&object_gi_eggVtx_000000[223], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPEndDisplayList(),
};
