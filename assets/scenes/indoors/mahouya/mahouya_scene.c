#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "mahouya_scene.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "mahouya_room_0.h"

SceneCmd mahouya_sceneCommands[] = {
    SCENE_CMD_SOUND_SETTINGS(5, 19, 96),
    SCENE_CMD_ROOM_LIST(1, mahouya_sceneRoomList0x000080),
    SCENE_CMD_TRANSITION_ACTOR_LIST(1, mahouya_sceneTransitionActorList_000070),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x00000001),
    SCENE_CMD_COL_HEADER(&mahouya_sceneCollisionHeader_0009F4),
    SCENE_CMD_ENTRANCE_LIST(mahouya_sceneEntranceList0x000088),
    SCENE_CMD_SPECIAL_FILES(0x00, OBJECT_GAMEPLAY_FIELD_KEEP),
    SCENE_CMD_SPAWN_LIST(1, mahouya_sceneStartPositionList0x000060),
    SCENE_CMD_SKYBOX_SETTINGS(0, 0, true),
    SCENE_CMD_EXIT_LIST(mahouya_sceneExitList_00008C),
    SCENE_CMD_ENV_LIGHT_SETTINGS(4, mahouya_sceneLightSettings0x000090),
    SCENE_CMD_END(),
};

ActorEntry mahouya_sceneStartPositionList0x000060[] = {
    { ACTOR_PLAYER,     {    -11,      0,    381 }, {      0, 0X8000,      0 }, 0x0E00 },
};

TransitionActorEntry mahouya_sceneTransitionActorList_000070[] = {
    { 0, 255, 0, 255, ACTOR_EN_DOOR, -10, 0, 420, 0, 0x01BF },
};

RomFile mahouya_sceneRoomList0x000080[] = {
    { _mahouya_room_0SegmentRomStart, _mahouya_room_0SegmentRomEnd },
};

EntranceEntry mahouya_sceneEntranceList0x000088[] = {
    { 0x00, 0x00 },
    { 0x00, 0x00 },
};

u16 mahouya_sceneExitList_00008C[] = {
    0x034D,
    0x0000,
};

LightSettings mahouya_sceneLightSettings0x000090[] = {
    { 0x1E, 0x1E, 0x00, 0xA4, 0xCB, 0xBB, 0xB4, 0xB4, 0xC8, 0x00, 0x97, 0x46, 0x14, 0x14, 0x46, 0x32, 0x32, 0x14,
    0x07A2, 0x03E8 },
    { 0x69, 0x5A, 0x5A, 0x49, 0x49, 0x49, 0xFF, 0xFF, 0xF0, 0xB7, 0xB7, 0xB7, 0x32, 0x32, 0x5A, 0x64, 0x64, 0x78,
    0x07E4, 0x3200 },
    { 0x78, 0x5A, 0x00, 0x49, 0x49, 0x49, 0xFA, 0x87, 0x32, 0xB7, 0xB7, 0xB7, 0x1E, 0x1E, 0x3C, 0x1C, 0x14, 0x00,
    0x07E1, 0x3200 },
    { 0x28, 0x28, 0x46, 0x49, 0x49, 0x49, 0x14, 0x14, 0x23, 0xB7, 0xB7, 0xB7, 0x32, 0x32, 0x64, 0x00, 0x00, 0x1E,
    0x07E0, 0x3200 },
};

u8 mahouya_scene_possiblePadding_0000E8[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vec3s mahouya_sceneCollisionHeader_0009F4CamPosData[] = {
    {   -154,    112,    283 },
    {   4915,   6190,      0 },
    {     -1,     -1,     -1 },
};

CamData mahouya_sceneCollisionHeader_0009F4CamDataList[] = {
    { 0x0040, 3, &mahouya_sceneCollisionHeader_0009F4CamPosData[0] },
    { 0x0000, 0, NULL },
};

SurfaceType mahouya_sceneCollisionHeader_0009F4SurfaceType[] = {
    { 0x00000001, 0x0000080D },
    { 0x00000000, 0x0000080A },
    { 0x00000000, 0x00000FCA },
    { 0x00000001, 0x00000FCD },
    { 0x00000000, 0x0000080D },
    { 0x00000101, 0x0000080D },
};

CollisionPoly mahouya_sceneCollisionHeader_0009F4Polygons[] = {
    {0x0000, 0x002C, 0x002D, 0x002E, 0x1D16, 0x0000, 0x7CA6, 0xFF78},
    {0x0000, 0x002C, 0x002E, 0x002F, 0x1D16, 0x0000, 0x7CA6, 0xFF78},
    {0x0001, 0x0030, 0x0031, 0x0032, 0x0000, 0x7FFF, 0x0000, 0xFFA6},
    {0x0001, 0x0030, 0x0032, 0x0033, 0x0000, 0x7FFF, 0x0000, 0xFFA6},
    {0x0002, 0x0034, 0x0030, 0x0033, 0x0000, 0x7FFF, 0x0000, 0xFFA6},
    {0x0002, 0x0034, 0x0033, 0x0035, 0x0000, 0x7FFF, 0x0000, 0xFFA6},
    {0x0003, 0x0033, 0x0032, 0x0036, 0x2BBE, 0x0000, 0x87B6, 0x016D},
    {0x0003, 0x0033, 0x0036, 0x0037, 0x2BBE, 0x0000, 0x87B6, 0x016D},
    {0x0003, 0x0035, 0x0033, 0x0037, 0x0000, 0x0000, 0x8001, 0x0150},
    {0x0003, 0x0035, 0x0037, 0x0038, 0x0000, 0x0000, 0x8001, 0x0150},
    {0x0003, 0x0036, 0x0039, 0x003A, 0x1C5E, 0x8330, 0x0000, 0x006E},
    {0x0003, 0x0037, 0x0036, 0x003A, 0x1C5E, 0x8330, 0x0000, 0x006E},
    {0x0003, 0x0037, 0x003A, 0x003B, 0x0000, 0x8001, 0x0000, 0x0050},
    {0x0003, 0x0038, 0x0037, 0x003B, 0x0000, 0x8001, 0x0000, 0x0050},
    {0x0003, 0x0031, 0x0039, 0x0036, 0x7FFF, 0x0000, 0x0000, 0x007B},
    {0x0003, 0x0031, 0x0036, 0x0032, 0x7FFF, 0x0000, 0x0000, 0x007B},
    {0x0003, 0x003C, 0x003D, 0x003E, 0x8001, 0x0000, 0x0000, 0x0060},
    {0x0003, 0x003C, 0x003E, 0x003F, 0x8001, 0x0000, 0x0000, 0x0060},
    {0x0003, 0x0040, 0x0041, 0x002F, 0x0000, 0x0000, 0x7FFF, 0xFF85},
    {0x0003, 0x0040, 0x002F, 0x002E, 0x0000, 0x0000, 0x7FFF, 0xFF85},
    {0x0003, 0x0022, 0x0023, 0x0024, 0x0000, 0x0000, 0x8001, 0x01F6},
    {0x0003, 0x0022, 0x0024, 0x0025, 0x0000, 0x0000, 0x8001, 0x01F6},
    {0x0000, 0x0026, 0x000D, 0x000E, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0026, 0x000E, 0x0027, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0004, 0x001D, 0x0028, 0x0029, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0004, 0x001D, 0x0029, 0x0018, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0004, 0x001B, 0x0019, 0x002A, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0004, 0x001B, 0x002A, 0x002B, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0004, 0x002A, 0x0019, 0x0018, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0004, 0x002A, 0x0018, 0x0029, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0003, 0x0042, 0x0043, 0x0044, 0x0000, 0x0000, 0x8001, 0x017C},
    {0x0003, 0x0042, 0x0044, 0x0045, 0x0000, 0x0000, 0x8001, 0x017C},
    {0x0003, 0x0046, 0x0047, 0x0045, 0x0000, 0x8001, 0x0000, 0x00BD},
    {0x0003, 0x0046, 0x0045, 0x0044, 0x0000, 0x8001, 0x0000, 0x00BD},
    {0x0003, 0x0048, 0x0049, 0x004A, 0x0000, 0x8001, 0x0000, 0x0091},
    {0x0003, 0x0048, 0x004A, 0x004B, 0x0000, 0x8001, 0x0000, 0x0091},
    {0x0003, 0x0049, 0x004C, 0x004D, 0x0000, 0x8001, 0x0000, 0x0091},
    {0x0003, 0x0049, 0x004D, 0x004A, 0x0000, 0x8001, 0x0000, 0x0091},
    {0x0003, 0x004C, 0x004E, 0x004F, 0x0000, 0x8001, 0x0000, 0x0091},
    {0x0003, 0x004C, 0x004F, 0x004D, 0x0000, 0x8001, 0x0000, 0x0091},
    {0x0003, 0x0048, 0x0050, 0x0051, 0x0000, 0x8001, 0x0000, 0x0091},
    {0x0003, 0x0048, 0x0051, 0x0052, 0x0000, 0x8001, 0x0000, 0x0091},
    {0x0003, 0x0051, 0x0053, 0x0054, 0x0000, 0x8001, 0x0000, 0x0091},
    {0x0003, 0x0051, 0x0054, 0x0052, 0x0000, 0x8001, 0x0000, 0x0091},
    {0x0003, 0x0055, 0x0050, 0x0056, 0x0000, 0x0000, 0x8001, 0x018C},
    {0x0003, 0x0055, 0x0056, 0x0057, 0x0000, 0x0000, 0x8001, 0x018C},
    {0x0003, 0x0047, 0x0013, 0x001A, 0x0000, 0x8001, 0x0000, 0x00BD},
    {0x0003, 0x0047, 0x001A, 0x0058, 0x0000, 0x8001, 0x0000, 0x00BD},
    {0x0003, 0x0059, 0x005A, 0x0047, 0x7FFF, 0x0000, 0x0000, 0x009C},
    {0x0003, 0x0059, 0x0047, 0x0058, 0x7FFF, 0x0000, 0x0000, 0x009C},
    {0x0003, 0x005B, 0x005C, 0x004B, 0x7FFF, 0x0000, 0x0000, 0x009C},
    {0x0003, 0x005B, 0x004B, 0x004F, 0x7FFF, 0x0000, 0x0000, 0x009C},
    {0x0003, 0x0000, 0x0001, 0x0002, 0x0000, 0x0000, 0x7FFF, 0xFE52},
    {0x0003, 0x0000, 0x0002, 0x0003, 0x0000, 0x0000, 0x7FFF, 0xFE52},
    {0x0003, 0x0004, 0x0005, 0x0006, 0x0000, 0x0000, 0x8001, 0x019A},
    {0x0003, 0x0004, 0x0006, 0x0007, 0x0000, 0x0000, 0x8001, 0x019A},
    {0x0003, 0x0008, 0x0009, 0x000A, 0x0000, 0x8001, 0x0000, 0x0064},
    {0x0003, 0x0008, 0x000A, 0x000B, 0x0000, 0x8001, 0x0000, 0x0064},
    {0x0003, 0x000C, 0x000B, 0x000A, 0x8001, 0x0000, 0x0000, 0x0014},
    {0x0003, 0x000C, 0x000A, 0x000D, 0x8001, 0x0000, 0x0000, 0x0014},
    {0x0003, 0x000E, 0x0009, 0x0008, 0x7FFF, 0x0000, 0x0000, 0x0028},
    {0x0003, 0x000E, 0x0008, 0x000F, 0x7FFF, 0x0000, 0x0000, 0x0028},
    {0x0003, 0x0010, 0x0011, 0x0012, 0x0000, 0x0000, 0x8001, 0x0190},
    {0x0003, 0x0010, 0x0012, 0x0013, 0x0000, 0x0000, 0x8001, 0x0190},
    {0x0003, 0x0008, 0x0014, 0x0015, 0x0000, 0x0000, 0x7FFF, 0xFE34},
    {0x0003, 0x0008, 0x0015, 0x000F, 0x0000, 0x0000, 0x7FFF, 0xFE34},
    {0x0003, 0x000C, 0x0016, 0x0017, 0x0000, 0x0000, 0x7FFF, 0xFE34},
    {0x0003, 0x000C, 0x0017, 0x000B, 0x0000, 0x0000, 0x7FFF, 0xFE34},
    {0x0003, 0x0008, 0x000B, 0x0017, 0x0000, 0x0000, 0x7FFF, 0xFE34},
    {0x0003, 0x0008, 0x0017, 0x0014, 0x0000, 0x0000, 0x7FFF, 0xFE34},
    {0x0003, 0x0012, 0x0011, 0x000A, 0x0000, 0x0000, 0x8001, 0x0190},
    {0x0003, 0x0012, 0x000A, 0x0009, 0x0000, 0x0000, 0x8001, 0x0190},
    {0x0003, 0x000A, 0x0011, 0x0018, 0x0000, 0x0000, 0x8001, 0x0190},
    {0x0003, 0x000A, 0x0018, 0x000D, 0x0000, 0x0000, 0x8001, 0x0190},
    {0x0003, 0x000E, 0x0019, 0x0012, 0x0000, 0x0000, 0x8001, 0x0190},
    {0x0003, 0x000E, 0x0012, 0x0009, 0x0000, 0x0000, 0x8001, 0x0190},
    {0x0003, 0x001A, 0x0013, 0x001B, 0x7FFF, 0x0000, 0x0000, 0x00A0},
    {0x0003, 0x001A, 0x001B, 0x001C, 0x7FFF, 0x0000, 0x0000, 0x00A0},
    {0x0003, 0x0012, 0x0019, 0x001B, 0x0000, 0x0000, 0x8001, 0x0190},
    {0x0003, 0x0012, 0x001B, 0x0013, 0x0000, 0x0000, 0x8001, 0x0190},
    {0x0003, 0x001D, 0x0018, 0x0011, 0x0000, 0x0000, 0x8001, 0x0190},
    {0x0003, 0x001D, 0x0011, 0x0010, 0x0000, 0x0000, 0x8001, 0x0190},
    {0x0005, 0x0023, 0x0026, 0x0027, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x0023, 0x0027, 0x0024, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0003, 0x005D, 0x005E, 0x005F, 0x0000, 0x7FFF, 0x0000, 0xFFB4},
    {0x0003, 0x005D, 0x005F, 0x0060, 0x0000, 0x7FFF, 0x0000, 0xFFB4},
    {0x0003, 0x0061, 0x0062, 0x005D, 0x0000, 0x7FFF, 0x0000, 0xFFB4},
    {0x0003, 0x0063, 0x0061, 0x005D, 0x0000, 0x7FFF, 0x0000, 0xFFB4},
    {0x0003, 0x0064, 0x0063, 0x005D, 0x0000, 0x7FFF, 0x0000, 0xFFB4},
    {0x0003, 0x0064, 0x005D, 0x0060, 0x0000, 0x7FFF, 0x0000, 0xFFB4},
    {0x0003, 0x0065, 0x0066, 0x0067, 0x0000, 0x7FFF, 0x0000, 0xFFB4},
    {0x0003, 0x0068, 0x0065, 0x0067, 0x0000, 0x7FFF, 0x0000, 0xFFB4},
    {0x0003, 0x0067, 0x0069, 0x006A, 0x0000, 0x7FFF, 0x0000, 0xFFB4},
    {0x0003, 0x0067, 0x006A, 0x006B, 0x0000, 0x7FFF, 0x0000, 0xFFB4},
    {0x0003, 0x0067, 0x006B, 0x006C, 0x0000, 0x7FFF, 0x0000, 0xFFB4},
    {0x0003, 0x0068, 0x0067, 0x006C, 0x0000, 0x7FFF, 0x0000, 0xFFB4},
    {0x0003, 0x001E, 0x001F, 0x0020, 0x0137, 0x8002, 0x0000, 0x00CB},
    {0x0003, 0x001E, 0x0020, 0x0021, 0x0137, 0x8002, 0x0000, 0x00CB},
};

Vec3s mahouya_sceneCollisionHeader_0009F4Vertices[] = {
    {     20,    100,    430 },
    {    -40,    100,    430 },
    {    -40,      0,    430 },
    {     20,      0,    430 },
    {     20,      0,    410 },
    {    -40,      0,    410 },
    {    -40,    100,    410 },
    {     20,    100,    410 },
    {    -40,    100,    460 },
    {    -40,    100,    400 },
    {     20,    100,    400 },
    {     20,    100,    460 },
    {     20,      0,    460 },
    {     20,      0,    400 },
    {    -40,      0,    400 },
    {    -40,      0,    460 },
    {    160,    189,    400 },
    {     40,    120,    400 },
    {    -60,    120,    400 },
    {   -160,    189,    400 },
    {    -60,    120,    460 },
    {    -60,      0,    460 },
    {     40,      0,    460 },
    {     40,    120,    460 },
    {     40,      0,    400 },
    {    -60,      0,    400 },
    {   -160,    189,   -109 },
    {   -160,      0,    400 },
    {   -160,      0,   -109 },
    {    160,      0,    400 },
    {    156,    204,     35 },
    {    156,    204,    400 },
    {   -160,    201,    400 },
    {   -160,    201,     35 },
    {     73,    160,    502 },
    {     73,      0,    502 },
    {    -93,      0,    502 },
    {    -93,    160,    502 },
    {     20,      0,    420 },
    {    -40,      0,    420 },
    {    160,      0,     74 },
    {     40,      0,    110 },
    {    -60,      0,    110 },
    {   -160,      0,     74 },
    {    160,      0,    102 },
    {    160,    204,    102 },
    {     70,    204,    123 },
    {     70,      0,    123 },
    {   -145,     90,    408 },
    {   -123,     90,    400 },
    {   -123,     90,    344 },
    {   -145,     90,    336 },
    {   -160,     90,    408 },
    {   -160,     90,    336 },
    {   -123,     85,    344 },
    {   -145,     80,    336 },
    {   -160,     80,    336 },
    {   -123,     85,    400 },
    {   -145,     80,    408 },
    {   -160,     80,    408 },
    {     96,    204,    400 },
    {     96,    204,    116 },
    {     96,      0,    116 },
    {     96,      0,    400 },
    {   -160,    204,    123 },
    {   -160,      0,    123 },
    {   -156,    201,    380 },
    {    156,    204,    380 },
    {    156,    189,    380 },
    {   -156,    189,    380 },
    {    156,    189,    400 },
    {   -156,    189,    400 },
    {   -160,    145,    400 },
    {   -160,    145,    184 },
    {   -156,    145,    184 },
    {   -156,    145,    400 },
    {   -160,    145,     37 },
    {   -156,    145,     37 },
    {   -160,    145,   -109 },
    {   -156,    145,   -109 },
    {   -160,    145,    396 },
    {     -2,    145,    396 },
    {     -2,    145,    400 },
    {    156,    145,    396 },
    {    156,    145,    400 },
    {    160,    145,    396 },
    {   -160,    160,    396 },
    {    160,    160,    396 },
    {   -156,    189,   -109 },
    {   -156,    204,   -109 },
    {   -156,    204,    400 },
    {   -156,    160,   -109 },
    {   -156,    160,    400 },
    {   -139,     76,     -8 },
    {   -153,     76,     -8 },
    {   -151,     76,      2 },
    {   -146,     76,     10 },
    {   -127,     76,      2 },
    {   -126,     76,     -8 },
    {   -132,     76,     10 },
    {   -139,     76,     13 },
    {    142,     76,      2 },
    {    144,     76,     -8 },
    {    130,     76,     -8 },
    {    137,     76,     10 },
    {    116,     76,     -8 },
    {    118,     76,      2 },
    {    123,     76,     10 },
    {    130,     76,     13 },
};

CollisionHeader mahouya_sceneCollisionHeader_0009F4 = { 
    { -160, 0, -109 },
    { 161, 218, 502 },
    109, mahouya_sceneCollisionHeader_0009F4Vertices,
    98, mahouya_sceneCollisionHeader_0009F4Polygons,
    mahouya_sceneCollisionHeader_0009F4SurfaceType,
    mahouya_sceneCollisionHeader_0009F4CamDataList,
    0, NULL
};

u64 mahouya_sceneTex_000A20[] = {
#include "assets/scenes/indoors/mahouya/mahouya_sceneTex_000A20.rgba16.inc.c"
};

u64 mahouya_sceneTex_001220[] = {
#include "assets/scenes/indoors/mahouya/mahouya_sceneTex_001220.rgba16.inc.c"
};

u64 mahouya_sceneTex_001A20[] = {
#include "assets/scenes/indoors/mahouya/mahouya_sceneTex_001A20.rgba16.inc.c"
};

u64 mahouya_sceneTex_002A20[] = {
#include "assets/scenes/indoors/mahouya/mahouya_sceneTex_002A20.rgba16.inc.c"
};

u64 mahouya_sceneTex_003A20[] = {
#include "assets/scenes/indoors/mahouya/mahouya_sceneTex_003A20.rgba16.inc.c"
};

u64 mahouya_sceneTex_004A20[] = {
#include "assets/scenes/indoors/mahouya/mahouya_sceneTex_004A20.rgba16.inc.c"
};

u64 mahouya_sceneTex_005220[] = {
#include "assets/scenes/indoors/mahouya/mahouya_sceneTex_005220.rgba16.inc.c"
};

u64 mahouya_sceneTex_006220[] = {
#include "assets/scenes/indoors/mahouya/mahouya_sceneTex_006220.rgba16.inc.c"
};

u64 mahouya_sceneTex_007220[] = {
#include "assets/scenes/indoors/mahouya/mahouya_sceneTex_007220.rgba16.inc.c"
};

u64 mahouya_sceneTex_007A20[] = {
#include "assets/scenes/indoors/mahouya/mahouya_sceneTex_007A20.rgba16.inc.c"
};

u64 mahouya_sceneTex_008A20[] = {
#include "assets/scenes/indoors/mahouya/mahouya_sceneTex_008A20.i8.inc.c"
};

u64 mahouya_sceneTex_009220[] = {
#include "assets/scenes/indoors/mahouya/mahouya_sceneTex_009220.rgba16.inc.c"
};

u64 mahouya_sceneTex_009A20[] = {
#include "assets/scenes/indoors/mahouya/mahouya_sceneTex_009A20.rgba16.inc.c"
};
