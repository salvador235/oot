#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "market_alley_n_scene.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "market_alley_n_room_0.h"

SceneCmd market_alley_n_sceneCommands[] = {
    SCENE_CMD_SOUND_SETTINGS(0, 0, 127),
    SCENE_CMD_ROOM_LIST(1, market_alley_n_sceneRoomList0x0000E8),
    SCENE_CMD_TRANSITION_ACTOR_LIST(3, market_alley_n_sceneTransitionActorList_0000B8),
    SCENE_CMD_MISC_SETTINGS(0x30, 0x0000000E),
    SCENE_CMD_COL_HEADER(&market_alley_n_sceneCollisionHeader_0012C0),
    SCENE_CMD_ENTRANCE_LIST(market_alley_n_sceneEntranceList0x0000F0),
    SCENE_CMD_SPECIAL_FILES(0x01, OBJECT_GAMEPLAY_FIELD_KEEP),
    SCENE_CMD_PATH_LIST(market_alley_n_scenePathList_00019C),
    SCENE_CMD_SPAWN_LIST(5, market_alley_n_sceneStartPositionList0x000068),
    SCENE_CMD_SKYBOX_SETTINGS(0, 0, true),
    SCENE_CMD_EXIT_LIST(market_alley_n_sceneExitList_0000FC),
    SCENE_CMD_ENV_LIGHT_SETTINGS(1, market_alley_n_sceneLightSettings0x000108),
    SCENE_CMD_END(),
};

ActorEntry market_alley_n_sceneStartPositionList0x000068[] = {
    { ACTOR_PLAYER,     {   -531,      0,    647 }, {      0,      0,      0 }, 0x0F00 },
    { ACTOR_PLAYER,     {    520,      0,    641 }, {      0,      0,      0 }, 0x0F01 },
    { ACTOR_PLAYER,     {    631,      0,    740 }, {      0, 0XC000,      0 }, 0x0E01 },
    { ACTOR_PLAYER,     {   -626,      0,    982 }, {      0, 0X4000,      0 }, 0x0E00 },
    { ACTOR_PLAYER,     {    617,      0,    887 }, {      0, 0X8000,      0 }, 0x0E01 },
};

TransitionActorEntry market_alley_n_sceneTransitionActorList_0000B8[] = {
    { 0, 255, 0, 255, ACTOR_EN_DOOR, 620, 0, 927, -32768, 0x01BF },
    { 0, 255, 0, 255, ACTOR_EN_DOOR, -666, 0, 980, 16384, 0x01BF },
    { 0, 255, 0, 255, ACTOR_EN_DOOR, 666, 0, 740, -16384, 0x01BF },
};

RomFile market_alley_n_sceneRoomList0x0000E8[] = {
    { _market_alley_n_room_0SegmentRomStart, _market_alley_n_room_0SegmentRomEnd },
};

EntranceEntry market_alley_n_sceneEntranceList0x0000F0[] = {
    { 0x00, 0x00 },
    { 0x01, 0x00 },
    { 0x02, 0x00 },
    { 0x03, 0x00 },
    { 0x04, 0x00 },
    { 0x00, 0x00 },
};

u16 market_alley_n_sceneExitList_0000FC[] = {
    0x0262,
    0x029E,
    0x0528,
    0x043B,
    0x0398,
    0x0000,
};

LightSettings market_alley_n_sceneLightSettings0x000108[] = {
    { 0x19, 0x19, 0x19, 0x6A, 0x44, 0x0B, 0x78, 0x78, 0x8C, 0xE7, 0x67, 0xBB, 0xB4, 0xB4, 0xA0, 0x0A, 0x0A, 0x0A,
    0x07E0, 0x0BB8 },
};

Vec3s market_alley_n_scenePathwayList_000120[] = {
    {   -533,      0,    871 },
    {   -620,      0,    847 },
    {   -624,      0,    771 },
    {   -557,      0,    732 },
    {   -488,      0,    758 },
    {   -479,      0,    831 },
    {   -533,      0,    871 },
};

Vec3s market_alley_n_scenePathwayList_00014C[] = {
    {   -224,      0,   1318 },
    {   -311,      0,   1284 },
    {   -304,      0,   1222 },
    {   -220,      0,   1205 },
    {   -151,      0,   1242 },
    {   -159,      0,   1313 },
    {   -224,      0,   1318 },
};

Vec3s market_alley_n_scenePathwayList_000178[] = {
    {    143,      0,   1233 },
    {    162,      0,   1286 },
    {    117,      0,   1330 },
    {     28,      0,   1294 },
    {     41,      0,   1210 },
    {    143,      0,   1233 },
};

Path market_alley_n_scenePathList_00019C[] = {
    { 7, market_alley_n_scenePathwayList_000120 },
    { 7, market_alley_n_scenePathwayList_00014C },
    { 6, market_alley_n_scenePathwayList_000178 },
};

u8 market_alley_n_scene_possiblePadding_0001B4[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vec3s market_alley_n_sceneCollisionHeader_0012C0CamPosData[] = {
    {   -480,     30,    420 },
    {  -2731,  -2731,      0 },
    {   4683,      0,     -1 },
    {    520,     20,    440 },
    {  -1820,    910,      0 },
    {   4683,      1,     -1 },
    {   -600,     20,   1240 },
    {  -1820,  15474,      0 },
    {   4683,      2,     -1 },
};

CamData market_alley_n_sceneCollisionHeader_0012C0CamDataList[] = {
    { 0x0019, 3, &market_alley_n_sceneCollisionHeader_0012C0CamPosData[0] },
    { 0x0019, 3, &market_alley_n_sceneCollisionHeader_0012C0CamPosData[3] },
    { 0x0019, 3, &market_alley_n_sceneCollisionHeader_0012C0CamPosData[6] },
    { 0x0000, 0, NULL },
};

SurfaceType market_alley_n_sceneCollisionHeader_0012C0SurfaceType[] = {
    { 0x00000001, 0x00000802 },
    { 0x00000203, 0x00000802 },
    { 0x00000103, 0x00000802 },
    { 0x00000000, 0x00000802 },
    { 0x00000002, 0x00000802 },
    { 0x00000003, 0x00000802 },
    { 0x00000003, 0x00000FC2 },
    { 0x00000303, 0x00000FC2 },
    { 0x00000403, 0x00000FC2 },
    { 0x00000503, 0x00000FC2 },
    { 0x00000003, 0x00000FCA },
};

CollisionPoly market_alley_n_sceneCollisionHeader_0012C0Polygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0000, 0x0003, 0x0004, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0000, 0x0004, 0x0001, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0005, 0x0006, 0x0007, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0005, 0x0007, 0x0008, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0009, 0x000A, 0x0006, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0009, 0x0006, 0x0005, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x000B, 0x000C, 0x000D, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x000B, 0x000D, 0x000E, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x000D, 0x000F, 0x000E, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0003, 0x0010, 0x0011, 0x0012, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0003, 0x0012, 0x0011, 0x0013, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0004, 0x0012, 0x0014, 0x0015, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0004, 0x0014, 0x0012, 0x0013, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0004, 0x0014, 0x0013, 0x0016, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0004, 0x0000, 0x0017, 0x0018, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x0019, 0x000B, 0x000E, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x0000, 0x001A, 0x0003, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x000F, 0x001B, 0x001C, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x000F, 0x001C, 0x001D, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x000F, 0x001D, 0x000E, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x001D, 0x001C, 0x0010, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x001D, 0x0010, 0x0012, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x0004, 0x001E, 0x0001, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x0001, 0x001E, 0x001F, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x0001, 0x001F, 0x0005, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x0001, 0x0005, 0x0008, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x0001, 0x0008, 0x0002, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x0014, 0x0020, 0x0021, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x0014, 0x0021, 0x0015, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x0021, 0x0017, 0x0012, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x0022, 0x0020, 0x0014, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x0022, 0x0014, 0x0016, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x001F, 0x0009, 0x0005, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x0023, 0x0017, 0x0024, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x0025, 0x0023, 0x0024, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x0025, 0x0024, 0x0021, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x0025, 0x0021, 0x0026, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x001A, 0x0000, 0x0018, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x0027, 0x001F, 0x001E, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x0027, 0x001E, 0x0028, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0029, 0x002A, 0x0004, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0029, 0x0004, 0x0003, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x002B, 0x000C, 0x000B, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x002B, 0x000B, 0x002C, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0003, 0x002D, 0x002E, 0x0013, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0003, 0x002D, 0x0013, 0x0011, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0004, 0x002E, 0x002F, 0x0016, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0004, 0x002E, 0x0016, 0x0013, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0004, 0x0030, 0x0031, 0x0018, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0004, 0x0030, 0x0018, 0x0017, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0004, 0x0030, 0x0017, 0x0023, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x002A, 0x0028, 0x001E, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x002A, 0x001E, 0x0004, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x000A, 0x001F, 0x0027, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x001A, 0x0032, 0x0029, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x001A, 0x0029, 0x0003, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x0020, 0x0022, 0x0032, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x0020, 0x0032, 0x0026, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x0020, 0x0026, 0x0021, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x000B, 0x0019, 0x001D, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x000B, 0x001D, 0x0012, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x000B, 0x0012, 0x002C, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x0022, 0x0032, 0x0026, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x002F, 0x0032, 0x0022, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x002F, 0x0022, 0x0016, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x000A, 0x0028, 0x0032, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x000A, 0x0032, 0x0033, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x0025, 0x0026, 0x0030, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x0025, 0x0030, 0x0023, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x0031, 0x0032, 0x001A, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x0031, 0x001A, 0x0018, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x0022, 0x0026, 0x0021, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x0022, 0x0021, 0x0020, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0006, 0x0034, 0x0035, 0x0036, 0x8001, 0x0000, 0x0000, 0x0318},
    {0x0006, 0x0034, 0x0036, 0x0037, 0x8001, 0x0000, 0x0000, 0x0318},
    {0x0007, 0x0036, 0x0038, 0x0039, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0007, 0x0036, 0x0039, 0x0037, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0006, 0x0035, 0x003A, 0x003B, 0x0000, 0x0000, 0x7FFF, 0xFD3A},
    {0x0006, 0x0035, 0x003B, 0x0036, 0x0000, 0x0000, 0x7FFF, 0xFD3A},
    {0x0006, 0x0037, 0x003C, 0x003D, 0x0000, 0x0000, 0x8001, 0x0302},
    {0x0006, 0x0037, 0x003D, 0x0034, 0x0000, 0x0000, 0x8001, 0x0302},
    {0x0006, 0x003E, 0x003F, 0x000D, 0x0000, 0x0000, 0x7FFF, 0xFE98},
    {0x0006, 0x003E, 0x000D, 0x002B, 0x0000, 0x0000, 0x7FFF, 0xFE98},
    {0x0006, 0x003F, 0x0040, 0x0041, 0x7FFF, 0x0000, 0x0000, 0x0258},
    {0x0006, 0x003F, 0x0041, 0x000D, 0x7FFF, 0x0000, 0x0000, 0x0258},
    {0x0006, 0x0040, 0x0042, 0x0043, 0x0000, 0x0000, 0x7FFF, 0xFDD0},
    {0x0006, 0x0040, 0x0043, 0x0041, 0x0000, 0x0000, 0x7FFF, 0xFDD0},
    {0x0006, 0x0042, 0x0044, 0x0045, 0x7FFF, 0x0000, 0x0000, 0x0264},
    {0x0006, 0x0042, 0x0045, 0x0043, 0x7FFF, 0x0000, 0x0000, 0x0264},
    {0x0006, 0x0044, 0x0046, 0x0047, 0x0000, 0x0000, 0x7FFF, 0xFD80},
    {0x0006, 0x0044, 0x0047, 0x0045, 0x0000, 0x0000, 0x7FFF, 0xFD80},
    {0x0006, 0x0046, 0x0048, 0x0049, 0x7FFF, 0x0000, 0x0000, 0x0271},
    {0x0006, 0x0046, 0x0049, 0x0047, 0x7FFF, 0x0000, 0x0000, 0x0271},
    {0x0006, 0x0048, 0x004A, 0x001B, 0x0000, 0x0000, 0x7FFF, 0xFD3A},
    {0x0006, 0x0048, 0x001B, 0x0049, 0x0000, 0x0000, 0x7FFF, 0xFD3A},
    {0x0006, 0x004B, 0x004C, 0x004D, 0x0000, 0x0000, 0x8001, 0x0420},
    {0x0006, 0x004B, 0x004D, 0x001C, 0x0000, 0x0000, 0x8001, 0x0420},
    {0x0006, 0x004C, 0x004E, 0x004F, 0x7FFF, 0x0000, 0x0000, 0x0259},
    {0x0006, 0x004C, 0x004F, 0x004D, 0x7FFF, 0x0000, 0x0000, 0x0259},
    {0x0006, 0x004E, 0x0050, 0x0051, 0x0000, 0x0000, 0x8001, 0x0435},
    {0x0006, 0x004E, 0x0051, 0x004F, 0x0000, 0x0000, 0x8001, 0x0435},
    {0x0006, 0x0050, 0x0052, 0x0053, 0x7FFF, 0x0000, 0x0000, 0x021F},
    {0x0006, 0x0050, 0x0053, 0x0051, 0x7FFF, 0x0000, 0x0000, 0x021F},
    {0x0006, 0x0052, 0x0054, 0x0055, 0x0000, 0x0000, 0x8001, 0x0544},
    {0x0006, 0x0052, 0x0055, 0x0053, 0x0000, 0x0000, 0x8001, 0x0544},
    {0x0006, 0x0054, 0x0056, 0x0057, 0x7FFF, 0x0000, 0x0000, 0x0198},
    {0x0006, 0x0054, 0x0057, 0x0055, 0x7FFF, 0x0000, 0x0000, 0x0198},
    {0x0006, 0x0056, 0x0058, 0x0059, 0x0000, 0x0000, 0x8001, 0x0560},
    {0x0006, 0x0056, 0x0059, 0x0057, 0x0000, 0x0000, 0x8001, 0x0560},
    {0x0006, 0x0058, 0x005A, 0x005B, 0x8001, 0x0000, 0x0000, 0xFEC4},
    {0x0006, 0x0058, 0x005B, 0x0059, 0x8001, 0x0000, 0x0000, 0xFEC4},
    {0x0006, 0x005A, 0x005C, 0x005D, 0x0000, 0x0000, 0x8001, 0x0545},
    {0x0006, 0x005A, 0x005D, 0x005B, 0x0000, 0x0000, 0x8001, 0x0545},
    {0x0006, 0x005C, 0x005E, 0x005F, 0x7FFF, 0x0000, 0x0000, 0x00FB},
    {0x0006, 0x005C, 0x005F, 0x005D, 0x7FFF, 0x0000, 0x0000, 0x00FB},
    {0x0006, 0x005E, 0x0060, 0x0061, 0x0000, 0x0000, 0x8001, 0x0560},
    {0x0006, 0x005E, 0x0061, 0x005F, 0x0000, 0x0000, 0x8001, 0x0560},
    {0x0006, 0x0060, 0x0062, 0x0063, 0x8001, 0x0000, 0x0000, 0xFF57},
    {0x0006, 0x0060, 0x0063, 0x0061, 0x8001, 0x0000, 0x0000, 0xFF57},
    {0x0006, 0x0062, 0x0064, 0x0065, 0x0000, 0x0000, 0x8001, 0x0556},
    {0x0006, 0x0062, 0x0065, 0x0063, 0x0000, 0x0000, 0x8001, 0x0556},
    {0x0006, 0x0064, 0x0066, 0x0067, 0x8001, 0x0000, 0x0000, 0xFF9C},
    {0x0006, 0x0064, 0x0067, 0x0065, 0x8001, 0x0000, 0x0000, 0xFF9C},
    {0x0006, 0x0066, 0x0068, 0x0069, 0x0000, 0x0000, 0x8001, 0x053B},
    {0x0006, 0x0066, 0x0069, 0x0067, 0x0000, 0x0000, 0x8001, 0x053B},
    {0x0006, 0x0068, 0x006A, 0x006B, 0x8001, 0x0000, 0x0000, 0x00F0},
    {0x0006, 0x0068, 0x006B, 0x0069, 0x8001, 0x0000, 0x0000, 0x00F0},
    {0x0006, 0x006A, 0x006C, 0x006D, 0x0000, 0x0000, 0x8001, 0x0514},
    {0x0006, 0x006A, 0x006D, 0x006B, 0x0000, 0x0000, 0x8001, 0x0514},
    {0x0006, 0x006C, 0x006E, 0x006F, 0x8001, 0x0000, 0x0000, 0x023C},
    {0x0006, 0x006C, 0x006F, 0x006D, 0x8001, 0x0000, 0x0000, 0x023C},
    {0x0006, 0x0070, 0x0071, 0x0072, 0x0000, 0x0000, 0x7FFF, 0xFDA2},
    {0x0006, 0x0070, 0x0072, 0x0073, 0x0000, 0x0000, 0x7FFF, 0xFDA2},
    {0x0006, 0x0071, 0x0074, 0x0075, 0x8001, 0x0000, 0x0000, 0x0267},
    {0x0006, 0x0071, 0x0075, 0x0072, 0x8001, 0x0000, 0x0000, 0x0267},
    {0x0006, 0x0074, 0x0076, 0x0077, 0x0000, 0x0000, 0x7FFF, 0xFDCE},
    {0x0006, 0x0074, 0x0077, 0x0075, 0x0000, 0x0000, 0x7FFF, 0xFDCE},
    {0x0006, 0x0076, 0x0078, 0x0006, 0x8001, 0x0000, 0x0000, 0x0258},
    {0x0006, 0x0076, 0x0006, 0x0077, 0x8001, 0x0000, 0x0000, 0x0258},
    {0x0006, 0x0078, 0x0079, 0x0007, 0x0000, 0x0000, 0x7FFF, 0xFE5C},
    {0x0006, 0x0078, 0x0007, 0x0006, 0x0000, 0x0000, 0x7FFF, 0xFE5C},
    {0x0006, 0x0079, 0x007A, 0x007B, 0x7FFF, 0x0000, 0x0000, 0xFE48},
    {0x0006, 0x0079, 0x007B, 0x0007, 0x7FFF, 0x0000, 0x0000, 0xFE48},
    {0x0006, 0x007A, 0x007C, 0x007D, 0x0000, 0x0000, 0x8001, 0x024C},
    {0x0006, 0x007A, 0x007D, 0x007B, 0x0000, 0x0000, 0x8001, 0x024C},
    {0x0006, 0x007C, 0x007E, 0x007F, 0x7FFF, 0x0000, 0x0000, 0xFE2E},
    {0x0006, 0x007C, 0x007F, 0x007D, 0x7FFF, 0x0000, 0x0000, 0xFE2E},
    {0x0006, 0x007E, 0x0080, 0x0081, 0x0000, 0x0000, 0x7FFF, 0xFD50},
    {0x0006, 0x007E, 0x0081, 0x007F, 0x0000, 0x0000, 0x7FFF, 0xFD50},
    {0x0006, 0x0080, 0x0082, 0x0000, 0x7FFF, 0x0000, 0x0000, 0xFE47},
    {0x0006, 0x0080, 0x0000, 0x0081, 0x7FFF, 0x0000, 0x0000, 0xFE47},
    {0x0006, 0x0082, 0x0083, 0x0084, 0x0000, 0x0000, 0x7FFF, 0xFB66},
    {0x0006, 0x0082, 0x0084, 0x0000, 0x0000, 0x0000, 0x7FFF, 0xFB66},
    {0x0006, 0x0083, 0x0085, 0x0086, 0x7FFF, 0x0000, 0x0000, 0x012E},
    {0x0006, 0x0083, 0x0086, 0x0084, 0x7FFF, 0x0000, 0x0000, 0x012E},
    {0x0006, 0x0085, 0x0087, 0x0088, 0x0000, 0x0000, 0x7FFF, 0xFB5D},
    {0x0006, 0x0085, 0x0088, 0x0086, 0x0000, 0x0000, 0x7FFF, 0xFB5D},
    {0x0006, 0x0087, 0x0089, 0x008A, 0x8001, 0x0000, 0x0000, 0xFE9C},
    {0x0006, 0x0087, 0x008A, 0x0088, 0x8001, 0x0000, 0x0000, 0xFE9C},
    {0x0006, 0x0089, 0x008B, 0x0012, 0x0000, 0x0000, 0x7FFF, 0xFB65},
    {0x0006, 0x0089, 0x0012, 0x008A, 0x0000, 0x0000, 0x7FFF, 0xFB65},
    {0x0006, 0x008B, 0x008C, 0x008D, 0x8001, 0x0000, 0x0000, 0xFE48},
    {0x0006, 0x008B, 0x008D, 0x0012, 0x8001, 0x0000, 0x0000, 0xFE48},
    {0x0006, 0x008E, 0x008F, 0x003C, 0x8001, 0x0000, 0x0000, 0x0293},
    {0x0006, 0x008E, 0x003C, 0x0090, 0x8001, 0x0000, 0x0000, 0x0293},
    {0x0006, 0x0091, 0x0070, 0x0073, 0x8001, 0x0000, 0x0000, 0x0293},
    {0x0006, 0x0091, 0x0073, 0x003B, 0x8001, 0x0000, 0x0000, 0x0293},
    {0x0006, 0x008F, 0x0091, 0x003A, 0x8001, 0x0000, 0x0000, 0x0293},
    {0x0006, 0x008F, 0x003A, 0x003D, 0x8001, 0x0000, 0x0000, 0x0293},
    {0x0006, 0x006E, 0x0092, 0x0093, 0x0000, 0x0000, 0x8001, 0x0398},
    {0x0006, 0x006E, 0x0093, 0x006F, 0x0000, 0x0000, 0x8001, 0x0398},
    {0x0006, 0x0094, 0x008E, 0x0090, 0x0000, 0x0000, 0x8001, 0x0398},
    {0x0006, 0x0094, 0x0090, 0x0095, 0x0000, 0x0000, 0x8001, 0x0398},
    {0x0006, 0x0092, 0x0094, 0x0096, 0x0000, 0x0000, 0x8001, 0x0398},
    {0x0006, 0x0092, 0x0096, 0x0097, 0x0000, 0x0000, 0x8001, 0x0398},
    {0x0006, 0x0098, 0x0099, 0x009A, 0x7FFF, 0x0000, 0x0000, 0x0318},
    {0x0006, 0x0098, 0x009A, 0x009B, 0x7FFF, 0x0000, 0x0000, 0x0318},
    {0x0008, 0x009A, 0x009C, 0x009D, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0008, 0x009A, 0x009D, 0x009B, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0006, 0x0099, 0x009E, 0x009C, 0x0000, 0x0000, 0x8001, 0x03F2},
    {0x0006, 0x0099, 0x009C, 0x009A, 0x0000, 0x0000, 0x8001, 0x03F2},
    {0x0006, 0x009B, 0x009D, 0x009F, 0x0000, 0x0000, 0x7FFF, 0xFC4A},
    {0x0006, 0x009B, 0x009F, 0x0098, 0x0000, 0x0000, 0x7FFF, 0xFC4A},
    {0x0006, 0x00A0, 0x0093, 0x0097, 0x7FFF, 0x0000, 0x0000, 0xFDB2},
    {0x0006, 0x00A0, 0x0097, 0x00A1, 0x7FFF, 0x0000, 0x0000, 0xFDB2},
    {0x0006, 0x00A2, 0x0096, 0x0095, 0x8001, 0x0000, 0x0000, 0x028A},
    {0x0006, 0x00A2, 0x0095, 0x00A3, 0x8001, 0x0000, 0x0000, 0x028A},
    {0x0009, 0x00A4, 0x00A5, 0x00A6, 0x0000, 0x7FFF, 0x0000, 0xFFFF},
    {0x0009, 0x00A4, 0x00A6, 0x00A7, 0x0000, 0x7FFF, 0x0000, 0xFFFF},
    {0x0006, 0x00A1, 0x00A2, 0x00A3, 0x0000, 0x0000, 0x8001, 0x041D},
    {0x0006, 0x00A1, 0x00A3, 0x00A0, 0x0000, 0x0000, 0x8001, 0x041D},
    {0x0006, 0x001B, 0x004A, 0x004B, 0x7FFF, 0x0000, 0x0000, 0x0293},
    {0x0006, 0x001B, 0x004B, 0x001C, 0x7FFF, 0x0000, 0x0000, 0x0293},
    {0x000A, 0x0093, 0x0097, 0x0096, 0x0000, 0x0000, 0x8001, 0x0398},
    {0x000A, 0x0093, 0x0096, 0x0095, 0x0000, 0x0000, 0x8001, 0x0398},
    {0x000A, 0x003C, 0x003D, 0x003A, 0x8001, 0x0000, 0x0000, 0x0293},
    {0x000A, 0x003C, 0x003A, 0x003B, 0x8001, 0x0000, 0x0000, 0x0293},
};

Vec3s market_alley_n_sceneCollisionHeader_0012C0Vertices[] = {
    {    441,      0,   1178 },
    {    471,      0,   1066 },
    {    441,      0,   1066 },
    {    520,      0,   1178 },
    {    520,      0,   1066 },
    {    574,      0,    562 },
    {    600,      0,    420 },
    {    440,      0,    420 },
    {    440,      0,    562 },
    {    599,      0,    562 },
    {    600,      0,    560 },
    {   -542,      0,    562 },
    {   -520,      0,    360 },
    {   -600,      0,    360 },
    {   -578,      0,    562 },
    {   -634,      0,    562 },
    {   -613,      0,   1179 },
    {   -560,      0,   1320 },
    {   -440,      0,   1179 },
    {   -440,      0,   1320 },
    {   -356,      0,   1209 },
    {   -356,      0,   1183 },
    {   -356,      0,   1320 },
    {    320,      0,   1160 },
    {    441,      0,   1208 },
    {   -560,      0,    720 },
    {    520,      0,   1240 },
    {   -659,      0,    710 },
    {   -659,      0,   1056 },
    {   -520,      0,   1080 },
    {    520,      0,    880 },
    {    560,      0,    640 },
    {   -160,      0,   1280 },
    {      0,      0,   1200 },
    {   -160,      0,   1320 },
    {    301,      0,   1172 },
    {    301,      0,   1162 },
    {    200,      0,   1240 },
    {    200,      0,   1280 },
    {    600,      0,    720 },
    {    600,      0,    800 },
    {    650,      0,   1178 },
    {    635,      0,   1066 },
    {   -440,      0,    360 },
    {   -440,      0,    562 },
    {   -560,      0,   1400 },
    {   -440,      0,   1400 },
    {   -356,      0,   1400 },
    {    301,      0,   1305 },
    {    441,      0,   1340 },
    {    680,      0,   1400 },
    {    680,      0,    560 },
    {    792,     80,    770 },
    {    792,     80,    710 },
    {    792,      0,    710 },
    {    792,      0,    770 },
    {    680,      0,    710 },
    {    680,      0,    770 },
    {    659,     80,    710 },
    {    659,      0,    710 },
    {    659,      0,    770 },
    {    659,     80,    770 },
    {   -440,    400,    360 },
    {   -600,    400,    360 },
    {   -600,    400,    560 },
    {   -600,      0,    560 },
    {   -612,    400,    560 },
    {   -612,      0,    560 },
    {   -612,    400,    640 },
    {   -612,      0,    640 },
    {   -625,    400,    640 },
    {   -625,      0,    640 },
    {   -625,    400,    710 },
    {   -625,      0,    710 },
    {   -659,    400,    710 },
    {   -659,    400,   1056 },
    {   -601,    400,   1056 },
    {   -601,      0,   1056 },
    {   -601,    400,   1077 },
    {   -601,      0,   1077 },
    {   -543,    400,   1077 },
    {   -543,      0,   1077 },
    {   -543,    400,   1348 },
    {   -543,      0,   1348 },
    {   -408,    400,   1348 },
    {   -408,      0,   1348 },
    {   -408,    400,   1376 },
    {   -408,      0,   1376 },
    {   -316,    400,   1376 },
    {   -316,      0,   1376 },
    {   -316,    400,   1349 },
    {   -316,      0,   1349 },
    {   -251,    400,   1349 },
    {   -251,      0,   1349 },
    {   -251,    400,   1376 },
    {   -251,      0,   1376 },
    {   -169,    400,   1376 },
    {   -169,      0,   1376 },
    {   -169,    400,   1366 },
    {   -169,      0,   1366 },
    {   -100,    400,   1366 },
    {   -100,      0,   1366 },
    {   -100,    400,   1339 },
    {   -100,      0,   1339 },
    {    240,    400,   1339 },
    {    240,      0,   1339 },
    {    240,    400,   1300 },
    {    240,      0,   1300 },
    {    572,    400,   1300 },
    {    572,      0,   1300 },
    {    572,    400,    920 },
    {    572,      0,    920 },
    {    659,    400,    606 },
    {    615,    400,    606 },
    {    615,      0,    606 },
    {    659,      0,    606 },
    {    615,    400,    562 },
    {    615,      0,    562 },
    {    600,    400,    562 },
    {    600,      0,    562 },
    {    600,    400,    420 },
    {    440,    400,    420 },
    {    440,    400,    588 },
    {    440,      0,    588 },
    {    466,    400,    588 },
    {    466,      0,    588 },
    {    466,    400,    688 },
    {    466,      0,    688 },
    {    441,    400,    688 },
    {    441,      0,    688 },
    {    441,    400,   1178 },
    {   -302,    400,   1178 },
    {   -302,      0,   1178 },
    {   -302,    400,   1187 },
    {   -302,      0,   1187 },
    {   -356,    400,   1187 },
    {   -356,      0,   1187 },
    {   -356,    400,   1179 },
    {   -356,      0,   1179 },
    {   -440,    400,   1179 },
    {   -440,    400,    361 },
    {   -440,      0,    361 },
    {    659,    400,    920 },
    {    659,    400,    770 },
    {    659,      0,    920 },
    {    659,    400,    710 },
    {    590,    400,    920 },
    {    590,      0,    920 },
    {    650,    400,    920 },
    {    650,      0,    920 },
    {    650,     80,    920 },
    {    590,     80,    920 },
    {   -792,     80,    950 },
    {   -792,     80,   1010 },
    {   -792,      0,   1010 },
    {   -792,      0,    950 },
    {   -659,      0,   1010 },
    {   -659,      0,    950 },
    {   -659,     80,   1010 },
    {   -659,     80,    950 },
    {    590,      0,   1053 },
    {    590,     80,   1053 },
    {    650,     80,   1053 },
    {    650,      0,   1053 },
    {    650,      1,   1053 },
    {    650,      1,    941 },
    {    590,      1,    941 },
    {    590,      1,   1053 },
};

CollisionHeader market_alley_n_sceneCollisionHeader_0012C0 = { 
    { -800, 0, 200 },
    { 800, 400, 1400 },
    168, market_alley_n_sceneCollisionHeader_0012C0Vertices,
    198, market_alley_n_sceneCollisionHeader_0012C0Polygons,
    market_alley_n_sceneCollisionHeader_0012C0SurfaceType,
    market_alley_n_sceneCollisionHeader_0012C0CamDataList,
    0, NULL
};
