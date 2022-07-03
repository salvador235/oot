#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "hairal_niwa_n_scene.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "hairal_niwa_n_room_0.h"

SceneCmd hairal_niwa_n_sceneCommands[] = {
    SCENE_CMD_SOUND_SETTINGS(0, 19, 45),
    SCENE_CMD_ROOM_LIST(1, hairal_niwa_n_sceneRoomList0x000068),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x0000000F),
    SCENE_CMD_COL_HEADER(&hairal_niwa_n_sceneCollisionHeader_0010C4),
    SCENE_CMD_ENTRANCE_LIST(hairal_niwa_n_sceneEntranceList0x000070),
    SCENE_CMD_SPECIAL_FILES(0x00, OBJECT_GAMEPLAY_FIELD_KEEP),
    SCENE_CMD_SPAWN_LIST(1, hairal_niwa_n_sceneStartPositionList0x000058),
    SCENE_CMD_SKYBOX_SETTINGS(0, 0, false),
    SCENE_CMD_EXIT_LIST(hairal_niwa_n_sceneExitList_000074),
    SCENE_CMD_ENV_LIGHT_SETTINGS(4, hairal_niwa_n_sceneLightSettings0x000078),
    SCENE_CMD_END(),
};

ActorEntry hairal_niwa_n_sceneStartPositionList0x000058[] = {
    { ACTOR_PLAYER,     {   2254,      0,     83 }, {      0, 0XC000,      0 }, 0x0E00 },
};

RomFile hairal_niwa_n_sceneRoomList0x000068[] = {
    { _hairal_niwa_n_room_0SegmentRomStart, _hairal_niwa_n_room_0SegmentRomEnd },
};

EntranceEntry hairal_niwa_n_sceneEntranceList0x000070[] = {
    { 0x00, 0x00 },
    { 0x00, 0x00 },
};

u16 hairal_niwa_n_sceneExitList_000074[] = {
    0x023D,
    0x0000,
};

LightSettings hairal_niwa_n_sceneLightSettings0x000078[] = {
    { 0x46, 0x2D, 0x39, 0x49, 0x49, 0x49, 0xB4, 0x9A, 0x8A, 0xB7, 0xB7, 0xB7, 0x14, 0x14, 0x3C, 0x1E, 0x0A, 0x0A,
    0x07E0, 0x3200 },
    { 0x69, 0x5A, 0x5A, 0x49, 0x49, 0x49, 0xFF, 0xFF, 0xF0, 0xB7, 0xB7, 0xB7, 0x32, 0x32, 0x5A, 0x64, 0x64, 0x78,
    0x07E4, 0x3200 },
    { 0x78, 0x5A, 0x00, 0x49, 0x49, 0x49, 0xFA, 0x87, 0x32, 0xB7, 0xB7, 0xB7, 0x1E, 0x1E, 0x3C, 0x1C, 0x14, 0x00,
    0x07E1, 0x3200 },
    { 0x28, 0x28, 0x46, 0x49, 0x49, 0x49, 0x14, 0x14, 0x23, 0xB7, 0xB7, 0xB7, 0x32, 0x32, 0x64, 0x00, 0x00, 0x1E,
    0x07E0, 0x3200 },
};

Vec3s hairal_niwa_n_sceneCollisionHeader_0010C4CamPosData[] = {
    {   2107,    111,    204 },
    {   4915,  23120,      0 },
    {     45,     10,     -1 },
    {   1819,     96,    294 },
    {   2367,  23666,      0 },
    {     45,     -1,     -1 },
};

CamData hairal_niwa_n_sceneCollisionHeader_0010C4CamDataList[] = {
    { 0x0020, 3, &hairal_niwa_n_sceneCollisionHeader_0010C4CamPosData[0] },
    { 0x0019, 3, &hairal_niwa_n_sceneCollisionHeader_0010C4CamPosData[3] },
    { 0x0000, 0, NULL },
};

SurfaceType hairal_niwa_n_sceneCollisionHeader_0010C4SurfaceType[] = {
    { 0x00A00002, 0x000057C8 },
    { 0x00000002, 0x000057C8 },
    { 0x00000102, 0x000057C8 },
    { 0x00000002, 0x000057C2 },
    { 0x00000002, 0x000057CA },
    { 0x00000001, 0x000057C2 },
    { 0x00000001, 0x000057C4 },
    { 0x00000001, 0x000057C8 },
};

CollisionPoly hairal_niwa_n_sceneCollisionHeader_0010C4Polygons[] = {
    {0x0000, 0x0014, 0x001B, 0x0018, 0x8001, 0x0000, 0x0000, 0x08E8},
    {0x0000, 0x0014, 0x0018, 0x0017, 0x8001, 0x0000, 0x0000, 0x08E8},
    {0x0001, 0x0000, 0x0001, 0x0002, 0x0000, 0x0000, 0x7FFF, 0x00C8},
    {0x0001, 0x0000, 0x0002, 0x0003, 0x0000, 0x0000, 0x7FFF, 0x00C8},
    {0x0001, 0x0004, 0x0005, 0x0006, 0x7FFF, 0x0000, 0x0000, 0xF782},
    {0x0001, 0x0004, 0x0006, 0x0007, 0x7FFF, 0x0000, 0x0000, 0xF782},
    {0x0001, 0x0007, 0x0006, 0x0008, 0x0000, 0x0000, 0x7FFF, 0x00B9},
    {0x0001, 0x0007, 0x0008, 0x0009, 0x0000, 0x0000, 0x7FFF, 0x00B9},
    {0x0001, 0x0009, 0x0008, 0x000A, 0x8001, 0x0000, 0x0000, 0x0870},
    {0x0001, 0x0009, 0x000A, 0x000B, 0x8001, 0x0000, 0x0000, 0x0870},
    {0x0001, 0x000C, 0x000D, 0x000E, 0x0000, 0x0000, 0x7FFF, 0x00F0},
    {0x0001, 0x000C, 0x000E, 0x000F, 0x0000, 0x0000, 0x7FFF, 0x00F0},
    {0x0001, 0x0010, 0x0011, 0x0012, 0x0000, 0x0000, 0x8001, 0x0113},
    {0x0001, 0x0010, 0x0012, 0x0013, 0x0000, 0x0000, 0x8001, 0x0113},
    {0x0001, 0x0014, 0x0015, 0x0016, 0x0000, 0x8001, 0x0000, 0x0018},
    {0x0001, 0x0014, 0x0016, 0x0017, 0x0000, 0x8001, 0x0000, 0x0018},
    {0x0002, 0x0018, 0x0019, 0x001A, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x0018, 0x001A, 0x001B, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x0019, 0x001C, 0x001D, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x0019, 0x001D, 0x001A, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x001C, 0x001E, 0x001F, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x001C, 0x001F, 0x001D, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0020, 0x0021, 0x0022, 0x8001, 0x0000, 0x0000, 0x08B5},
    {0x0001, 0x0020, 0x0022, 0x0023, 0x8001, 0x0000, 0x0000, 0x08B5},
    {0x0001, 0x0024, 0x0025, 0x000B, 0x8001, 0x0000, 0x0000, 0x0870},
    {0x0001, 0x0024, 0x000B, 0x0026, 0x8001, 0x0000, 0x0000, 0x0870},
    {0x0001, 0x0023, 0x0025, 0x0024, 0xA57E, 0x0000, 0x5A82, 0x05A7},
    {0x0001, 0x0023, 0x0024, 0x0020, 0xA57E, 0x0000, 0x5A82, 0x05A7},
    {0x0003, 0x0025, 0x0023, 0x0027, 0x0000, 0x7FFF, 0x0000, 0xFFEF},
    {0x0003, 0x0025, 0x0027, 0x0028, 0x0000, 0x7FFF, 0x0000, 0xFFEF},
    {0x0003, 0x0023, 0x0022, 0x0029, 0x0000, 0x7FFF, 0x0000, 0xFFEF},
    {0x0003, 0x0023, 0x0029, 0x0027, 0x0000, 0x7FFF, 0x0000, 0xFFEF},
    {0x0001, 0x0029, 0x0022, 0x0021, 0x0000, 0x0000, 0x7FFF, 0xFEE8},
    {0x0001, 0x0029, 0x0021, 0x002A, 0x0000, 0x0000, 0x7FFF, 0xFEE8},
    {0x0001, 0x002B, 0x0004, 0x0028, 0x7FFF, 0x0000, 0x0000, 0xF782},
    {0x0001, 0x002B, 0x0028, 0x002C, 0x7FFF, 0x0000, 0x0000, 0xF782},
    {0x0003, 0x0009, 0x0025, 0x0028, 0x0000, 0x7FFF, 0x0000, 0xFFEF},
    {0x0003, 0x0009, 0x0028, 0x0007, 0x0000, 0x7FFF, 0x0000, 0xFFEF},
    {0x0001, 0x002A, 0x002D, 0x0027, 0x7FF9, 0x0000, 0xFD7E, 0xF73F},
    {0x0001, 0x002A, 0x0027, 0x002E, 0x7FF9, 0x0000, 0xFD7E, 0xF73F},
    {0x0001, 0x002D, 0x002C, 0x0028, 0x5CF4, 0x0000, 0xA801, 0xFA1C},
    {0x0001, 0x002D, 0x0028, 0x0027, 0x5CF4, 0x0000, 0xA801, 0xFA1C},
    {0x0001, 0x002F, 0x0030, 0x0031, 0x8001, 0x0000, 0x0000, 0x0848},
    {0x0001, 0x002F, 0x0031, 0x0032, 0x8001, 0x0000, 0x0000, 0x0848},
    {0x0001, 0x0033, 0x0031, 0x0030, 0x0000, 0x0000, 0x7FFF, 0x0008},
    {0x0001, 0x0033, 0x0030, 0x0034, 0x0000, 0x0000, 0x7FFF, 0x0008},
    {0x0004, 0x0035, 0x0032, 0x0031, 0x0000, 0x7FFF, 0x0000, 0xFFD8},
    {0x0004, 0x0035, 0x0031, 0x0033, 0x0000, 0x7FFF, 0x0000, 0xFFD8},
    {0x0001, 0x0035, 0x0033, 0x0034, 0x7FFF, 0x0000, 0x0000, 0xF790},
    {0x0001, 0x0035, 0x0034, 0x0036, 0x7FFF, 0x0000, 0x0000, 0xF790},
    {0x0001, 0x0037, 0x0038, 0x0039, 0x8001, 0x0000, 0x0000, 0x0838},
    {0x0001, 0x0037, 0x0039, 0x003A, 0x8001, 0x0000, 0x0000, 0x0838},
    {0x0001, 0x003B, 0x0039, 0x0038, 0x0000, 0x0000, 0x7FFF, 0x0030},
    {0x0001, 0x003B, 0x0038, 0x003C, 0x0000, 0x0000, 0x7FFF, 0x0030},
    {0x0004, 0x003D, 0x003A, 0x0039, 0x0000, 0x7FFF, 0x0000, 0xFFD8},
    {0x0004, 0x003D, 0x0039, 0x003B, 0x0000, 0x7FFF, 0x0000, 0xFFD8},
    {0x0001, 0x003D, 0x003B, 0x003C, 0x7FFF, 0x0000, 0x0000, 0xF7A0},
    {0x0001, 0x003D, 0x003C, 0x003E, 0x7FFF, 0x0000, 0x0000, 0xF7A0},
    {0x0001, 0x003F, 0x0040, 0x0041, 0x0000, 0x0000, 0x7FFF, 0x0006},
    {0x0001, 0x003F, 0x0041, 0x0042, 0x0000, 0x0000, 0x7FFF, 0x0006},
    {0x0004, 0x0043, 0x0044, 0x0040, 0x0000, 0x7FFF, 0x0000, 0xFFB0},
    {0x0004, 0x0043, 0x0040, 0x003F, 0x0000, 0x7FFF, 0x0000, 0xFFB0},
    {0x0001, 0x0043, 0x003F, 0x0042, 0x7FFF, 0x0000, 0x0000, 0xF880},
    {0x0001, 0x0043, 0x0042, 0x0045, 0x7FFF, 0x0000, 0x0000, 0xF880},
    {0x0001, 0x0046, 0x0047, 0x0048, 0x7FFF, 0x0000, 0x0000, 0xF880},
    {0x0001, 0x0046, 0x0048, 0x0049, 0x7FFF, 0x0000, 0x0000, 0xF880},
    {0x0004, 0x0046, 0x004A, 0x004B, 0x0000, 0x7FFF, 0x0000, 0xFFD8},
    {0x0004, 0x0046, 0x004B, 0x0047, 0x0000, 0x7FFF, 0x0000, 0xFFD8},
    {0x0001, 0x0047, 0x004B, 0x004C, 0x0000, 0x0000, 0x7FFF, 0xFFEF},
    {0x0001, 0x0047, 0x004C, 0x0048, 0x0000, 0x0000, 0x7FFF, 0xFFEF},
    {0x0001, 0x004D, 0x004E, 0x004F, 0x0000, 0x0000, 0x7FFF, 0x001A},
    {0x0001, 0x004D, 0x004F, 0x0050, 0x0000, 0x0000, 0x7FFF, 0x001A},
    {0x0004, 0x0051, 0x0052, 0x004E, 0x0000, 0x7FFF, 0x0000, 0xFFD8},
    {0x0004, 0x0051, 0x004E, 0x004D, 0x0000, 0x7FFF, 0x0000, 0xFFD8},
    {0x0001, 0x0051, 0x004D, 0x0050, 0x7FFF, 0x0000, 0x0000, 0xF879},
    {0x0001, 0x0051, 0x0050, 0x0053, 0x7FFF, 0x0000, 0x0000, 0xF879},
    {0x0005, 0x0054, 0x0055, 0x0056, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x0054, 0x0056, 0x0057, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x0058, 0x0059, 0x005A, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x0058, 0x005A, 0x005B, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x005C, 0x005D, 0x005E, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x005C, 0x005E, 0x005F, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x0060, 0x0061, 0x0062, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x0060, 0x0062, 0x0063, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0006, 0x0064, 0x002A, 0x0065, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0006, 0x0064, 0x0065, 0x000F, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0006, 0x0066, 0x0064, 0x000F, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0006, 0x0067, 0x0066, 0x000F, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0068, 0x0069, 0x006A, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0007, 0x005A, 0x005D, 0x005C, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0007, 0x005A, 0x005C, 0x005B, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0007, 0x0057, 0x0059, 0x0058, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0007, 0x0057, 0x0058, 0x006A, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0007, 0x0057, 0x006A, 0x0054, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0007, 0x0057, 0x005A, 0x0059, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0007, 0x0057, 0x005D, 0x005A, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0007, 0x0057, 0x005E, 0x005D, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0007, 0x0057, 0x0061, 0x005E, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0007, 0x0060, 0x005F, 0x005E, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0007, 0x0060, 0x005E, 0x0061, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0007, 0x0056, 0x0066, 0x0062, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0007, 0x0056, 0x0062, 0x0061, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0007, 0x0056, 0x0061, 0x0057, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0007, 0x0069, 0x0055, 0x0054, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0007, 0x0069, 0x0054, 0x006A, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0007, 0x0056, 0x0055, 0x0069, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0007, 0x0066, 0x0056, 0x0069, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0007, 0x0066, 0x0063, 0x0062, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0007, 0x0069, 0x002A, 0x0064, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0007, 0x0069, 0x0064, 0x0066, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0007, 0x0063, 0x0066, 0x006B, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0007, 0x006C, 0x006A, 0x0058, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0007, 0x006C, 0x0058, 0x0063, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0007, 0x006C, 0x0063, 0x006B, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0065, 0x006D, 0x006E, 0x8001, 0x0000, 0x0000, 0x08E8},
    {0x0001, 0x0065, 0x006E, 0x006F, 0x8001, 0x0000, 0x0000, 0x08E8},
    {0x0001, 0x0018, 0x006F, 0x0070, 0x8001, 0x0000, 0x0000, 0x08E8},
    {0x0001, 0x0018, 0x0070, 0x0071, 0x8001, 0x0000, 0x0000, 0x08E8},
    {0x0001, 0x0017, 0x0071, 0x0072, 0x8001, 0x0000, 0x0000, 0x08E8},
    {0x0001, 0x0017, 0x0072, 0x0014, 0x8001, 0x0000, 0x0000, 0x08E8},
    {0x0001, 0x000F, 0x001B, 0x0072, 0x8001, 0x0000, 0x0000, 0x08E8},
    {0x0001, 0x000F, 0x0072, 0x0073, 0x8001, 0x0000, 0x0000, 0x08E8},
    {0x0001, 0x0017, 0x0016, 0x001E, 0x0000, 0x0000, 0x8001, 0x0062},
    {0x0001, 0x0017, 0x001E, 0x0018, 0x0000, 0x0000, 0x8001, 0x0062},
    {0x0001, 0x001B, 0x001F, 0x0015, 0x0000, 0x0000, 0x7FFF, 0xFFBE},
    {0x0001, 0x001B, 0x0015, 0x0014, 0x0000, 0x0000, 0x7FFF, 0xFFBE},
    {0x0003, 0x0074, 0x0075, 0x0076, 0x0000, 0x7FFF, 0x0000, 0xFEC0},
    {0x0003, 0x0074, 0x0076, 0x0077, 0x0000, 0x7FFF, 0x0000, 0xFEC0},
    {0x0001, 0x006C, 0x0075, 0x0074, 0x7FFF, 0x0000, 0x0000, 0xF8A8},
    {0x0001, 0x006C, 0x0074, 0x006A, 0x7FFF, 0x0000, 0x0000, 0xF8A8},
    {0x0001, 0x0078, 0x0077, 0x0076, 0x8001, 0x0000, 0x0000, 0x0708},
    {0x0001, 0x0078, 0x0076, 0x0079, 0x8001, 0x0000, 0x0000, 0x0708},
    {0x0001, 0x006A, 0x0074, 0x0077, 0x0000, 0x0000, 0x7FFF, 0xFFB0},
    {0x0001, 0x006A, 0x0077, 0x0078, 0x0000, 0x0000, 0x7FFF, 0xFFB0},
    {0x0001, 0x007A, 0x007B, 0x007C, 0x0000, 0x7FFF, 0x0000, 0xFF8A},
    {0x0001, 0x007A, 0x007C, 0x007D, 0x0000, 0x7FFF, 0x0000, 0xFF8A},
    {0x0001, 0x007B, 0x007A, 0x007E, 0x0000, 0x0000, 0x7FFF, 0xFF88},
    {0x0001, 0x007B, 0x007E, 0x007F, 0x0000, 0x0000, 0x7FFF, 0xFF88},
    {0x0001, 0x0080, 0x007C, 0x007B, 0x7FFF, 0x0000, 0x0000, 0xFB14},
    {0x0001, 0x0080, 0x007B, 0x007F, 0x7FFF, 0x0000, 0x0000, 0xFB14},
    {0x0001, 0x007E, 0x007A, 0x0081, 0x8001, 0x0000, 0x0000, 0x0438},
    {0x0001, 0x007E, 0x0081, 0x0082, 0x8001, 0x0000, 0x0000, 0x0438},
    {0x0001, 0x0083, 0x0084, 0x0085, 0x0000, 0x0000, 0x8001, 0xFFB0},
    {0x0001, 0x0083, 0x0085, 0x0086, 0x0000, 0x0000, 0x8001, 0xFFB0},
    {0x0001, 0x0087, 0x0088, 0x0086, 0x0000, 0x7FFF, 0x0000, 0xFF88},
    {0x0001, 0x0087, 0x0086, 0x0085, 0x0000, 0x7FFF, 0x0000, 0xFF88},
    {0x0001, 0x0088, 0x0087, 0x0089, 0x0000, 0x0000, 0x7FFF, 0xFF60},
    {0x0001, 0x0088, 0x0089, 0x008A, 0x0000, 0x0000, 0x7FFF, 0xFF60},
    {0x0001, 0x0085, 0x0084, 0x0089, 0x8001, 0x0000, 0x0000, 0x0690},
    {0x0001, 0x0085, 0x0089, 0x0087, 0x8001, 0x0000, 0x0000, 0x0690},
    {0x0001, 0x0083, 0x0086, 0x0088, 0x7FFF, 0x0000, 0x0000, 0xF948},
    {0x0001, 0x0083, 0x0088, 0x008A, 0x7FFF, 0x0000, 0x0000, 0xF948},
    {0x0001, 0x008B, 0x008C, 0x008D, 0x8001, 0x0000, 0x0000, 0x0564},
    {0x0001, 0x008B, 0x008D, 0x008E, 0x8001, 0x0000, 0x0000, 0x0564},
    {0x0001, 0x008F, 0x008E, 0x008D, 0x0000, 0x0000, 0x8001, 0xFFB0},
    {0x0001, 0x008F, 0x008D, 0x0090, 0x0000, 0x0000, 0x8001, 0xFFB0},
    {0x0001, 0x0091, 0x0092, 0x008F, 0x7FFF, 0x0000, 0x0000, 0xF9E8},
    {0x0001, 0x0091, 0x008F, 0x0090, 0x7FFF, 0x0000, 0x0000, 0xF9E8},
    {0x0001, 0x0091, 0x008C, 0x008B, 0x0000, 0x0000, 0x7FFF, 0xFF88},
    {0x0001, 0x0091, 0x008B, 0x0092, 0x0000, 0x0000, 0x7FFF, 0xFF88},
    {0x0001, 0x0068, 0x0093, 0x0094, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0068, 0x0094, 0x0095, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0068, 0x0096, 0x0097, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0068, 0x0097, 0x0093, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0093, 0x0097, 0x0089, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0093, 0x0089, 0x0098, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0098, 0x0089, 0x0079, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0089, 0x008A, 0x0079, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0079, 0x0099, 0x009A, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0079, 0x009A, 0x0098, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0079, 0x008A, 0x0096, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0079, 0x0096, 0x0068, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0078, 0x0068, 0x006A, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x009B, 0x0095, 0x009C, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0003, 0x009D, 0x009E, 0x0093, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0003, 0x009D, 0x0093, 0x0098, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0003, 0x0089, 0x0097, 0x0096, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0003, 0x0089, 0x0096, 0x008A, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0099, 0x009F, 0x00A0, 0x7FFF, 0x0000, 0x0000, 0xFB78},
    {0x0001, 0x0099, 0x00A0, 0x009C, 0x7FFF, 0x0000, 0x0000, 0xFB78},
    {0x0001, 0x0082, 0x00A1, 0x00A2, 0x8001, 0x0000, 0x0000, 0x0438},
    {0x0001, 0x0082, 0x00A2, 0x00A3, 0x8001, 0x0000, 0x0000, 0x0438},
    {0x0001, 0x009C, 0x00A0, 0x00A1, 0x0000, 0x0000, 0x7FFF, 0xFFB0},
    {0x0001, 0x009C, 0x00A1, 0x0082, 0x0000, 0x0000, 0x7FFF, 0xFFB0},
    {0x0003, 0x00A0, 0x009F, 0x00A2, 0x0000, 0x7FFF, 0x0000, 0xFEC0},
    {0x0003, 0x00A0, 0x00A2, 0x00A1, 0x0000, 0x7FFF, 0x0000, 0xFEC0},
};

Vec3s hairal_niwa_n_sceneCollisionHeader_0010C4Vertices[] = {
    {   2280,      0,   -200 },
    {   2280,    347,   -200 },
    {   2174,    347,   -200 },
    {   2174,      0,   -200 },
    {   2174,     17,   -240 },
    {   2174,    353,   -240 },
    {   2174,    353,   -185 },
    {   2174,     17,   -185 },
    {   2160,    353,   -185 },
    {   2160,     17,   -185 },
    {   2160,    353,   -240 },
    {   2160,     17,   -240 },
    {   2280,    600,   -240 },
    {    600,    600,   -240 },
    {    600,      0,   -240 },
    {   2280,      0,   -240 },
    {    370,    182,    275 },
    {   2280,    182,    275 },
    {   2280,      0,    275 },
    {    370,      0,    275 },
    {   2280,     24,     66 },
    {   2400,     24,     66 },
    {   2400,     24,     98 },
    {   2280,     24,     98 },
    {   2280,      0,     98 },
    {   2320,      0,     98 },
    {   2320,      0,     66 },
    {   2280,      0,     66 },
    {   2360,      0,     98 },
    {   2360,      0,     66 },
    {   2400,      0,     98 },
    {   2400,      0,     66 },
    {   2229,      0,    182 },
    {   2229,      0,    280 },
    {   2229,     17,    280 },
    {   2229,     17,    182 },
    {   2160,      0,    113 },
    {   2160,     17,    113 },
    {   2160,      0,   -240 },
    {   2245,     17,    178 },
    {   2174,     17,    103 },
    {   2246,     17,    280 },
    {   2247,      0,    280 },
    {   2174,      0,   -240 },
    {   2174,      0,    103 },
    {   2245,      0,    178 },
    {   2247,     17,    280 },
    {   2120,      0,    -48 },
    {   2120,      0,     -8 },
    {   2120,     40,     -8 },
    {   2120,     40,    -48 },
    {   2160,     40,     -8 },
    {   2160,      0,     -8 },
    {   2160,     40,    -48 },
    {   2160,      0,    -48 },
    {   2104,      0,    -88 },
    {   2104,      0,    -48 },
    {   2104,     40,    -48 },
    {   2104,     40,    -88 },
    {   2144,     40,    -48 },
    {   2144,      0,    -48 },
    {   2144,     40,    -88 },
    {   2144,      0,    -88 },
    {   1920,     80,     -6 },
    {   1880,     80,     -6 },
    {   1880,     40,     -6 },
    {   1920,     40,     -6 },
    {   1920,     80,    -46 },
    {   1880,     80,    -46 },
    {   1920,     40,    -46 },
    {   1920,     40,    -23 },
    {   1920,     40,     17 },
    {   1920,      0,     17 },
    {   1920,      0,    -23 },
    {   1880,     40,    -23 },
    {   1880,     40,     17 },
    {   1880,      0,     17 },
    {   1927,     40,    -26 },
    {   1887,     40,    -26 },
    {   1887,      0,    -26 },
    {   1927,      0,    -26 },
    {   1927,     40,    -66 },
    {   1887,     40,    -66 },
    {   1927,      0,    -66 },
    {   1900,      0,    120 },
    {   1900,      0,    160 },
    {   1940,      0,    160 },
    {   1940,      0,    120 },
    {   1960,      0,     55 },
    {   1960,      0,     95 },
    {   2000,      0,     95 },
    {   2000,      0,     55 },
    {   2027,      0,     55 },
    {   2027,      0,     95 },
    {   2067,      0,     95 },
    {   2067,      0,     55 },
    {   2095,      0,     55 },
    {   2095,      0,     95 },
    {   2135,      0,     95 },
    {   2135,      0,     55 },
    {   2247,      0,    181 },
    {   2280,      0,    280 },
    {   2171,      0,    111 },
    {   2170,      0,   -240 },
    {   1800,      0,    280 },
    {   1880,      0,    280 },
    {   1880,      0,     80 },
    {   2168,      0,   -240 },
    {   1880,      0,   -240 },
    {   2280,    -80,    280 },
    {   2280,    -80,    400 },
    {   2280,      0,    400 },
    {   2280,    600,    400 },
    {   2280,    601,     98 },
    {   2280,    601,     66 },
    {   2280,    602,   -240 },
    {   1880,    320,     80 },
    {   1880,    320,   -240 },
    {   1800,    320,   -240 },
    {   1800,    320,     80 },
    {   1800,      0,     80 },
    {   1800,      0,   -240 },
    {   1080,    118,    120 },
    {   1260,    118,    120 },
    {   1260,    118,   -240 },
    {   1080,    118,   -240 },
    {   1080,      0,    120 },
    {   1260,      0,    120 },
    {   1260,      0,   -240 },
    {   1080,     60,     80 },
    {   1080,      0,     80 },
    {   1720,      0,    -80 },
    {   1680,      0,    -80 },
    {   1680,    120,    -80 },
    {   1720,    120,    -80 },
    {   1680,    120,    160 },
    {   1720,    120,    160 },
    {   1680,      0,    160 },
    {   1720,      0,    160 },
    {   1380,      0,    120 },
    {   1380,    120,    120 },
    {   1380,    120,    -80 },
    {   1380,      0,    -80 },
    {   1560,      0,    -80 },
    {   1560,    120,    -80 },
    {   1560,    120,    120 },
    {   1560,      0,    120 },
    {   1599,      0,    220 },
    {   1160,      0,    219 },
    {   1160,      0,    280 },
    {   1720,      0,    200 },
    {   1680,      0,    200 },
    {   1599,      0,    180 },
    {   1160,      0,   -240 },
    {   1160,      0,    179 },
    {   1080,      0,    280 },
    {   1160,      0,     80 },
    {   1159,      0,    179 },
    {   1159,      0,    219 },
    {   1160,    320,   -240 },
    {   1160,    320,     80 },
    {   1080,    320,     80 },
    {   1080,    320,   -240 },
    {   1080,      0,   -240 },
};

CollisionHeader hairal_niwa_n_sceneCollisionHeader_0010C4 = { 
    { 370, -80, -280 },
    { 2400, 602, 400 },
    164, hairal_niwa_n_sceneCollisionHeader_0010C4Vertices,
    186, hairal_niwa_n_sceneCollisionHeader_0010C4Polygons,
    hairal_niwa_n_sceneCollisionHeader_0010C4SurfaceType,
    hairal_niwa_n_sceneCollisionHeader_0010C4CamDataList,
    0, NULL
};

u64 hairal_niwa_n_sceneTex_0010F0[] = {
#include "assets/scenes/indoors/hairal_niwa_n/hairal_niwa_n_sceneTex_0010F0.rgba16.inc.c"
};

u64 hairal_niwa_n_sceneTex_0018F0[] = {
#include "assets/scenes/indoors/hairal_niwa_n/hairal_niwa_n_sceneTex_0018F0.rgba16.inc.c"
};

u64 hairal_niwa_n_sceneTex_0020F0[] = {
#include "assets/scenes/indoors/hairal_niwa_n/hairal_niwa_n_sceneTex_0020F0.rgba16.inc.c"
};

u64 hairal_niwa_n_sceneTex_0028F0[] = {
#include "assets/scenes/indoors/hairal_niwa_n/hairal_niwa_n_sceneTex_0028F0.rgba16.inc.c"
};

u64 hairal_niwa_n_sceneTex_0038F0[] = {
#include "assets/scenes/indoors/hairal_niwa_n/hairal_niwa_n_sceneTex_0038F0.i4.inc.c"
};

u64 hairal_niwa_n_sceneTex_0040F0[] = {
#include "assets/scenes/indoors/hairal_niwa_n/hairal_niwa_n_sceneTex_0040F0.rgba16.inc.c"
};

u64 hairal_niwa_n_sceneTex_0050F0[] = {
#include "assets/scenes/indoors/hairal_niwa_n/hairal_niwa_n_sceneTex_0050F0.rgba16.inc.c"
};

u64 hairal_niwa_n_sceneTex_0058F0[] = {
#include "assets/scenes/indoors/hairal_niwa_n/hairal_niwa_n_sceneTex_0058F0.rgba16.inc.c"
};

u64 hairal_niwa_n_sceneTex_0060F0[] = {
#include "assets/scenes/indoors/hairal_niwa_n/hairal_niwa_n_sceneTex_0060F0.ia4.inc.c"
};

u64 hairal_niwa_n_sceneTex_0068F0[] = {
#include "assets/scenes/indoors/hairal_niwa_n/hairal_niwa_n_sceneTex_0068F0.rgba16.inc.c"
};

u64 hairal_niwa_n_sceneTex_0070F0[] = {
#include "assets/scenes/indoors/hairal_niwa_n/hairal_niwa_n_sceneTex_0070F0.rgba16.inc.c"
};

u64 hairal_niwa_n_sceneTex_0078F0[] = {
#include "assets/scenes/indoors/hairal_niwa_n/hairal_niwa_n_sceneTex_0078F0.rgba16.inc.c"
};

u64 hairal_niwa_n_sceneTex_0080F0[] = {
#include "assets/scenes/indoors/hairal_niwa_n/hairal_niwa_n_sceneTex_0080F0.rgba16.inc.c"
};

