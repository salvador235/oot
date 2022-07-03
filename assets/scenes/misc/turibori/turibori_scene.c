#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "turibori_scene.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "turibori_room_0.h"

SceneCmd turibori_sceneCommands[] = {
    SCENE_CMD_SOUND_SETTINGS(0, 19, 78),
    SCENE_CMD_ROOM_LIST(1, turibori_sceneRoomList0x000080),
    SCENE_CMD_TRANSITION_ACTOR_LIST(1, turibori_sceneTransitionActorList_000070),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x00000006),
    SCENE_CMD_COL_HEADER(&turibori_sceneCollisionHeader_001CAC),
    SCENE_CMD_ENTRANCE_LIST(turibori_sceneEntranceList0x000088),
    SCENE_CMD_SPECIAL_FILES(0x01, OBJECT_GAMEPLAY_FIELD_KEEP),
    SCENE_CMD_SPAWN_LIST(1, turibori_sceneStartPositionList0x000060),
    SCENE_CMD_SKYBOX_SETTINGS(1, 0, false),
    SCENE_CMD_EXIT_LIST(turibori_sceneExitList_00008C),
    SCENE_CMD_ENV_LIGHT_SETTINGS(12, turibori_sceneLightSettings0x000090),
    SCENE_CMD_END(),
};

ActorEntry turibori_sceneStartPositionList0x000060[] = {
    { ACTOR_PLAYER,     {      1,      0,   1374 }, {      0, 0X8000,      0 }, 0x0EFF },
};

TransitionActorEntry turibori_sceneTransitionActorList_000070[] = {
    { 0, 255, 0, 255, ACTOR_EN_DOOR, 1, 0, 1419, 0, 0x01BF },
};

RomFile turibori_sceneRoomList0x000080[] = {
    { _turibori_room_0SegmentRomStart, _turibori_room_0SegmentRomEnd },
};

EntranceEntry turibori_sceneEntranceList0x000088[] = {
    { 0x00, 0x00 },
    { 0x00, 0x00 },
};

u16 turibori_sceneExitList_00008C[] = {
    0x0309,
    0x0000,
};

LightSettings turibori_sceneLightSettings0x000090[] = {
    { 0x46, 0x2D, 0x39, 0x49, 0x49, 0x49, 0xB4, 0x9B, 0x8C, 0xB7, 0xB7, 0xB7, 0x14, 0x14, 0x3C, 0x1E, 0x0A, 0x0A,
    0x07E3, 0x3200 },
    { 0x5A, 0x5A, 0x5A, 0x49, 0x49, 0x49, 0xFF, 0xFA, 0xFA, 0xB7, 0xB7, 0xB7, 0x32, 0x32, 0x32, 0x64, 0x64, 0x64,
    0x07E3, 0x3200 },
    { 0x78, 0x5A, 0x00, 0x49, 0x49, 0x49, 0xFA, 0x87, 0x32, 0xB7, 0xB7, 0xB7, 0x1E, 0x1E, 0x3C, 0x1C, 0x14, 0x00,
    0x07E4, 0x3200 },
    { 0x3C, 0x3C, 0x50, 0x49, 0x49, 0x49, 0x64, 0x64, 0x82, 0xB7, 0xB7, 0xB7, 0x32, 0x32, 0x64, 0x64, 0x64, 0x64,
    0x07E3, 0x3200 },
    { 0x3C, 0x28, 0x46, 0x00, 0x00, 0x00, 0x50, 0x1E, 0x3C, 0x00, 0x00, 0x00, 0x50, 0x32, 0x96, 0x46, 0x2B, 0x2D,
    0xFFD2, 0x3200 },
    { 0x4B, 0x5A, 0x64, 0x00, 0x00, 0x00, 0x37, 0xFF, 0xF0, 0x00, 0x00, 0x00, 0x0A, 0x96, 0xBE, 0x14, 0x5A, 0x6E,
    0xFFD2, 0x3200 },
    { 0x3C, 0x28, 0x50, 0x00, 0x00, 0x00, 0x3C, 0x4B, 0x96, 0x00, 0x00, 0x00, 0x3C, 0x37, 0x96, 0x32, 0x1E, 0x1E,
    0xFFD2, 0x3200 },
    { 0x00, 0x28, 0x50, 0x00, 0x00, 0x00, 0x14, 0x32, 0x4B, 0x00, 0x00, 0x00, 0x32, 0x64, 0x96, 0x00, 0x0A, 0x14,
    0xFFD2, 0x3200 },
    { 0x46, 0x2D, 0x39, 0x49, 0x49, 0x49, 0xB4, 0x9B, 0x8C, 0xB7, 0xB7, 0xB7, 0x14, 0x14, 0x3C, 0x1E, 0x0A, 0x0A,
    0x03E3, 0x3200 },
    { 0x5A, 0x5A, 0x5A, 0x49, 0x49, 0x49, 0xFF, 0xFA, 0xFA, 0xB7, 0xB7, 0xB7, 0x32, 0x32, 0x32, 0x64, 0x64, 0x64,
    0x03E3, 0x3200 },
    { 0x78, 0x5A, 0x00, 0x49, 0x49, 0x49, 0xFA, 0x87, 0x32, 0xB7, 0xB7, 0xB7, 0x1E, 0x1E, 0x3C, 0x1C, 0x14, 0x00,
    0x03E4, 0x3200 },
    { 0x3C, 0x3C, 0x50, 0x49, 0x49, 0x49, 0x64, 0x64, 0x82, 0xB7, 0xB7, 0xB7, 0x32, 0x32, 0x64, 0x64, 0x64, 0x64,
    0x03E3, 0x3200 },
};

u8 turibori_scene_possiblePadding_000198[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

CamData turibori_sceneCollisionHeader_001CACCamDataList[] = {
    { 0x0000, 0, NULL },
    { 0x003B, 0, NULL },
    { 0x0004, 0, NULL },
};

SurfaceType turibori_sceneCollisionHeader_001CACSurfaceType[] = {
    { 0x00000000, 0x000017C2 },
    { 0x00000000, 0x000017C0 },
    { 0x00000100, 0x000017C2 },
    { 0x00000001, 0x000017C0 },
    { 0x00000000, 0x000017C4 },
    { 0x00200000, 0x000017C0 },
    { 0x00000002, 0x000017C2 },
};

CollisionPoly turibori_sceneCollisionHeader_001CACPolygons[] = {
    {0x0000, 0x00CE, 0x00CF, 0x00D0, 0x1F92, 0x6808, 0x438E, 0x00AD},
    {0x0001, 0x00D1, 0x00D2, 0x00CF, 0x4F5E, 0xFD28, 0x6461, 0x0015},
    {0x0001, 0x00D2, 0x00D3, 0x00D4, 0x4ABC, 0x0BEE, 0x98C6, 0xFAD7},
    {0x0001, 0x00D2, 0x00D4, 0x00CF, 0x5478, 0x2748, 0xA839, 0xFAF4},
    {0x0000, 0x00D4, 0x00D0, 0x00CF, 0x341D, 0x51A4, 0xAC53, 0xFC11},
    {0x0001, 0x00D3, 0x00D5, 0x00D6, 0x9E50, 0xF6ED, 0xADCB, 0x00CB},
    {0x0001, 0x00D3, 0x00D6, 0x00D4, 0xAF5A, 0x0F73, 0x9DD1, 0xFFD8},
    {0x0000, 0x00D6, 0x00D0, 0x00D4, 0xBCE1, 0x481D, 0xAE49, 0xFFDB},
    {0x0001, 0x00D5, 0x00D1, 0x00CE, 0x9001, 0xF965, 0x3D9C, 0x050F},
    {0x0001, 0x00D5, 0x00CE, 0x00D6, 0x98E3, 0xF1AE, 0x4A78, 0x0520},
    {0x0000, 0x00CE, 0x00D0, 0x00D6, 0xA03B, 0x5369, 0xF010, 0x027A},
    {0x0001, 0x00D1, 0x00CF, 0x00CE, 0x284B, 0x20FA, 0x74EE, 0x01BE},
    {0x0001, 0x00D7, 0x00D8, 0x00D9, 0xFD88, 0xFB2C, 0x7FE2, 0x037C},
    {0x0001, 0x00D7, 0x00D9, 0x00DA, 0x0CEA, 0xF17F, 0x7E84, 0x02EF},
    {0x0000, 0x00D9, 0x00DB, 0x00DA, 0xC947, 0x551A, 0x4E66, 0x03D6},
    {0x0001, 0x00DC, 0x00DD, 0x00DE, 0xDB39, 0x21EE, 0x8A31, 0xFDAC},
    {0x0001, 0x00DE, 0x00DD, 0x00DF, 0x7E04, 0xFABB, 0xEA31, 0xFBAD},
    {0x0001, 0x00DF, 0x00E0, 0x00E1, 0x06DD, 0xFCBF, 0x7FC5, 0x0350},
    {0x0000, 0x00DA, 0x00DB, 0x00E2, 0x98D8, 0x49AF, 0x11AF, 0x03DB},
    {0x0001, 0x00E3, 0x00D7, 0x00DA, 0x87E6, 0xF75C, 0x2B68, 0x052B},
    {0x0001, 0x00E3, 0x00DA, 0x00E2, 0x82B1, 0x0ECB, 0x157B, 0x04BE},
    {0x0000, 0x00E2, 0x00DB, 0x00E4, 0xCEFF, 0x51DD, 0xAAAD, 0xFF36},
    {0x0001, 0x00E5, 0x00E3, 0x00E2, 0xCCDE, 0x0FE8, 0x8BBE, 0xFE7B},
    {0x0001, 0x00E5, 0x00E2, 0x00E4, 0xDB8A, 0x2528, 0x8B12, 0xFDF5},
    {0x0000, 0x00D9, 0x00E4, 0x00DB, 0x2BBE, 0x75F8, 0xE87D, 0xFDAD},
    {0x0000, 0x00E0, 0x00DD, 0x00E6, 0x458B, 0x6B36, 0x073E, 0xFE1B},
    {0x0000, 0x00DC, 0x00E6, 0x00DD, 0xCBAD, 0x4F89, 0xAA73, 0xFF08},
    {0x0000, 0x00E1, 0x00E6, 0x00DC, 0x957F, 0x449B, 0x1242, 0x0381},
    {0x0000, 0x00E0, 0x00E6, 0x00E1, 0xC347, 0x4F3E, 0x501A, 0x03EA},
    {0x0001, 0x00DF, 0x00DD, 0x00E0, 0x7938, 0x21AC, 0x1792, 0xFD19},
    {0x0002, 0x0001, 0x0094, 0x0095, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x0001, 0x0095, 0x0002, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x0094, 0x0096, 0x0097, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x0094, 0x0097, 0x0095, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0003, 0x0098, 0x0099, 0x009A, 0x1678, 0x7D58, 0x0CEE, 0x00C4},
    {0x0003, 0x0098, 0x009A, 0x009B, 0x1679, 0x7D57, 0x0CF5, 0x00C4},
    {0x0003, 0x0099, 0x009C, 0x009A, 0x0B6C, 0x7F51, 0x0693, 0x009F},
    {0x0003, 0x009C, 0x009D, 0x009A, 0x0693, 0x7F51, 0x0B6C, 0x009F},
    {0x0003, 0x009D, 0x009E, 0x009B, 0x0CF4, 0x7D58, 0x1677, 0x00C4},
    {0x0003, 0x009D, 0x009B, 0x009A, 0x0CF1, 0x7D57, 0x167D, 0x00C4},
    {0x0003, 0x009C, 0x009F, 0x009D, 0x0000, 0x7F50, 0x0D31, 0x009F},
    {0x0003, 0x009F, 0x00A0, 0x009E, 0x0000, 0x7D59, 0x19E9, 0x00C4},
    {0x0003, 0x009F, 0x009E, 0x009D, 0x0000, 0x7D59, 0x19E9, 0x00C4},
    {0x0003, 0x009C, 0x00A1, 0x009F, 0xF96D, 0x7F51, 0x0B6C, 0x009F},
    {0x0003, 0x00A1, 0x00A2, 0x00A0, 0xF30B, 0x7D57, 0x1679, 0x00C4},
    {0x0003, 0x00A1, 0x00A0, 0x009F, 0xF312, 0x7D58, 0x1678, 0x00C4},
    {0x0003, 0x009C, 0x00A3, 0x00A1, 0xF494, 0x7F51, 0x0693, 0x009F},
    {0x0003, 0x00A3, 0x00A4, 0x00A2, 0xE989, 0x7D58, 0x0CF4, 0x00C4},
    {0x0003, 0x00A3, 0x00A2, 0x00A1, 0xE983, 0x7D57, 0x0CF1, 0x00C4},
    {0x0003, 0x009C, 0x00A5, 0x00A3, 0xF2CF, 0x7F50, 0x0000, 0x009F},
    {0x0003, 0x00A5, 0x00A6, 0x00A4, 0xE617, 0x7D59, 0x0000, 0x00C4},
    {0x0003, 0x00A5, 0x00A4, 0x00A3, 0xE617, 0x7D59, 0x0000, 0x00C4},
    {0x0003, 0x00A7, 0x00A8, 0x0099, 0x19E9, 0x7D59, 0x0000, 0x00C4},
    {0x0003, 0x00A7, 0x0099, 0x0098, 0x19E9, 0x7D59, 0x0000, 0x00C4},
    {0x0003, 0x00A8, 0x009C, 0x0099, 0x0D31, 0x7F50, 0x0000, 0x009F},
    {0x0003, 0x00A9, 0x00AA, 0x00A8, 0x167D, 0x7D57, 0xF30F, 0x00C4},
    {0x0003, 0x00A9, 0x00A8, 0x00A7, 0x1677, 0x7D58, 0xF30C, 0x00C4},
    {0x0003, 0x00AA, 0x009C, 0x00A8, 0x0B6C, 0x7F51, 0xF96D, 0x009F},
    {0x0003, 0x00AB, 0x00AC, 0x00AA, 0x0CEE, 0x7D58, 0xE988, 0x00C4},
    {0x0003, 0x00AB, 0x00AA, 0x00A9, 0x0CF5, 0x7D57, 0xE987, 0x00C4},
    {0x0003, 0x00AC, 0x009C, 0x00AA, 0x0693, 0x7F51, 0xF494, 0x009F},
    {0x0003, 0x00AD, 0x00AE, 0x00AC, 0x0000, 0x7D59, 0xE617, 0x00C4},
    {0x0003, 0x00AD, 0x00AC, 0x00AB, 0x0000, 0x7D59, 0xE617, 0x00C4},
    {0x0003, 0x00AE, 0x009C, 0x00AC, 0x0000, 0x7F50, 0xF2CF, 0x009F},
    {0x0003, 0x00AF, 0x00B0, 0x00AE, 0xF30F, 0x7D57, 0xE983, 0x00C4},
    {0x0003, 0x00AF, 0x00AE, 0x00AD, 0xF30C, 0x7D58, 0xE989, 0x00C4},
    {0x0003, 0x00B0, 0x009C, 0x00AE, 0xF96D, 0x7F51, 0xF494, 0x009F},
    {0x0003, 0x00A6, 0x00A5, 0x00B0, 0xE988, 0x7D58, 0xF312, 0x00C4},
    {0x0003, 0x00A6, 0x00B0, 0x00AF, 0xE987, 0x7D57, 0xF30B, 0x00C4},
    {0x0003, 0x00A5, 0x009C, 0x00B0, 0xF494, 0x7F51, 0xF96D, 0x009F},
    {0x0003, 0x00B1, 0x00B2, 0x00A7, 0x0D31, 0x7F50, 0x0000, 0x0077},
    {0x0003, 0x00B1, 0x00A7, 0x0098, 0x0D31, 0x7F50, 0x0000, 0x0077},
    {0x0003, 0x00B1, 0x0098, 0x009B, 0x0B6B, 0x7F51, 0x0696, 0x0077},
    {0x0003, 0x00B1, 0x009B, 0x0060, 0x0B6B, 0x7F51, 0x0694, 0x0077},
    {0x0003, 0x009E, 0x005E, 0x0060, 0x0695, 0x7F51, 0x0B6C, 0x0077},
    {0x0003, 0x009E, 0x0060, 0x009B, 0x0695, 0x7F51, 0x0B6A, 0x0077},
    {0x0003, 0x00A0, 0x0063, 0x005E, 0x0000, 0x7F50, 0x0D31, 0x0077},
    {0x0003, 0x00A0, 0x005E, 0x009E, 0x0000, 0x7F50, 0x0D31, 0x0077},
    {0x0003, 0x00A2, 0x00B3, 0x0063, 0xF96C, 0x7F51, 0x0B6B, 0x0077},
    {0x0003, 0x00A2, 0x0063, 0x00A0, 0xF96A, 0x7F51, 0x0B6B, 0x0077},
    {0x0003, 0x00A4, 0x00B4, 0x00B3, 0xF494, 0x7F51, 0x0695, 0x0077},
    {0x0003, 0x00A4, 0x00B3, 0x00A2, 0xF496, 0x7F51, 0x0695, 0x0077},
    {0x0003, 0x00A6, 0x0068, 0x00B4, 0xF2CF, 0x7F50, 0x0000, 0x0077},
    {0x0003, 0x00A6, 0x00B4, 0x00A4, 0xF2CF, 0x7F50, 0x0000, 0x0077},
    {0x0003, 0x0066, 0x0068, 0x00A6, 0xF494, 0x7F51, 0xF96B, 0x0077},
    {0x0003, 0x0066, 0x00A6, 0x00AF, 0xF496, 0x7F51, 0xF96B, 0x0077},
    {0x0003, 0x006B, 0x0066, 0x00AF, 0xF96C, 0x7F51, 0xF495, 0x0077},
    {0x0003, 0x006B, 0x00AF, 0x00AD, 0xF96A, 0x7F51, 0xF495, 0x0077},
    {0x0003, 0x005C, 0x006B, 0x00AD, 0x0000, 0x7F50, 0xF2CF, 0x0077},
    {0x0003, 0x005C, 0x00AD, 0x00AB, 0x0000, 0x7F50, 0xF2CF, 0x0077},
    {0x0003, 0x005A, 0x005C, 0x00AB, 0x0695, 0x7F51, 0xF494, 0x0077},
    {0x0003, 0x005A, 0x00AB, 0x00A9, 0x0695, 0x7F51, 0xF496, 0x0077},
    {0x0003, 0x00B2, 0x005A, 0x00A9, 0x0B6B, 0x7F51, 0xF96C, 0x0077},
    {0x0003, 0x00B2, 0x00A9, 0x00A7, 0x0B6B, 0x7F51, 0xF96A, 0x0077},
    {0x0003, 0x0082, 0x00B4, 0x0068, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0003, 0x00B4, 0x0082, 0x0085, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0003, 0x00B4, 0x0085, 0x00B3, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0003, 0x0085, 0x0087, 0x00B3, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0003, 0x00B3, 0x0087, 0x0063, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0003, 0x0060, 0x008C, 0x00B1, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0003, 0x00B1, 0x008C, 0x008F, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0003, 0x00B1, 0x008F, 0x00B2, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0003, 0x00B2, 0x008F, 0x005A, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0008, 0x0009, 0x000A, 0xCF91, 0x764B, 0x069E, 0xFF9F},
    {0x0001, 0x0008, 0x000A, 0x000B, 0xD2BA, 0x779F, 0xFB19, 0xFF90},
    {0x0001, 0x0008, 0x000C, 0x0009, 0xC157, 0x0022, 0x6F9C, 0x0010},
    {0x0001, 0x000C, 0x000D, 0x0009, 0xC5CD, 0xF93B, 0x71CC, 0x001F},
    {0x0001, 0x0009, 0x000E, 0x000F, 0xFD65, 0x7FB3, 0x0849, 0x002A},
    {0x0001, 0x0009, 0x000F, 0x000A, 0xFDF4, 0x7F9C, 0x09B6, 0x002E},
    {0x0001, 0x0009, 0x000D, 0x000E, 0xD9A0, 0x0000, 0x7A1C, 0x006A},
    {0x0001, 0x000E, 0x0010, 0x0011, 0x1E5B, 0x7A02, 0x17FF, 0x009A},
    {0x0001, 0x000E, 0x0011, 0x000F, 0x1E76, 0x7AEC, 0x1292, 0x0092},
    {0x0001, 0x000E, 0x000D, 0x0012, 0xC41D, 0x0000, 0x711F, 0x0022},
    {0x0001, 0x000E, 0x0012, 0x0010, 0xC41D, 0x0000, 0x711F, 0x0022},
    {0x0001, 0x0010, 0x0013, 0x0011, 0x4F5D, 0x56CA, 0x3284, 0x012B},
    {0x0001, 0x0010, 0x0012, 0x0013, 0xE723, 0x0000, 0x7D8F, 0x0088},
    {0x0001, 0x0013, 0x0014, 0x0015, 0x4A65, 0x0000, 0x97D8, 0xFFE4},
    {0x0001, 0x0011, 0x0013, 0x0015, 0x6148, 0x532F, 0xFF75, 0x00FC},
    {0x0001, 0x0015, 0x0014, 0x0016, 0x5BFA, 0x0000, 0xA6FD, 0x002A},
    {0x0001, 0x0015, 0x0016, 0x0017, 0x5BFA, 0x0000, 0xA6FD, 0x002A},
    {0x0001, 0x000F, 0x0011, 0x0015, 0x296C, 0x7912, 0x0310, 0x0090},
    {0x0001, 0x000F, 0x0015, 0x0017, 0x2916, 0x78BC, 0x0ADF, 0x009E},
    {0x0001, 0x0017, 0x0016, 0x0018, 0x2567, 0x0000, 0x8597, 0xFF58},
    {0x0001, 0x000A, 0x000F, 0x0017, 0x00BF, 0x7FEB, 0x0463, 0x002B},
    {0x0001, 0x000A, 0x0017, 0x0018, 0x0000, 0x7FFF, 0x0000, 0x0020},
    {0x0001, 0x0018, 0x0019, 0x001A, 0x3F7A, 0xFFD8, 0x90DA, 0xFFBA},
    {0x0001, 0x0018, 0x0016, 0x0019, 0x3AA2, 0x073E, 0x8E74, 0xFFA9},
    {0x0001, 0x000B, 0x000A, 0x0018, 0xDAFE, 0x78A4, 0xEA93, 0xFF86},
    {0x0001, 0x000B, 0x0018, 0x001A, 0xD320, 0x77DF, 0x0006, 0xFFA0},
    {0x0001, 0x001B, 0x001C, 0x001D, 0x4631, 0x9F2D, 0xD260, 0x006D},
    {0x0001, 0x001D, 0x001C, 0x001E, 0x67F1, 0xB863, 0xEAC5, 0x00B3},
    {0x0001, 0x001D, 0x001F, 0x0020, 0x2EAC, 0x7408, 0x1B3A, 0x0095},
    {0x0001, 0x001D, 0x0020, 0x001B, 0x2F0E, 0x73D7, 0x1B64, 0x0095},
    {0x0001, 0x001F, 0x0021, 0x0020, 0x36F8, 0x7368, 0x0690, 0x00DE},
    {0x0001, 0x0021, 0x0022, 0x0023, 0x4E5F, 0xD4A2, 0x5B6F, 0xFFE6},
    {0x0001, 0x0021, 0x0023, 0x0020, 0x5763, 0xDC1E, 0x565D, 0x0013},
    {0x0001, 0x0023, 0x001C, 0x001B, 0x6670, 0xD76E, 0x4124, 0x006B},
    {0x0001, 0x0023, 0x001B, 0x0020, 0x67D4, 0xE11F, 0x442F, 0x0072},
    {0x0001, 0x001F, 0x0024, 0x0025, 0x34D2, 0x7480, 0x0482, 0x00DC},
    {0x0001, 0x001F, 0x0025, 0x0021, 0x3B02, 0x717C, 0x04C3, 0x00ED},
    {0x0001, 0x0025, 0x0022, 0x0021, 0x505E, 0xD03B, 0x576B, 0xFFF4},
    {0x0001, 0x0024, 0x0026, 0x0027, 0x36A6, 0x5479, 0x4F20, 0x0013},
    {0x0001, 0x0024, 0x0027, 0x0025, 0xFAE8, 0x68C1, 0x4960, 0xFF60},
    {0x0001, 0x0027, 0x0028, 0x0022, 0x5B26, 0xEE65, 0x581F, 0x002E},
    {0x0001, 0x0027, 0x0022, 0x0025, 0x516D, 0xD013, 0x5659, 0xFFFA},
    {0x0001, 0x0029, 0x002A, 0x0026, 0x963C, 0xEA92, 0xBB2C, 0xFF2D},
    {0x0001, 0x0029, 0x0026, 0x0024, 0xA59B, 0x2997, 0xAF7C, 0xFFAF},
    {0x0001, 0x002B, 0x0029, 0x0024, 0xADD9, 0x27A4, 0xA635, 0xFFE2},
    {0x0001, 0x002B, 0x0024, 0x001F, 0xA749, 0x2435, 0xAB23, 0xFFBD},
    {0x0001, 0x001E, 0x002C, 0x001F, 0x98FD, 0x1F27, 0xBAB5, 0xFF6A},
    {0x0001, 0x001E, 0x001F, 0x001D, 0x974A, 0x1A34, 0xBB36, 0xFF61},
    {0x0001, 0x002C, 0x002B, 0x001F, 0xA891, 0x2206, 0xA8EF, 0xFFC5},
    {0x0001, 0x002D, 0x002E, 0x002F, 0xE515, 0x510E, 0xA0AB, 0xFF7C},
    {0x0001, 0x0030, 0x002D, 0x002F, 0xD26B, 0x528A, 0xA971, 0xFF78},
    {0x0001, 0x0030, 0x002F, 0x0031, 0xD268, 0x5287, 0xA970, 0xFF78},
    {0x0001, 0x0032, 0x0033, 0x002E, 0xDB88, 0xDD73, 0x8A46, 0xFEE5},
    {0x0001, 0x0032, 0x002E, 0x002D, 0xABB3, 0xB023, 0xCA2A, 0xFEF1},
    {0x0001, 0x0030, 0x0034, 0x0032, 0xBCC2, 0xAF41, 0xB6E9, 0xFEDF},
    {0x0001, 0x0030, 0x0032, 0x002D, 0xBCA9, 0xAF6F, 0xB6CE, 0xFEDF},
    {0x0001, 0x002E, 0x0035, 0x0036, 0xEF58, 0x5007, 0x9D81, 0xFF82},
    {0x0001, 0x002E, 0x0036, 0x002F, 0xE64C, 0x4F12, 0x9EAF, 0xFF78},
    {0x0001, 0x002E, 0x0033, 0x0035, 0xB85F, 0xFAC7, 0x960D, 0xFEE5},
    {0x0001, 0x0035, 0x0037, 0x0038, 0xB876, 0x2E11, 0xA061, 0xFF1F},
    {0x0001, 0x0035, 0x0038, 0x0036, 0xFAF5, 0x4AB0, 0x982D, 0xFF86},
    {0x0001, 0x0035, 0x0033, 0x0039, 0x8C1A, 0xFB00, 0xC9EA, 0xFEFE},
    {0x0001, 0x0035, 0x0039, 0x0037, 0x9572, 0xEAFC, 0xBC45, 0xFEE8},
    {0x0001, 0x0037, 0x0039, 0x0038, 0xADE5, 0xF257, 0x613C, 0x0000},
    {0x0001, 0x0038, 0x0039, 0x003A, 0x8C73, 0xF469, 0x35D1, 0xFF92},
    {0x0001, 0x003A, 0x0039, 0x003B, 0xF31B, 0xDD25, 0x7A7B, 0x0077},
    {0x0001, 0x003A, 0x003B, 0x003C, 0x2B79, 0x0000, 0x7863, 0x00DD},
    {0x0001, 0x0036, 0x0038, 0x003A, 0x5CD1, 0x2F24, 0x4A78, 0x0107},
    {0x0001, 0x0036, 0x003A, 0x003C, 0x4E63, 0x522D, 0x3B0A, 0x00F2},
    {0x0001, 0x003C, 0x003B, 0x003D, 0x4CCC, 0x0000, 0x6666, 0x00ED},
    {0x0001, 0x002F, 0x0036, 0x003C, 0x531A, 0x5047, 0x3711, 0x00F1},
    {0x0001, 0x002F, 0x003C, 0x003D, 0x5860, 0x48E8, 0x3913, 0x00F4},
    {0x0001, 0x0032, 0x0034, 0x003E, 0x2EC1, 0xAF4C, 0x57A9, 0x006C},
    {0x0001, 0x0032, 0x003E, 0x003F, 0x2ECB, 0xAF69, 0x57BD, 0x006C},
    {0x0001, 0x003D, 0x003B, 0x0032, 0x6559, 0xE021, 0x4763, 0x00BE},
    {0x0001, 0x003D, 0x0032, 0x003F, 0x1719, 0xB02F, 0x615C, 0x0066},
    {0x0001, 0x002F, 0x003D, 0x003F, 0x50FE, 0x4FCB, 0x3ACB, 0x00F5},
    {0x0001, 0x0031, 0x002F, 0x003F, 0x436C, 0x5101, 0x48A2, 0x0100},
    {0x0001, 0x0031, 0x003F, 0x003E, 0x429C, 0x528E, 0x47A1, 0x00FF},
    {0x0004, 0x00EB, 0x00EC, 0x00ED, 0x0000, 0x7FFF, 0x0000, 0xFFFF},
    {0x0004, 0x00EB, 0x00ED, 0x00EE, 0x0000, 0x7FFF, 0x0000, 0xFFFF},
    {0x0004, 0x00EF, 0x00EB, 0x00EE, 0x0000, 0x7FFF, 0x0000, 0xFFFF},
    {0x0004, 0x00F0, 0x00EF, 0x00EE, 0xF49B, 0x7F52, 0x0683, 0x0076},
    {0x0004, 0x00F0, 0x00EE, 0x00F1, 0xF4AC, 0x7F53, 0x068B, 0x0076},
    {0x0005, 0x00B5, 0x00B6, 0x00B7, 0x0000, 0x0000, 0x8001, 0x0577},
    {0x0005, 0x00B5, 0x00B7, 0x00B8, 0x0000, 0x0000, 0x8001, 0x0577},
    {0x0005, 0x00B7, 0x00B9, 0x00B8, 0x0000, 0x0000, 0x8001, 0x0577},
    {0x0005, 0x00B7, 0x00BA, 0x00B9, 0x0000, 0x0000, 0x8001, 0x0577},
    {0x0001, 0x00BA, 0x00B7, 0x0006, 0x7FFF, 0x0000, 0x0000, 0x001D},
    {0x0001, 0x00BA, 0x0006, 0x0007, 0x7FFF, 0x0000, 0x0000, 0x001D},
    {0x0001, 0x0005, 0x0004, 0x00B6, 0x8001, 0x0000, 0x0000, 0x001F},
    {0x0001, 0x0005, 0x00B6, 0x00BB, 0x8001, 0x0000, 0x0000, 0x001F},
    {0x0001, 0x0006, 0x00B7, 0x00B6, 0x0000, 0x8001, 0x0000, 0x0064},
    {0x0001, 0x0006, 0x00B6, 0x0004, 0x0000, 0x8001, 0x0000, 0x0064},
    {0x0001, 0x00BC, 0x00BD, 0x0079, 0x0000, 0x7FFF, 0x0000, 0xFFD8},
    {0x0001, 0x00BC, 0x0079, 0x00BE, 0x0000, 0x7FFF, 0x0000, 0xFFD8},
    {0x0005, 0x00BF, 0x00C0, 0x007C, 0x8001, 0x0000, 0x0000, 0x006F},
    {0x0005, 0x00BF, 0x007C, 0x00C1, 0x8001, 0x0000, 0x0000, 0x006F},
    {0x0005, 0x00C2, 0x00C3, 0x00BF, 0x0000, 0x0000, 0x7FFF, 0xFAC5},
    {0x0001, 0x00C2, 0x00BF, 0x00C1, 0x0000, 0x0000, 0x7FFF, 0xFAC5},
    {0x0005, 0x00C4, 0x00BE, 0x0079, 0x8001, 0x0000, 0x0000, 0x006F},
    {0x0005, 0x00C4, 0x0079, 0x00C0, 0x8001, 0x0000, 0x0000, 0x006F},
    {0x0005, 0x00BD, 0x00C5, 0x007A, 0x0000, 0x7FFF, 0x0000, 0xFFD8},
    {0x0001, 0x00BD, 0x007A, 0x0079, 0x0000, 0x7FFF, 0x0000, 0xFFD8},
    {0x0001, 0x00C2, 0x00C6, 0x00C7, 0x7FFF, 0x0000, 0x0000, 0xFF69},
    {0x0001, 0x00C2, 0x00C7, 0x00C3, 0x7FFF, 0x0000, 0x0000, 0xFF69},
    {0x0001, 0x00BD, 0x00BC, 0x00C8, 0x7FFF, 0x0000, 0x0000, 0xFF69},
    {0x0001, 0x00BD, 0x00C8, 0x00C7, 0x7FFF, 0x0000, 0x0000, 0xFF69},
    {0x0001, 0x00C6, 0x00C9, 0x00CA, 0x0000, 0x0000, 0x7FFF, 0xFB51},
    {0x0001, 0x00C6, 0x00CA, 0x00C7, 0x0000, 0x0000, 0x7FFF, 0xFB51},
    {0x0001, 0x00CA, 0x00C5, 0x00BD, 0x0000, 0x0000, 0x7FFF, 0xFB51},
    {0x0001, 0x00CA, 0x00BD, 0x00C7, 0x0000, 0x0000, 0x7FFF, 0xFB51},
    {0x0001, 0x007F, 0x007D, 0x00B8, 0x7FFF, 0x0000, 0x0000, 0x00BD},
    {0x0001, 0x007F, 0x00B8, 0x00B9, 0x7FFF, 0x0000, 0x0000, 0x00BD},
    {0x0001, 0x00CB, 0x00B5, 0x007E, 0x8001, 0x0000, 0x0000, 0x00D3},
    {0x0001, 0x00CB, 0x007E, 0x007B, 0x8001, 0x0000, 0x0000, 0x00D3},
    {0x0001, 0x00CB, 0x00BB, 0x00B6, 0x0000, 0x0000, 0x8001, 0x0577},
    {0x0001, 0x00CB, 0x00B6, 0x00B5, 0x0000, 0x0000, 0x8001, 0x0577},
    {0x0001, 0x007E, 0x00B5, 0x00B8, 0x0000, 0x8001, 0x0000, 0x00C8},
    {0x0001, 0x007E, 0x00B8, 0x007D, 0x0000, 0x8001, 0x0000, 0x00C8},
    {0x0005, 0x00CC, 0x0090, 0x0079, 0x8001, 0x0000, 0x0000, 0x006F},
    {0x0005, 0x00CC, 0x0079, 0x00BE, 0x8001, 0x0000, 0x0000, 0x006F},
    {0x0005, 0x00C1, 0x00CD, 0x00C4, 0x8001, 0x0000, 0x0000, 0x006F},
    {0x0005, 0x00C1, 0x00C4, 0x00BF, 0x8001, 0x0000, 0x0000, 0x006F},
    {0x0000, 0x0096, 0x00BB, 0x00BA, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0096, 0x00BA, 0x0097, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0006, 0x007C, 0x007F, 0x00B9, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0006, 0x007C, 0x00B9, 0x00CD, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x007B, 0x007C, 0x00CD, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x007B, 0x00CD, 0x00CB, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0000, 0x0001, 0x0002, 0x0000, 0x0000, 0x8001, 0x05DD},
    {0x0001, 0x0000, 0x0002, 0x0003, 0x0000, 0x0000, 0x8001, 0x05DD},
    {0x0001, 0x0000, 0x0004, 0x0005, 0x9EB5, 0x0000, 0x532B, 0xFC71},
    {0x0001, 0x0000, 0x0005, 0x0001, 0x9EB5, 0x0000, 0x532B, 0xFC71},
    {0x0001, 0x0006, 0x0003, 0x0002, 0x6085, 0x0000, 0x5411, 0xFC65},
    {0x0001, 0x0006, 0x0002, 0x0007, 0x6085, 0x0000, 0x5411, 0xFC65},
    {0x0001, 0x00E7, 0x00E8, 0x00E9, 0x0000, 0x0000, 0x8001, 0x0581},
    {0x0001, 0x00E7, 0x00E9, 0x00EA, 0x0000, 0x0000, 0x8001, 0x0581},
    {0x0005, 0x005A, 0x005B, 0x005C, 0x3FDE, 0xFBAD, 0x9129, 0x0487},
    {0x0005, 0x005B, 0x005D, 0x005C, 0x411E, 0x0000, 0x91CE, 0x0484},
    {0x0001, 0x005E, 0x005F, 0x0060, 0x3F98, 0xF371, 0x6E5E, 0x0482},
    {0x0001, 0x005E, 0x0061, 0x005F, 0x4075, 0xFBF9, 0x6E82, 0x0485},
    {0x0001, 0x0061, 0x0062, 0x005F, 0x4079, 0xFBE3, 0x6E7F, 0x0485},
    {0x0001, 0x0063, 0x0064, 0x005E, 0x0000, 0xFA0E, 0x7FDC, 0x0486},
    {0x0001, 0x0064, 0x0061, 0x005E, 0xFFFA, 0xFA38, 0x7FDE, 0x0486},
    {0x0001, 0x0064, 0x0065, 0x0061, 0x009F, 0xFDC0, 0x7FFA, 0x0483},
    {0x0001, 0x0066, 0x0067, 0x0068, 0x9168, 0xF676, 0xC046, 0x0484},
    {0x0001, 0x0067, 0x0069, 0x0068, 0x9159, 0xFA17, 0xBFEF, 0x0486},
    {0x0001, 0x0067, 0x006A, 0x0069, 0x90DE, 0xFD38, 0xC08E, 0x0484},
    {0x0001, 0x006B, 0x0067, 0x0066, 0xC076, 0xF256, 0x91BB, 0x0481},
    {0x0001, 0x006B, 0x006C, 0x0067, 0xBF3D, 0x0000, 0x9199, 0x0485},
    {0x0001, 0x006C, 0x006A, 0x0067, 0xBE08, 0xFC03, 0x9263, 0x0489},
    {0x0001, 0x006D, 0x0062, 0x006E, 0x1B4C, 0x708F, 0x367C, 0x016B},
    {0x0001, 0x0062, 0x0061, 0x006E, 0x25D7, 0x67A8, 0x40DB, 0x0202},
    {0x0001, 0x0061, 0x006F, 0x006E, 0x2230, 0x703E, 0x3326, 0x0171},
    {0x0001, 0x006F, 0x0061, 0x0070, 0x08C6, 0x718C, 0x3A6C, 0x0172},
    {0x0001, 0x0061, 0x0065, 0x0070, 0x0013, 0x7F17, 0x0F35, 0xFFC3},
    {0x0001, 0x0065, 0x0071, 0x0070, 0xF7C4, 0x7195, 0x3A70, 0x0171},
    {0x0001, 0x0072, 0x006A, 0x0073, 0xD5E4, 0x7883, 0xF6AF, 0x0098},
    {0x0001, 0x0072, 0x0069, 0x006A, 0xA3A9, 0x4741, 0xCB49, 0x034E},
    {0x0001, 0x005D, 0x0074, 0x006C, 0x0000, 0x59BB, 0xA4B9, 0x027D},
    {0x0001, 0x005D, 0x0075, 0x0074, 0xF695, 0x7512, 0xCD1F, 0x00BF},
    {0x0001, 0x0074, 0x0076, 0x006C, 0x1297, 0x733F, 0xCB81, 0x00BB},
    {0x0001, 0x0075, 0x005D, 0x005B, 0x0B57, 0x76D1, 0xD1C5, 0x00C4},
    {0x0001, 0x0075, 0x005B, 0x0077, 0x0894, 0x7854, 0xD536, 0x0098},
    {0x0001, 0x0075, 0x0077, 0x0078, 0xBEF7, 0x0000, 0x6E3E, 0xFB42},
    {0x0001, 0x0073, 0x006A, 0x006C, 0xF70C, 0x78A9, 0xD63C, 0x0091},
    {0x0001, 0x0073, 0x006C, 0x0076, 0xF4BB, 0x76D1, 0xD1C0, 0x00C4},
    {0x0005, 0x0079, 0x007A, 0x007B, 0x0000, 0x0000, 0x8001, 0x0487},
    {0x0005, 0x0079, 0x007B, 0x007C, 0x0000, 0x0000, 0x8001, 0x0487},
    {0x0005, 0x007D, 0x005D, 0x006C, 0x0000, 0x0000, 0x8001, 0x0487},
    {0x0001, 0x007D, 0x006C, 0x007E, 0x0000, 0x0000, 0x8001, 0x0487},
    {0x0001, 0x006C, 0x006B, 0x007B, 0x0000, 0x0000, 0x8001, 0x0487},
    {0x0001, 0x006C, 0x007B, 0x007E, 0x0000, 0x0000, 0x8001, 0x0487},
    {0x0001, 0x007D, 0x007F, 0x005C, 0x0000, 0x0000, 0x8001, 0x0487},
    {0x0001, 0x007D, 0x005C, 0x005D, 0x0000, 0x0000, 0x8001, 0x0487},
    {0x0001, 0x0080, 0x0081, 0x0072, 0xAE6D, 0x5EFE, 0xE573, 0x0272},
    {0x0001, 0x0081, 0x0069, 0x0072, 0x9A68, 0x48CE, 0xE469, 0x0363},
    {0x0001, 0x0068, 0x0069, 0x0081, 0x8493, 0xFAEE, 0xDE7B, 0x04AF},
    {0x0001, 0x0068, 0x0081, 0x0082, 0x84C4, 0xF94C, 0xDE13, 0x04AE},
    {0x0001, 0x0083, 0x0081, 0x0080, 0xB707, 0x6340, 0x22C0, 0x02D2},
    {0x0001, 0x0083, 0x0080, 0x0084, 0xB544, 0x617F, 0x23F3, 0x02ED},
    {0x0001, 0x0082, 0x0081, 0x0083, 0x8C86, 0xFB07, 0x36FD, 0x0573},
    {0x0001, 0x0082, 0x0083, 0x0085, 0x8C6D, 0xFA31, 0x36B2, 0x0573},
    {0x0001, 0x0083, 0x0086, 0x0087, 0xB0CF, 0xFB69, 0x6474, 0x0571},
    {0x0001, 0x0083, 0x0087, 0x0085, 0xB042, 0xFBFE, 0x640A, 0x0572},
    {0x0001, 0x0086, 0x0083, 0x0084, 0xCBA3, 0x6011, 0x426D, 0x02FF},
    {0x0001, 0x0086, 0x0084, 0x0088, 0xC9B9, 0x53CB, 0x5019, 0x038B},
    {0x0001, 0x0071, 0x0086, 0x0088, 0xE3BD, 0x4E0D, 0x616E, 0x0354},
    {0x0001, 0x0071, 0x0065, 0x0086, 0xF2A1, 0x71C3, 0x391E, 0x0171},
    {0x0001, 0x0086, 0x0065, 0x0064, 0xE2D6, 0xFD05, 0x7C98, 0x04AC},
    {0x0001, 0x0087, 0x0086, 0x0064, 0xE2C5, 0xFD6D, 0x7C96, 0x04AC},
    {0x0001, 0x0087, 0x0064, 0x0063, 0xE239, 0xF87D, 0x7C42, 0x04AD},
    {0x0001, 0x0089, 0x008A, 0x008B, 0x3303, 0x7097, 0x213C, 0x01A3},
    {0x0001, 0x0062, 0x006D, 0x008B, 0x291F, 0x71C2, 0x29D9, 0x0172},
    {0x0001, 0x008A, 0x0062, 0x008B, 0x214C, 0x7857, 0x1C29, 0x00DA},
    {0x0001, 0x0060, 0x005F, 0x008C, 0x6145, 0xF598, 0x528B, 0x04A9},
    {0x0001, 0x005F, 0x0062, 0x008A, 0x61B3, 0xFC98, 0x529F, 0x04A9},
    {0x0001, 0x005F, 0x008A, 0x008C, 0x6145, 0xFA26, 0x52FE, 0x04AA},
    {0x0001, 0x008D, 0x008E, 0x008A, 0x3C86, 0x70C7, 0x00F5, 0x01AB},
    {0x0001, 0x008D, 0x008A, 0x0089, 0x3C23, 0x70FC, 0x00E9, 0x01A7},
    {0x0001, 0x008C, 0x008A, 0x008E, 0x7FEB, 0xFC12, 0x0206, 0x0500},
    {0x0001, 0x008C, 0x008E, 0x008F, 0x7FD7, 0xFA2E, 0x028F, 0x0500},
    {0x0001, 0x0077, 0x005B, 0x008E, 0x1B57, 0x7A9B, 0xE772, 0x0097},
    {0x0001, 0x0077, 0x008E, 0x008D, 0x30FC, 0x6F29, 0xD7AB, 0x01AD},
    {0x0001, 0x008F, 0x008E, 0x005B, 0x5F33, 0xFCFC, 0xAA7F, 0x04AB},
    {0x0001, 0x008F, 0x005B, 0x005A, 0x5FA8, 0xFA57, 0xAB25, 0x04AD},
    {0x0005, 0x0090, 0x007E, 0x007A, 0x0000, 0x0000, 0x8001, 0x0487},
    {0x0005, 0x0090, 0x007A, 0x0079, 0x0000, 0x0000, 0x8001, 0x0487},
    {0x0001, 0x0040, 0x0041, 0x0042, 0x411C, 0xFD34, 0x91D6, 0x04CB},
    {0x0001, 0x0040, 0x0042, 0x0043, 0x3FF8, 0xFF48, 0x9123, 0x04C6},
    {0x0001, 0x0044, 0x0045, 0x0046, 0xBE52, 0x0035, 0x9224, 0x04B2},
    {0x0001, 0x0044, 0x0046, 0x0047, 0xC00C, 0xFD1B, 0x912A, 0x04BA},
    {0x0001, 0x0047, 0x0046, 0x0048, 0x90DE, 0xFE57, 0xC086, 0x04B4},
    {0x0001, 0x0047, 0x0048, 0x0049, 0x9128, 0xFD78, 0xC00B, 0x04B7},
    {0x0001, 0x004A, 0x004B, 0x004C, 0x0098, 0xFE2F, 0x7FFB, 0x04C3},
    {0x0001, 0x004A, 0x004C, 0x004D, 0x0000, 0xFD44, 0x7FF8, 0x04C5},
    {0x0001, 0x004D, 0x004C, 0x004E, 0x4079, 0xFDCA, 0x6E8D, 0x04CA},
    {0x0001, 0x004D, 0x004E, 0x004F, 0x3FF3, 0xFCDF, 0x6ED5, 0x04CC},
    {0x0001, 0x0050, 0x0042, 0x0045, 0x0000, 0xFF9E, 0x8001, 0x04BF},
    {0x0001, 0x0050, 0x0045, 0x0051, 0x0000, 0xFF9E, 0x8001, 0x04BF},
    {0x0001, 0x0049, 0x0048, 0x0052, 0x842F, 0xFDEA, 0xDF9F, 0x04E0},
    {0x0001, 0x0049, 0x0052, 0x0053, 0x843B, 0xFDA2, 0xDF79, 0x04E1},
    {0x0001, 0x0053, 0x0052, 0x0054, 0x8A90, 0xFE88, 0x32E2, 0x05AC},
    {0x0001, 0x0053, 0x0054, 0x0055, 0x8C7B, 0x0582, 0x36D8, 0x059D},
    {0x0001, 0x0055, 0x0054, 0x004B, 0xE42F, 0x05D5, 0x7CCD, 0x04C9},
    {0x0001, 0x0055, 0x004B, 0x004A, 0xE03C, 0xFDDB, 0x7BF9, 0x04EC},
    {0x0001, 0x0056, 0x0057, 0x0058, 0x7FF4, 0xFD3C, 0x01C3, 0x0549},
    {0x0001, 0x0056, 0x0058, 0x0059, 0x7FE9, 0xFC08, 0x0274, 0x054C},
    {0x0001, 0x004F, 0x004E, 0x0057, 0x6256, 0xFD15, 0x51E2, 0x04F5},
    {0x0001, 0x004F, 0x0057, 0x0056, 0x621C, 0xFC89, 0x5221, 0x04F5},
    {0x0001, 0x0059, 0x0058, 0x0041, 0x5FFA, 0xFDA4, 0xAB59, 0x04F0},
    {0x0001, 0x0059, 0x0041, 0x0040, 0x6070, 0xFC6C, 0xABEB, 0x04F4},
};

Vec3s turibori_sceneCollisionHeader_001CACVertices[] = {
    {     84,    160,   1501 },
    {     84,      0,   1501 },
    {    -83,      0,   1501 },
    {    -83,    160,   1501 },
    {     31,    100,   1439 },
    {     31,      0,   1439 },
    {    -29,    100,   1439 },
    {    -29,      0,   1439 },
    {   -537,    -97,   -320 },
    {   -373,    -35,   -228 },
    {   -371,    -32,   -267 },
    {   -531,    -96,   -351 },
    {   -464,   -110,   -279 },
    {   -338,   -151,   -217 },
    {   -338,    -35,   -217 },
    {   -329,    -33,   -245 },
    {   -304,    -47,   -199 },
    {   -293,    -46,   -218 },
    {   -304,   -151,   -199 },
    {   -203,   -151,   -179 },
    {   -294,   -151,   -244 },
    {   -294,    -45,   -244 },
    {   -324,   -151,   -275 },
    {   -324,    -32,   -275 },
    {   -360,    -32,   -286 },
    {   -453,   -110,   -339 },
    {   -523,    -93,   -379 },
    {   -248,    -93,    122 },
    {   -278,   -127,    148 },
    {   -259,    -76,     69 },
    {   -290,   -129,     96 },
    {   -404,    -70,    292 },
    {   -368,    -88,    307 },
    {   -390,    -79,    333 },
    {   -419,   -104,    346 },
    {   -371,   -129,    293 },
    {   -436,    -57,    331 },
    {   -407,    -71,    353 },
    {   -491,    -72,    385 },
    {   -454,    -95,    384 },
    {   -448,   -124,    372 },
    {   -449,    -93,    327 },
    {   -475,   -106,    371 },
    {   -431,   -101,    307 },
    {   -409,   -111,    281 },
    {   -144,   -121,   -240 },
    {   -164,   -110,   -225 },
    {   -133,    -95,   -221 },
    {     -3,   -148,   -340 },
    {     37,   -128,   -342 },
    {   -128,   -148,   -225 },
    {   -180,   -134,   -213 },
    {    -18,   -169,   -303 },
    {   -181,   -100,   -214 },
    {   -164,    -78,   -199 },
    {   -205,    -75,   -184 },
    {   -199,    -47,   -175 },
    {   -194,   -134,   -183 },
    {   -192,    -75,   -166 },
    {   -156,   -134,   -179 },
    {   -156,   -100,   -179 },
    {   -140,   -110,   -191 },
    {     22,   -148,   -305 },
    {   -119,   -121,   -205 },
    {   -904,    126,    888 },
    {   -891,    547,    885 },
    {   -336,    548,   1213 },
    {   -339,    126,   1214 },
    {    313,    126,   1214 },
    {    316,    548,   1213 },
    {    878,    547,    877 },
    {    878,    126,    888 },
    {   1199,    547,    315 },
    {   1204,    126,    323 },
    {    313,    126,  -1219 },
    {    308,    547,  -1213 },
    {   -340,    547,  -1210 },
    {   -339,    126,  -1219 },
    {   -899,    547,   -884 },
    {   -904,    126,   -893 },
    {   -338,    212,   1214 },
    {    314,    215,   1214 },
    {   1392,    547,   -423 },
    {   1399,    126,   -419 },
    {   1129,    547,  -1030 },
    {   1117,    126,  -1013 },
    {  -1346,    126,   -365 },
    {  -1337,    547,   -358 },
    {  -1347,    547,    368 },
    {  -1360,    126,    365 },
    {   -849,      0,    849 },
    {   -839,    199,    847 },
    {   -311,      0,   1159 },
    {   -311,    270,   1159 },
    {   -311,      0,  -1159 },
    {   -848,     49,   -844 },
    {   -849,      0,   -849 },
    {   -314,    199,  -1150 },
    {   -847,    199,   -839 },
    {    311,      0,  -1159 },
    {    306,     86,  -1155 },
    {    303,    199,  -1153 },
    {    849,      0,    849 },
    {    848,     45,    844 },
    {   1159,      0,    311 },
    {   1153,    199,    303 },
    {    847,    199,    839 },
    {    311,      0,   1159 },
    {    311,    270,   1159 },
    {   -889,    230,   -882 },
    {   -609,    241,  -1045 },
    {   -329,    230,  -1208 },
    {     -5,    206,  -1210 },
    {    319,    230,  -1211 },
    {   1211,    286,    319 },
    {    889,    217,    882 },
    {    109,    329,   1217 },
    {   -326,    294,   1217 },
    {    326,    294,   1217 },
    {   -882,    217,    889 },
    {   -604,    242,   1053 },
    {    111,     40,   1159 },
    {    211,     40,   1159 },
    {    211,      0,   1159 },
    {    111,      0,   1159 },
    {   -189,    200,   1159 },
    {    211,    200,   1159 },
    {   -189,      0,   1159 },
    {   1396,    240,   -414 },
    {   1345,    199,   -404 },
    {   1355,      0,   -401 },
    {   1115,    199,   -887 },
    {   1166,    251,   -922 },
    {   1125,      0,   -887 },
    {    978,    199,   -995 },
    {    987,      0,   -997 },
    {   1021,    267,  -1037 },
    {  -1327,    230,   -356 },
    {  -1269,    199,   -340 },
    {  -1166,    240,   -637 },
    {  -1275,      0,   -347 },
    {  -1338,    230,    371 },
    {  -1280,    199,    356 },
    {  -1289,      0,    353 },
    {    111,    200,   1159 },
    {   1048,    -24,   1074 },
    {   1048,    -24,   -926 },
    {   -952,    -24,   -926 },
    {     57,      0,   1460 },
    {    -56,      0,   1460 },
    {     31,      0,   1419 },
    {    -29,      0,   1419 },
    {   -773,    -40,   -207 },
    {   -386,   -120,   -104 },
    {   -283,   -120,   -283 },
    {   -566,    -40,   -566 },
    {      0,   -160,      0 },
    {   -104,   -120,   -386 },
    {   -207,    -40,   -773 },
    {    104,   -120,   -386 },
    {    207,    -40,   -773 },
    {    283,   -120,   -283 },
    {    566,    -40,   -566 },
    {    386,   -120,   -104 },
    {    773,    -40,   -207 },
    {    386,   -120,    104 },
    {    773,    -40,    207 },
    {   -773,    -40,    207 },
    {   -386,   -120,    104 },
    {   -566,    -40,    566 },
    {   -283,   -120,    283 },
    {   -207,    -40,    773 },
    {   -104,   -120,    386 },
    {    207,    -40,    773 },
    {    104,   -120,    386 },
    {    566,    -40,    566 },
    {    283,   -120,    283 },
    {  -1159,      0,   -311 },
    {  -1159,      0,    311 },
    {    849,      0,   -849 },
    {   1159,      0,   -311 },
    {    211,    200,   1399 },
    {     31,    100,   1399 },
    {    -29,    100,   1399 },
    {   -189,    200,   1399 },
    {   -189,      0,   1399 },
    {    -29,      0,   1399 },
    {     31,      0,   1399 },
    {    151,     40,   1399 },
    {    151,     40,   1199 },
    {    111,     40,   1399 },
    {    111,     36,   1339 },
    {    111,     36,   1159 },
    {    111,      0,   1339 },
    {    151,      0,   1339 },
    {    151,     36,   1339 },
    {    111,     36,   1399 },
    {    211,     40,   1199 },
    {    151,      0,   1199 },
    {    151,     36,   1199 },
    {    151,     36,   1399 },
    {    211,      0,   1199 },
    {    211,     36,   1199 },
    {    211,      0,   1399 },
    {    111,    200,   1399 },
    {    111,      0,   1399 },
    {   1013,     29,   -846 },
    {   1054,     25,   -859 },
    {   1024,     38,   -865 },
    {   1022,    -21,   -835 },
    {   1065,    -21,   -869 },
    {   1025,    -30,   -899 },
    {   1026,      7,   -894 },
    {   1002,    -27,   -872 },
    {    998,      7,   -871 },
    {   1095,     -8,   -872 },
    {   1137,     -3,   -871 },
    {   1133,     52,   -869 },
    {   1094,     26,   -868 },
    {   1112,     56,   -888 },
    {    917,     -2,   -934 },
    {    962,     19,   -942 },
    {    960,     -4,   -948 },
    {    967,    -27,   -902 },
    {    953,     22,   -900 },
    {    923,     -2,   -899 },
    {   1088,     26,   -903 },
    {   1083,    -12,   -906 },
    {   1132,     44,   -911 },
    {   1129,     -3,   -925 },
    {    941,     31,   -918 },
    {     31,      0,   1409 },
    {    -29,      0,   1409 },
    {    -29,    100,   1409 },
    {     31,    100,   1409 },
    {    942,      1,   -862 },
    {   1068,      1,   -932 },
    {   1044,      1,   -952 },
    {    849,      1,   -849 },
    {    877,      1,   -800 },
    {    730,    -23,   -588 },
    {    678,    -23,   -678 },
};

WaterBox turibori_sceneCollisionHeader_001CACWaterBoxes[] = {
    { -952, -24, -926, 2000, 2000, 0x00000100 },
};

CollisionHeader turibori_sceneCollisionHeader_001CAC = { 
    { -1400, -169, -1271 },
    { 1444, 932, 1501 },
    242, turibori_sceneCollisionHeader_001CACVertices,
    336, turibori_sceneCollisionHeader_001CACPolygons,
    turibori_sceneCollisionHeader_001CACSurfaceType,
    turibori_sceneCollisionHeader_001CACCamDataList,
    1, turibori_sceneCollisionHeader_001CACWaterBoxes
};

u8 turibori_scene_possiblePadding_001CD8[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 turibori_sceneTex_001CE0[] = {
#include "assets/scenes/misc/turibori/turibori_sceneTex_001CE0.rgba16.inc.c"
};

u64 turibori_sceneTex_002CE0[] = {
#include "assets/scenes/misc/turibori/turibori_sceneTex_002CE0.rgba16.inc.c"
};

u64 turibori_sceneTex_003CE0[] = {
#include "assets/scenes/misc/turibori/turibori_sceneTex_003CE0.rgba16.inc.c"
};

u64 turibori_sceneTex_004CE0[] = {
#include "assets/scenes/misc/turibori/turibori_sceneTex_004CE0.rgba16.inc.c"
};

u64 turibori_sceneTex_004DE0[] = {
#include "assets/scenes/misc/turibori/turibori_sceneTex_004DE0.rgba16.inc.c"
};

u64 turibori_sceneTex_0051E0[] = {
#include "assets/scenes/misc/turibori/turibori_sceneTex_0051E0.ia16.inc.c"
};

u64 turibori_sceneTex_0059E0[] = {
#include "assets/scenes/misc/turibori/turibori_sceneTex_0059E0.ia8.inc.c"
};

u64 turibori_sceneTex_0069E0[] = {
#include "assets/scenes/misc/turibori/turibori_sceneTex_0069E0.ia8.inc.c"
};

u64 turibori_sceneTex_006BE0[] = {
#include "assets/scenes/misc/turibori/turibori_sceneTex_006BE0.rgba16.inc.c"
};

u64 turibori_sceneTex_007BE0[] = {
#include "assets/scenes/misc/turibori/turibori_sceneTex_007BE0.ia8.inc.c"
};

u64 turibori_sceneTex_007FE0[] = {
#include "assets/scenes/misc/turibori/turibori_sceneTex_007FE0.rgba16.inc.c"
};

u64 turibori_sceneTex_0081E0[] = {
#include "assets/scenes/misc/turibori/turibori_sceneTex_0081E0.rgba16.inc.c"
};

u64 turibori_sceneTex_0091E0[] = {
#include "assets/scenes/misc/turibori/turibori_sceneTex_0091E0.ia8.inc.c"
};

u64 turibori_sceneTex_0092E0[] = {
#include "assets/scenes/misc/turibori/turibori_sceneTex_0092E0.ia8.inc.c"
};

u64 turibori_sceneTex_0094E0[] = {
#include "assets/scenes/misc/turibori/turibori_sceneTex_0094E0.rgba16.inc.c"
};

u64 turibori_sceneTex_009CE0[] = {
#include "assets/scenes/misc/turibori/turibori_sceneTex_009CE0.rgba16.inc.c"
};

u64 turibori_sceneTex_00ACE0[] = {
#include "assets/scenes/misc/turibori/turibori_sceneTex_00ACE0.rgba16.inc.c"
};

u64 turibori_sceneTex_00BCE0[] = {
#include "assets/scenes/misc/turibori/turibori_sceneTex_00BCE0.ia8.inc.c"
};

u64 turibori_sceneTex_00CCE0[] = {
#include "assets/scenes/misc/turibori/turibori_sceneTex_00CCE0.rgba16.inc.c"
};

u64 turibori_sceneTex_00DCE0[] = {
#include "assets/scenes/misc/turibori/turibori_sceneTex_00DCE0.rgba16.inc.c"
};

u64 turibori_sceneTex_00E4E0[] = {
#include "assets/scenes/misc/turibori/turibori_sceneTex_00E4E0.rgba16.inc.c"
};

u64 turibori_sceneTex_00ECE0[] = {
#include "assets/scenes/misc/turibori/turibori_sceneTex_00ECE0.rgba16.inc.c"
};

u64 turibori_sceneTex_00F4E0[] = {
#include "assets/scenes/misc/turibori/turibori_sceneTex_00F4E0.ia4.inc.c"
};

u64 turibori_sceneTex_00FCE0[] = {
#include "assets/scenes/misc/turibori/turibori_sceneTex_00FCE0.rgba16.inc.c"
};

u64 turibori_sceneTex_0104E0[] = {
#include "assets/scenes/misc/turibori/turibori_sceneTex_0104E0.rgba16.inc.c"
};

u64 turibori_sceneTex_0114E0[] = {
#include "assets/scenes/misc/turibori/turibori_sceneTex_0114E0.i4.inc.c"
};

u64 turibori_sceneTex_0116E0[] = {
#include "assets/scenes/misc/turibori/turibori_sceneTex_0116E0.rgba16.inc.c"
};

