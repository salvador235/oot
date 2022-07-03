#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "kokiri_shop_scene.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "kokiri_shop_room_0.h"

SceneCmd kokiri_shop_sceneCommands[] = {
    SCENE_CMD_SOUND_SETTINGS(5, 19, 85),
    SCENE_CMD_ROOM_LIST(1, kokiri_shop_sceneRoomList0x000068),
    SCENE_CMD_MISC_SETTINGS(0x10, 0x00000004),
    SCENE_CMD_COL_HEADER(&kokiri_shop_sceneCollisionHeader_000950),
    SCENE_CMD_ENTRANCE_LIST(kokiri_shop_sceneEntranceList0x000070),
    SCENE_CMD_SPECIAL_FILES(0x01, OBJECT_GAMEPLAY_DANGEON_KEEP),
    SCENE_CMD_SPAWN_LIST(1, kokiri_shop_sceneStartPositionList0x000058),
    SCENE_CMD_SKYBOX_SETTINGS(17, 0, true),
    SCENE_CMD_EXIT_LIST(kokiri_shop_sceneExitList_000074),
    SCENE_CMD_ENV_LIGHT_SETTINGS(1, kokiri_shop_sceneLightSettings0x000078),
    SCENE_CMD_END(),
};

ActorEntry kokiri_shop_sceneStartPositionList0x000058[] = {
    { ACTOR_PLAYER,     {      0,      0,    109 }, {      0, 0X8000,      0 }, 0x0E00 },
};

RomFile kokiri_shop_sceneRoomList0x000068[] = {
    { _kokiri_shop_room_0SegmentRomStart, _kokiri_shop_room_0SegmentRomEnd },
};

EntranceEntry kokiri_shop_sceneEntranceList0x000070[] = {
    { 0x00, 0x00 },
    { 0x00, 0x00 },
};

u16 kokiri_shop_sceneExitList_000074[] = {
    0x0266,
    0x0000,
};

LightSettings kokiri_shop_sceneLightSettings0x000078[] = {
    { 0x46, 0x3C, 0x32, 0xC7, 0x60, 0x3A, 0x82, 0x82, 0x6E, 0x37, 0x62, 0xC6, 0xDC, 0xA0, 0x6E, 0x0A, 0x0A, 0x0A,
    0x07E0, 0x07D0 },
};

Vec3s kokiri_shop_sceneCollisionHeader_000950CamPosData[] = {
    {   -100,    100,    260 },
    {   2367,  28945,      0 },
    {   5000,     -1,     -1 },
    {      0,     60,     40 },
    {      0, -32768,      0 },
    {     -1,     -1,     -1 },
};

CamData kokiri_shop_sceneCollisionHeader_000950CamDataList[] = {
    { 0x0019, 3, &kokiri_shop_sceneCollisionHeader_000950CamPosData[0] },
    { 0x0017, 3, &kokiri_shop_sceneCollisionHeader_000950CamPosData[3] },
    { 0x0000, 0, NULL },
};

SurfaceType kokiri_shop_sceneCollisionHeader_000950SurfaceType[] = {
    { 0x00200002, 0x00003000 },
    { 0x00000002, 0x000037C0 },
    { 0x00000002, 0x00003000 },
    { 0x00000102, 0x000C3000 },
    { 0x00000002, 0x000017CA },
};

CollisionPoly kokiri_shop_sceneCollisionHeader_000950Polygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x8D84, 0x0000, 0x393E, 0xFF66},
    {0x0000, 0x0000, 0x0002, 0x0003, 0x8D84, 0x0000, 0x393E, 0xFF66},
    {0x0000, 0x0001, 0x0004, 0x0005, 0xC6C2, 0x0000, 0x727C, 0xFF50},
    {0x0000, 0x0001, 0x0005, 0x0002, 0xC6C2, 0x0000, 0x727C, 0xFF50},
    {0x0000, 0x0004, 0x0006, 0x0007, 0x393E, 0x0000, 0x727C, 0xFFA0},
    {0x0000, 0x0004, 0x0007, 0x0005, 0x393E, 0x0000, 0x727C, 0xFFA0},
    {0x0000, 0x0006, 0x0008, 0x0009, 0x727C, 0x0000, 0x393E, 0x0007},
    {0x0000, 0x0006, 0x0009, 0x0007, 0x727C, 0x0000, 0x393E, 0x0007},
    {0x0000, 0x0008, 0x000A, 0x000B, 0x727C, 0x0000, 0xC6C2, 0x0084},
    {0x0000, 0x0008, 0x000B, 0x0009, 0x727C, 0x0000, 0xC6C2, 0x0084},
    {0x0000, 0x000A, 0x000C, 0x000D, 0x393E, 0x0000, 0x8D84, 0x009B},
    {0x0000, 0x000A, 0x000D, 0x000B, 0x393E, 0x0000, 0x8D84, 0x009B},
    {0x0000, 0x000C, 0x000E, 0x000F, 0xC6C2, 0x0000, 0x8D84, 0x004A},
    {0x0000, 0x000C, 0x000F, 0x000D, 0xC6C2, 0x0000, 0x8D84, 0x004A},
    {0x0000, 0x000E, 0x0000, 0x0003, 0x8D84, 0x0000, 0xC6C2, 0xFFE3},
    {0x0000, 0x000E, 0x0003, 0x000F, 0x8D84, 0x0000, 0xC6C2, 0xFFE3},
    {0x0000, 0x0010, 0x0011, 0x0012, 0x8D84, 0x0000, 0x393E, 0xFFE8},
    {0x0000, 0x0010, 0x0012, 0x0013, 0x8D84, 0x0000, 0x393E, 0xFFE8},
    {0x0000, 0x0011, 0x0014, 0x0015, 0xC6C2, 0x0000, 0x727C, 0xFF8A},
    {0x0000, 0x0011, 0x0015, 0x0012, 0xC6C2, 0x0000, 0x727C, 0xFF8A},
    {0x0000, 0x0014, 0x0016, 0x0017, 0x393E, 0x0000, 0x727C, 0xFF54},
    {0x0000, 0x0014, 0x0017, 0x0015, 0x393E, 0x0000, 0x727C, 0xFF54},
    {0x0000, 0x0016, 0x0018, 0x0019, 0x727C, 0x0000, 0x393E, 0xFF7D},
    {0x0000, 0x0016, 0x0019, 0x0017, 0x727C, 0x0000, 0x393E, 0xFF7D},
    {0x0000, 0x0018, 0x001A, 0x001B, 0x727C, 0x0000, 0xC6C2, 0x0003},
    {0x0000, 0x0018, 0x001B, 0x0019, 0x727C, 0x0000, 0xC6C2, 0x0003},
    {0x0000, 0x001A, 0x001C, 0x001D, 0x393E, 0x0000, 0x8D84, 0x0061},
    {0x0000, 0x001A, 0x001D, 0x001B, 0x393E, 0x0000, 0x8D84, 0x0061},
    {0x0000, 0x001C, 0x001E, 0x001F, 0xC6C2, 0x0000, 0x8D84, 0x0096},
    {0x0000, 0x001C, 0x001F, 0x001D, 0xC6C2, 0x0000, 0x8D84, 0x0096},
    {0x0000, 0x001E, 0x0010, 0x0013, 0x8D84, 0x0000, 0xC6C2, 0x006E},
    {0x0000, 0x001E, 0x0013, 0x001F, 0x8D84, 0x0000, 0xC6C2, 0x006E},
    {0x0001, 0x0020, 0x0021, 0x0022, 0xA57E, 0x0000, 0xA57E, 0x0095},
    {0x0001, 0x0020, 0x0022, 0x0023, 0xA57E, 0x0000, 0xA57E, 0x0095},
    {0x0001, 0x0024, 0x0025, 0x0026, 0x8001, 0x0000, 0x0000, 0x00B0},
    {0x0001, 0x0024, 0x0026, 0x0027, 0x8001, 0x0000, 0x0000, 0x00B0},
    {0x0001, 0x0025, 0x0028, 0x0029, 0xA57E, 0x0000, 0x5A82, 0x00B0},
    {0x0001, 0x0025, 0x0029, 0x0026, 0xA57E, 0x0000, 0x5A82, 0x00B0},
    {0x0001, 0x0028, 0x002A, 0x002B, 0x0000, 0x0000, 0x7FFF, 0x00B0},
    {0x0001, 0x0028, 0x002B, 0x0029, 0x0000, 0x0000, 0x7FFF, 0x00B0},
    {0x0001, 0x002A, 0x002C, 0x002D, 0x5A82, 0x0000, 0x5A82, 0x00B0},
    {0x0001, 0x002A, 0x002D, 0x002B, 0x5A82, 0x0000, 0x5A82, 0x00B0},
    {0x0001, 0x002C, 0x002E, 0x002F, 0x7FFF, 0x0000, 0x0000, 0x00B0},
    {0x0001, 0x002C, 0x002F, 0x002D, 0x7FFF, 0x0000, 0x0000, 0x00B0},
    {0x0001, 0x002B, 0x002D, 0x002F, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x002B, 0x002F, 0x0030, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x002B, 0x0030, 0x0031, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x002B, 0x0031, 0x0027, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x002B, 0x0027, 0x0026, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x002B, 0x0026, 0x0029, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x002E, 0x0032, 0x0030, 0x5A82, 0x0000, 0xA57E, 0x00B0},
    {0x0001, 0x002E, 0x0030, 0x002F, 0x5A82, 0x0000, 0xA57E, 0x00B0},
    {0x0002, 0x0033, 0x0034, 0x0035, 0x6EDE, 0x0000, 0xC00A, 0x0094},
    {0x0002, 0x0033, 0x0035, 0x0036, 0x6EDE, 0x0000, 0xC00A, 0x0094},
    {0x0002, 0x0037, 0x0038, 0x0039, 0x5A82, 0x0000, 0x5A82, 0x0055},
    {0x0002, 0x0037, 0x0039, 0x003A, 0x5A82, 0x0000, 0x5A82, 0x0055},
    {0x0002, 0x003B, 0x003C, 0x003D, 0x0000, 0x0000, 0x7FFF, 0xFFF6},
    {0x0002, 0x003B, 0x003D, 0x003E, 0x0000, 0x0000, 0x7FFF, 0xFFF6},
    {0x0002, 0x003C, 0x003F, 0x0040, 0x7FFF, 0x0000, 0x0000, 0xFF88},
    {0x0002, 0x003C, 0x0040, 0x003D, 0x7FFF, 0x0000, 0x0000, 0xFF88},
    {0x0002, 0x003F, 0x0041, 0x0042, 0x0000, 0x0000, 0x7FFF, 0x0050},
    {0x0002, 0x003F, 0x0042, 0x0040, 0x0000, 0x0000, 0x7FFF, 0x0050},
    {0x0003, 0x0043, 0x2044, 0x0045, 0x0000, 0x7FFF, 0x0000, 0xFFFE},
    {0x0003, 0x0044, 0x2046, 0x0045, 0x0000, 0x7FFF, 0x0000, 0xFFFE},
    {0x0004, 0x0047, 0x0048, 0x0049, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0004, 0x0047, 0x0049, 0x004A, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0004, 0x0047, 0x004A, 0x004B, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0004, 0x0047, 0x004B, 0x004C, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0004, 0x0047, 0x004C, 0x004D, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0004, 0x0047, 0x004D, 0x004E, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0004, 0x0047, 0x004E, 0x004F, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0004, 0x0047, 0x004F, 0x0050, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0004, 0x0047, 0x0050, 0x0051, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0004, 0x0047, 0x0051, 0x0052, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0001, 0x0053, 0x0054, 0x0048, 0x7B12, 0x0000, 0x232A, 0xFF93},
    {0x0001, 0x0053, 0x0048, 0x0047, 0x7B12, 0x0000, 0x232A, 0xFF93},
    {0x0001, 0x0055, 0x0053, 0x0047, 0x4FF5, 0x0000, 0x63F3, 0xFFA4},
    {0x0001, 0x0055, 0x0047, 0x0052, 0x4FF5, 0x0000, 0x63F3, 0xFFA4},
    {0x0001, 0x0056, 0x0055, 0x0052, 0x287A, 0x0000, 0x796E, 0xFFBC},
    {0x0001, 0x0056, 0x0052, 0x0051, 0x287A, 0x0000, 0x796E, 0xFFBC},
    {0x0001, 0x0057, 0x0056, 0x0051, 0xDCD6, 0x0000, 0x7B12, 0xFFF2},
    {0x0001, 0x0057, 0x0051, 0x0050, 0xDCD6, 0x0000, 0x7B12, 0xFFF2},
    {0x0001, 0x0058, 0x0057, 0x0050, 0xA57E, 0x0000, 0x5A82, 0x0021},
    {0x0001, 0x0058, 0x0050, 0x004F, 0xA57E, 0x0000, 0x5A82, 0x0021},
    {0x0001, 0x0059, 0x0058, 0x004F, 0x84EE, 0x0000, 0x232A, 0x0044},
    {0x0001, 0x0059, 0x004F, 0x004E, 0x84EE, 0x0000, 0x232A, 0x0044},
    {0x0001, 0x005A, 0x0059, 0x004E, 0x8692, 0x0000, 0xD786, 0x0054},
    {0x0001, 0x005A, 0x004E, 0x004D, 0x8692, 0x0000, 0xD786, 0x0054},
    {0x0001, 0x005B, 0x005A, 0x004D, 0x9C0D, 0x0000, 0xB00B, 0x004D},
    {0x0001, 0x005B, 0x004D, 0x004C, 0x9C0D, 0x0000, 0xB00B, 0x004D},
    {0x0001, 0x005C, 0x005B, 0x004C, 0xDCD6, 0x0000, 0x84EE, 0x0028},
    {0x0001, 0x005C, 0x004C, 0x004B, 0xDCD6, 0x0000, 0x84EE, 0x0028},
    {0x0001, 0x005D, 0x005C, 0x004B, 0x287A, 0x0000, 0x8692, 0xFFF1},
    {0x0001, 0x005D, 0x004B, 0x004A, 0x287A, 0x0000, 0x8692, 0xFFF1},
    {0x0001, 0x005E, 0x005D, 0x004A, 0x5A82, 0x0000, 0xA57E, 0xFFC7},
    {0x0001, 0x005E, 0x004A, 0x0049, 0x5A82, 0x0000, 0xA57E, 0xFFC7},
    {0x0001, 0x0054, 0x005E, 0x0049, 0x796E, 0x0000, 0xD786, 0xFFA5},
    {0x0001, 0x0054, 0x0049, 0x0048, 0x796E, 0x0000, 0xD786, 0xFFA5},
};

Vec3s kokiri_shop_sceneCollisionHeader_000950Vertices[] = {
    {   -102,      0,    140 },
    {    -98,      0,    148 },
    {    -98,    120,    148 },
    {   -102,    120,    140 },
    {    -90,      0,    152 },
    {    -90,    120,    152 },
    {    -82,      0,    148 },
    {    -82,    120,    148 },
    {    -78,      0,    140 },
    {    -78,    120,    140 },
    {    -82,      0,    132 },
    {    -82,    120,    132 },
    {    -90,      0,    128 },
    {    -90,    120,    128 },
    {    -98,      0,    132 },
    {    -98,    120,    132 },
    {     48,      0,    150 },
    {     52,      0,    158 },
    {     52,    120,    158 },
    {     48,    120,    150 },
    {     60,      0,    162 },
    {     60,    120,    162 },
    {     68,      0,    158 },
    {     68,    120,    158 },
    {     72,      0,    150 },
    {     72,    120,    150 },
    {     68,      0,    142 },
    {     68,    120,    142 },
    {     60,      0,    138 },
    {     60,    120,    138 },
    {     52,      0,    142 },
    {     52,    120,    142 },
    {    176,      0,     35 },
    {     55,      0,    156 },
    {     55,    120,    156 },
    {    176,    120,     35 },
    {    176,    120,     73 },
    {    176,    120,    -73 },
    {    176,      0,    -73 },
    {    176,      0,     73 },
    {     73,    120,   -176 },
    {     73,      0,   -176 },
    {    -73,    120,   -176 },
    {    -73,      0,   -176 },
    {   -176,    120,    -73 },
    {   -176,      0,    -73 },
    {   -176,    120,     73 },
    {   -176,      0,     73 },
    {    -73,      0,    176 },
    {     73,      0,    176 },
    {    -73,    120,    176 },
    {    -65,    120,    184 },
    {    -65,      0,    184 },
    {   -185,      0,    -24 },
    {   -185,    120,    -24 },
    {   -200,      0,     80 },
    {   -120,      0,      0 },
    {   -120,    120,      0 },
    {   -200,    120,     80 },
    {   -140,      0,     10 },
    {    120,      0,     10 },
    {    120,    120,     10 },
    {   -140,    120,     10 },
    {    120,      0,    -80 },
    {    120,    120,    -80 },
    {    200,      0,    -80 },
    {    200,    120,    -80 },
    {     60,      2,    140 },
    {   -100,      2,    140 },
    {     60,      2,    220 },
    {   -100,      2,    220 },
    {    103,     16,     35 },
    {    105,     16,     28 },
    {    103,     16,     22 },
    {     98,     16,     17 },
    {     92,     16,     15 },
    {     85,     16,     17 },
    {     81,     16,     22 },
    {     79,     16,     28 },
    {     81,     16,     35 },
    {     85,     16,     39 },
    {     92,     16,     41 },
    {     98,     16,     39 },
    {    103,      3,     35 },
    {    105,      3,     28 },
    {     98,      3,     39 },
    {     92,      3,     41 },
    {     85,      3,     39 },
    {     81,      3,     35 },
    {     79,      3,     28 },
    {     81,      3,     22 },
    {     85,      3,     17 },
    {     92,      3,     15 },
    {     98,      3,     17 },
    {    103,      3,     22 },
};

CollisionHeader kokiri_shop_sceneCollisionHeader_000950 = { 
    { -200, -1, -176 },
    { 200, 160, 220 },
    95, kokiri_shop_sceneCollisionHeader_000950Vertices,
    98, kokiri_shop_sceneCollisionHeader_000950Polygons,
    kokiri_shop_sceneCollisionHeader_000950SurfaceType,
    kokiri_shop_sceneCollisionHeader_000950CamDataList,
    0, NULL
};

