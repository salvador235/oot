#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "ddan_boss_scene.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "ddan_boss_room_0.h"
#include "ddan_boss_room_1.h"

SceneCmd ddan_boss_sceneCommands[] = {
    SCENE_CMD_SOUND_SETTINGS(4, 19, 24),
    SCENE_CMD_ROOM_LIST(2, ddan_boss_sceneRoomList0x000080),
    SCENE_CMD_TRANSITION_ACTOR_LIST(1, ddan_boss_sceneTransitionActorList_000070),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x00000000),
    SCENE_CMD_COL_HEADER(&ddan_boss_sceneCollisionHeader_000E20),
    SCENE_CMD_ENTRANCE_LIST(ddan_boss_sceneEntranceList0x000090),
    SCENE_CMD_SPECIAL_FILES(0x02, OBJECT_GAMEPLAY_DANGEON_KEEP),
    SCENE_CMD_SPAWN_LIST(1, ddan_boss_sceneStartPositionList0x000060),
    SCENE_CMD_SKYBOX_SETTINGS(0, 0, true),
    SCENE_CMD_EXIT_LIST(ddan_boss_sceneExitList_000094),
    SCENE_CMD_ENV_LIGHT_SETTINGS(4, ddan_boss_sceneLightSettings0x000098),
    SCENE_CMD_END(),
};

ActorEntry ddan_boss_sceneStartPositionList0x000060[] = {
    { ACTOR_PLAYER,     {   -440,   -744,  -2781 }, {      0, 0XC000,      0 }, 0x0FFF },
};

TransitionActorEntry ddan_boss_sceneTransitionActorList_000070[] = {
    { 1, 255, 0, 255, ACTOR_DOOR_SHUTTER, -360, -744, -2784, 16384, 0x00A0 },
};

RomFile ddan_boss_sceneRoomList0x000080[] = {
    { _ddan_boss_room_0SegmentRomStart, _ddan_boss_room_0SegmentRomEnd },
    { _ddan_boss_room_1SegmentRomStart, _ddan_boss_room_1SegmentRomEnd },
};

EntranceEntry ddan_boss_sceneEntranceList0x000090[] = {
    { 0x00, 0x01 },
    { 0x00, 0x00 },
};

u16 ddan_boss_sceneExitList_000094[] = {
    0x00C5,
    0x0000,
};

LightSettings ddan_boss_sceneLightSettings0x000098[] = {
    { 0x1E, 0x14, 0x0A, 0x33, 0x67, 0x33, 0x96, 0x8C, 0x8C, 0x00, 0x81, 0x00, 0x64, 0x2D, 0x2D, 0xB9, 0x8C, 0x46,
    0x07C0, 0x3200 },
    { 0x14, 0x14, 0x14, 0x33, 0x67, 0x33, 0x64, 0x64, 0x78, 0x00, 0x81, 0x00, 0x46, 0x50, 0x78, 0x1E, 0x32, 0x3C,
    0x07C0, 0x3200 },
    { 0x78, 0x5A, 0x00, 0x49, 0x49, 0x49, 0xFA, 0x87, 0x32, 0xB7, 0xB7, 0xB7, 0x1E, 0x1E, 0x3C, 0x1C, 0x14, 0x00,
    0x07E1, 0x3200 },
    { 0x28, 0x28, 0x46, 0x49, 0x49, 0x49, 0x14, 0x14, 0x23, 0xB7, 0xB7, 0xB7, 0x32, 0x32, 0x64, 0x00, 0x00, 0x1E,
    0x07E0, 0x3200 },
};

CamData ddan_boss_sceneCollisionHeader_000E20CamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType ddan_boss_sceneCollisionHeader_000E20SurfaceType[] = {
    { 0x00000100, 0x00003FE0 },
    { 0x00000000, 0x00007FC0 },
    { 0x0000C000, 0x00007FC0 },
    { 0x00000000, 0x00003FC0 },
    { 0x2400C000, 0x00003FC0 },
    { 0x00006000, 0x00007FC7 },
    { 0x0000C000, 0x00003FC0 },
};

CollisionPoly ddan_boss_sceneCollisionHeader_000E20Polygons[] = {
    {0x0000, 0x0064, 0x0065, 0x0066, 0x0000, 0x7FFF, 0x0000, 0x02E8},
    {0x0000, 0x0064, 0x0066, 0x0067, 0x0000, 0x7FFF, 0x0000, 0x02E8},
    {0x0001, 0x0000, 0x0001, 0x0002, 0x8001, 0x0000, 0x0000, 0xFE8E},
    {0x0001, 0x0000, 0x0002, 0x0003, 0x8001, 0x0000, 0x0000, 0xFE8E},
    {0x0001, 0x0004, 0x0005, 0x0006, 0x0000, 0x8001, 0x0000, 0xFC78},
    {0x0001, 0x0007, 0x0004, 0x0006, 0x0000, 0x8001, 0x0000, 0xFC78},
    {0x0002, 0x0008, 0x0009, 0x0005, 0x8001, 0x0000, 0x0000, 0xFCD6},
    {0x0002, 0x000A, 0x0006, 0x000B, 0x7FFF, 0x0000, 0x0000, 0x03CA},
    {0x0002, 0x000A, 0x000C, 0x0007, 0x0000, 0x9376, 0xBC2A, 0xF6BF},
    {0x0002, 0x000A, 0x0007, 0x0006, 0x0000, 0x9376, 0xBC2A, 0xF6BF},
    {0x0002, 0x0005, 0x000D, 0x000E, 0x0000, 0x9376, 0xBC2A, 0xF6BF},
    {0x0002, 0x0005, 0x000E, 0x0008, 0x0000, 0x9376, 0xBC2A, 0xF6BF},
    {0x0002, 0x0009, 0x000B, 0x0006, 0x0000, 0x8001, 0x0000, 0xFC78},
    {0x0002, 0x0009, 0x0006, 0x0005, 0x0000, 0x8001, 0x0000, 0xFC78},
    {0x0001, 0x000F, 0x0010, 0x0011, 0x393E, 0x727C, 0x0000, 0x0782},
    {0x0001, 0x000F, 0x0011, 0x0012, 0x393E, 0x727C, 0x0000, 0x0782},
    {0x0001, 0x0012, 0x0011, 0x0013, 0x28CE, 0x7240, 0xD732, 0x02FC},
    {0x0001, 0x0012, 0x0013, 0x0014, 0x2814, 0x72AF, 0xD7B1, 0x0306},
    {0x0001, 0x0014, 0x0013, 0x0015, 0x0000, 0x727C, 0xC6C2, 0x002F},
    {0x0001, 0x0014, 0x0015, 0x0016, 0x0000, 0x727C, 0xC6C2, 0x002F},
    {0x0001, 0x0016, 0x0015, 0x0017, 0xD7C5, 0x72A8, 0xD7C5, 0x00DA},
    {0x0001, 0x0016, 0x0017, 0x0018, 0xD746, 0x7239, 0xD70B, 0x00C1},
    {0x0001, 0x0018, 0x0017, 0x0019, 0xC6C2, 0x727C, 0x0000, 0x0466},
    {0x0001, 0x0018, 0x0019, 0x001A, 0xC6C2, 0x727C, 0x0000, 0x0466},
    {0x0001, 0x001A, 0x0019, 0x001B, 0xD7C5, 0x72A8, 0x283B, 0x08F7},
    {0x0001, 0x001A, 0x001B, 0x001C, 0xD7C5, 0x72A8, 0x283B, 0x08F7},
    {0x0001, 0x001C, 0x001B, 0x001D, 0x0000, 0x727C, 0x393E, 0x0BBA},
    {0x0001, 0x001C, 0x001D, 0x001E, 0x0000, 0x727C, 0x393E, 0x0BBA},
    {0x0001, 0x001E, 0x001D, 0x0010, 0x283B, 0x72A8, 0x283B, 0x0B26},
    {0x0001, 0x001E, 0x0010, 0x000F, 0x283B, 0x72A8, 0x283B, 0x0B26},
    {0x0001, 0x001F, 0x0020, 0x0021, 0x5A82, 0x0000, 0x5A82, 0x0EAE},
    {0x0001, 0x001F, 0x0021, 0x0022, 0x5A82, 0x0000, 0x5A82, 0x0EAE},
    {0x0001, 0x000E, 0x0023, 0x0024, 0xA57E, 0x0000, 0xA57E, 0xF782},
    {0x0001, 0x000E, 0x0024, 0x0025, 0xA57E, 0x0000, 0xA57E, 0xF782},
    {0x0001, 0x0026, 0x000C, 0x0027, 0x5A82, 0x0000, 0xA57E, 0xFC6D},
    {0x0001, 0x0026, 0x0027, 0x0028, 0x5A82, 0x0000, 0xA57E, 0xFC6D},
    {0x0001, 0x0029, 0x002A, 0x002B, 0xA57E, 0x0000, 0x5A82, 0x09C3},
    {0x0001, 0x0029, 0x002B, 0x002C, 0xA57E, 0x0000, 0x5A82, 0x09C3},
    {0x0001, 0x000C, 0x0026, 0x0007, 0x28CE, 0x8DC0, 0xD732, 0xFA8A},
    {0x0001, 0x000E, 0x000D, 0x0023, 0xD732, 0x8DC0, 0xD732, 0xF853},
    {0x0001, 0x0029, 0x002D, 0x002A, 0xD732, 0x8DC0, 0x28CE, 0x008D},
    {0x0001, 0x001F, 0x002E, 0x0020, 0x28CE, 0x8DC0, 0x28CE, 0x02C5},
    {0x0001, 0x002E, 0x0004, 0x0007, 0x0000, 0x8001, 0x0000, 0xFC78},
    {0x0001, 0x002D, 0x0004, 0x002E, 0x0000, 0x8001, 0x0000, 0xFC78},
    {0x0001, 0x000D, 0x0004, 0x002D, 0x0000, 0x8001, 0x0000, 0xFC78},
    {0x0001, 0x002F, 0x0030, 0x0031, 0x0000, 0x8001, 0x0000, 0xFEA8},
    {0x0001, 0x002F, 0x0031, 0x0032, 0x0000, 0x8001, 0x0000, 0xFEA8},
    {0x0003, 0x0033, 0x002F, 0x0032, 0x0000, 0xA57E, 0xA57E, 0xF7A3},
    {0x0003, 0x0033, 0x0032, 0x0034, 0x0000, 0xA57E, 0xA57E, 0xF7A3},
    {0x0004, 0x0035, 0x0036, 0x0037, 0x0000, 0x7FFF, 0x0000, 0x02E8},
    {0x0004, 0x0035, 0x0037, 0x0038, 0x0000, 0x7FFF, 0x0000, 0x02E8},
    {0x0004, 0x0039, 0x0035, 0x0038, 0x0000, 0x7FFF, 0x0000, 0x02E8},
    {0x0004, 0x0039, 0x0038, 0x003A, 0x0000, 0x7FFF, 0x0000, 0x02E8},
    {0x0004, 0x0039, 0x003A, 0x003B, 0x0000, 0x7FFF, 0x0000, 0x02E8},
    {0x0004, 0x003C, 0x0039, 0x003B, 0x0000, 0x7FFF, 0x0000, 0x02E8},
    {0x0004, 0x003C, 0x003B, 0x003D, 0x0000, 0x7FFF, 0x0000, 0x02E8},
    {0x0004, 0x003C, 0x003D, 0x003E, 0x0000, 0x7FFF, 0x0000, 0x02E8},
    {0x0004, 0x003F, 0x003C, 0x003E, 0x0000, 0x7FFF, 0x0000, 0x02E8},
    {0x0004, 0x003F, 0x003E, 0x0040, 0x0000, 0x7FFF, 0x0000, 0x02E8},
    {0x0004, 0x003F, 0x0040, 0x0041, 0x0000, 0x7FFF, 0x0000, 0x02E8},
    {0x0004, 0x003F, 0x0041, 0x0042, 0x0000, 0x7FFF, 0x0000, 0x02E8},
    {0x0003, 0x0041, 0x0043, 0x0042, 0x0000, 0x7FFF, 0x0000, 0x02E8},
    {0x0003, 0x0037, 0x0036, 0x0044, 0x0000, 0x7FFF, 0x0000, 0x02E8},
    {0x0001, 0x0045, 0x0046, 0x0047, 0x8001, 0x0000, 0x0000, 0xFDB2},
    {0x0001, 0x0045, 0x0047, 0x0048, 0x8001, 0x0000, 0x0000, 0xFDB2},
    {0x0001, 0x0049, 0x0031, 0x0030, 0x0000, 0xA57E, 0x5A82, 0x0704},
    {0x0001, 0x0049, 0x0030, 0x004A, 0x0000, 0xA57E, 0x5A82, 0x0704},
    {0x0001, 0x004A, 0x0030, 0x002F, 0x5A82, 0xA57E, 0x0000, 0x01C9},
    {0x0001, 0x004A, 0x002F, 0x0033, 0x5A82, 0xA57E, 0x0000, 0x01C9},
    {0x0003, 0x003A, 0x0038, 0x004B, 0x0000, 0x7FFF, 0x0000, 0x02E8},
    {0x0003, 0x003A, 0x004B, 0x004C, 0x0000, 0x7FFF, 0x0000, 0x02E8},
    {0x0003, 0x004D, 0x003D, 0x003B, 0x0000, 0x7FFF, 0x0000, 0x02E8},
    {0x0003, 0x004D, 0x003B, 0x004E, 0x0000, 0x7FFF, 0x0000, 0x02E8},
    {0x0003, 0x004F, 0x0050, 0x0040, 0x0000, 0x7FFF, 0x0000, 0x02E8},
    {0x0003, 0x004F, 0x0040, 0x003E, 0x0000, 0x7FFF, 0x0000, 0x02E8},
    {0x0001, 0x0034, 0x0032, 0x0031, 0xA57E, 0xA57E, 0x0000, 0xFCDE},
    {0x0001, 0x0034, 0x0031, 0x0049, 0xA57E, 0xA57E, 0x0000, 0xFCDE},
    {0x0001, 0x0042, 0x0043, 0x0047, 0x8001, 0x0000, 0x0000, 0xFDB2},
    {0x0001, 0x0042, 0x0047, 0x0046, 0x8001, 0x0000, 0x0000, 0xFDB2},
    {0x0001, 0x0045, 0x0048, 0x0044, 0x8001, 0x0000, 0x0000, 0xFDB2},
    {0x0001, 0x0045, 0x0044, 0x0036, 0x8001, 0x0000, 0x0000, 0xFDB2},
    {0x0003, 0x0051, 0x0052, 0x003A, 0x7FFF, 0x0000, 0x0000, 0x0456},
    {0x0003, 0x0051, 0x003A, 0x004C, 0x7FFF, 0x0000, 0x0000, 0x0456},
    {0x0001, 0x0052, 0x0053, 0x003B, 0x5A82, 0x0000, 0x5A82, 0x0B79},
    {0x0001, 0x0052, 0x003B, 0x003A, 0x5A82, 0x0000, 0x5A82, 0x0B79},
    {0x0001, 0x0053, 0x0054, 0x004E, 0x0000, 0x0000, 0x7FFF, 0x0BBC},
    {0x0001, 0x0053, 0x004E, 0x003B, 0x0000, 0x0000, 0x7FFF, 0x0BBC},
    {0x0001, 0x004B, 0x0038, 0x0055, 0x8001, 0x0000, 0x0000, 0xFD62},
    {0x0001, 0x004B, 0x0055, 0x0056, 0x8001, 0x0000, 0x0000, 0xFD62},
    {0x0001, 0x0038, 0x0037, 0x0057, 0xA57E, 0x0000, 0x5A82, 0x068F},
    {0x0001, 0x0038, 0x0057, 0x0055, 0xA57E, 0x0000, 0x5A82, 0x068F},
    {0x0001, 0x0048, 0x0057, 0x0037, 0x0000, 0x0000, 0x7FFF, 0x0BBC},
    {0x0001, 0x0048, 0x0037, 0x0044, 0x0000, 0x0000, 0x7FFF, 0x0BBC},
    {0x0003, 0x0058, 0x0047, 0x0043, 0x0000, 0x0000, 0x8001, 0xF5FC},
    {0x0003, 0x0058, 0x0043, 0x0041, 0x0000, 0x0000, 0x8001, 0xF5FC},
    {0x0003, 0x0041, 0x0040, 0x0059, 0xA57E, 0x0000, 0xA57E, 0xF72E},
    {0x0003, 0x0041, 0x0059, 0x0058, 0xA57E, 0x0000, 0xA57E, 0xF72E},
    {0x0001, 0x005A, 0x0059, 0x0040, 0x8001, 0x0000, 0x0000, 0xFD62},
    {0x0001, 0x005A, 0x0040, 0x0050, 0x8001, 0x0000, 0x0000, 0xFD62},
    {0x0003, 0x004F, 0x003E, 0x005B, 0x7FFF, 0x0000, 0x0000, 0x0456},
    {0x0003, 0x004F, 0x005B, 0x005C, 0x7FFF, 0x0000, 0x0000, 0x0456},
    {0x0003, 0x005D, 0x005B, 0x003E, 0x5A82, 0x0000, 0xA57E, 0xFC18},
    {0x0003, 0x005D, 0x003E, 0x003D, 0x5A82, 0x0000, 0xA57E, 0xFC18},
    {0x0003, 0x005E, 0x005D, 0x003D, 0x0000, 0x0000, 0x8001, 0xF5FC},
    {0x0003, 0x005E, 0x003D, 0x004D, 0x0000, 0x0000, 0x8001, 0xF5FC},
    {0x0001, 0x004B, 0x0056, 0x0051, 0x0000, 0x0000, 0x7FFF, 0x0C0C},
    {0x0001, 0x004B, 0x0051, 0x004C, 0x0000, 0x0000, 0x7FFF, 0x0C0C},
    {0x0003, 0x004E, 0x0054, 0x005E, 0x7FFF, 0x0000, 0x0000, 0x04A6},
    {0x0003, 0x004E, 0x005E, 0x004D, 0x7FFF, 0x0000, 0x0000, 0x04A6},
    {0x0003, 0x004F, 0x005C, 0x005A, 0x0000, 0x0000, 0x8001, 0xF64C},
    {0x0003, 0x004F, 0x005A, 0x0050, 0x0000, 0x0000, 0x8001, 0xF64C},
    {0x0003, 0x0042, 0x0046, 0x005F, 0x0000, 0x0000, 0x8001, 0xF570},
    {0x0003, 0x0042, 0x005F, 0x0060, 0x0000, 0x0000, 0x8001, 0xF570},
    {0x0001, 0x0061, 0x0045, 0x0036, 0x0000, 0x0000, 0x7FFF, 0x0B30},
    {0x0001, 0x0061, 0x0036, 0x0062, 0x0000, 0x0000, 0x7FFF, 0x0B30},
    {0x0004, 0x0036, 0x0035, 0x003F, 0x0000, 0x7FFF, 0x0000, 0x02E8},
    {0x0004, 0x0036, 0x003F, 0x0042, 0x0000, 0x7FFF, 0x0000, 0x02E8},
    {0x0003, 0x0042, 0x0060, 0x0062, 0x0000, 0x7FFF, 0x0000, 0x02E8},
    {0x0003, 0x0042, 0x0062, 0x0036, 0x0000, 0x7FFF, 0x0000, 0x02E8},
    {0x0001, 0x001F, 0x0022, 0x002B, 0x0000, 0x0000, 0x7FFF, 0x0F40},
    {0x0001, 0x001F, 0x002B, 0x002A, 0x0000, 0x0000, 0x7FFF, 0x0F40},
    {0x0001, 0x0024, 0x0023, 0x0029, 0x8001, 0x0000, 0x0000, 0xFEDE},
    {0x0001, 0x0024, 0x0029, 0x002C, 0x8001, 0x0000, 0x0000, 0xFEDE},
    {0x0002, 0x0027, 0x000C, 0x000E, 0x0000, 0x0000, 0x8001, 0xF570},
    {0x0002, 0x0027, 0x000E, 0x0025, 0x0000, 0x0000, 0x8001, 0xF570},
    {0x0001, 0x0021, 0x0020, 0x0026, 0x7FFF, 0x0000, 0x0000, 0x05D2},
    {0x0001, 0x0021, 0x0026, 0x0028, 0x7FFF, 0x0000, 0x0000, 0x05D2},
    {0x0001, 0x0023, 0x000D, 0x002D, 0xBC2A, 0x9376, 0x0000, 0xFBBE},
    {0x0001, 0x0023, 0x002D, 0x0029, 0xBC2A, 0x9376, 0x0000, 0xFBBE},
    {0x0001, 0x002A, 0x002D, 0x002E, 0x0000, 0x9376, 0x43D6, 0x046D},
    {0x0001, 0x002A, 0x002E, 0x001F, 0x0000, 0x9376, 0x43D6, 0x046D},
    {0x0001, 0x0020, 0x002E, 0x0007, 0x43D6, 0x9376, 0x0000, 0xFF6E},
    {0x0001, 0x0020, 0x0007, 0x0026, 0x43D6, 0x9376, 0x0000, 0xFF6E},
    {0x0002, 0x0022, 0x001D, 0x001B, 0x0000, 0x7FFF, 0x0000, 0x05E0},
    {0x0002, 0x0022, 0x001B, 0x002B, 0x0000, 0x7FFF, 0x0000, 0x05E0},
    {0x0002, 0x001B, 0x0019, 0x002C, 0x0000, 0x7FFF, 0x0000, 0x05E0},
    {0x0002, 0x001B, 0x002C, 0x002B, 0x0000, 0x7FFF, 0x0000, 0x05E0},
    {0x0002, 0x0022, 0x0021, 0x0010, 0x0000, 0x7FFF, 0x0000, 0x05E0},
    {0x0002, 0x0022, 0x0010, 0x001D, 0x0000, 0x7FFF, 0x0000, 0x05E0},
    {0x0002, 0x0025, 0x0015, 0x0013, 0x0000, 0x7FFF, 0x0000, 0x05E0},
    {0x0002, 0x0025, 0x0013, 0x0027, 0x0000, 0x7FFF, 0x0000, 0x05E0},
    {0x0002, 0x0025, 0x0024, 0x0017, 0x0000, 0x7FFF, 0x0000, 0x05E0},
    {0x0002, 0x0025, 0x0017, 0x0015, 0x0000, 0x7FFF, 0x0000, 0x05E0},
    {0x0002, 0x0013, 0x0011, 0x0028, 0x0000, 0x7FFF, 0x0000, 0x05E0},
    {0x0002, 0x0013, 0x0028, 0x0027, 0x0000, 0x7FFF, 0x0000, 0x05E0},
    {0x0002, 0x0028, 0x0011, 0x0010, 0x0000, 0x7FFF, 0x0000, 0x05E0},
    {0x0002, 0x0028, 0x0010, 0x0021, 0x0000, 0x7FFF, 0x0000, 0x05E0},
    {0x0002, 0x0019, 0x0017, 0x0024, 0x0000, 0x7FFF, 0x0000, 0x05E0},
    {0x0002, 0x0019, 0x0024, 0x002C, 0x0000, 0x7FFF, 0x0000, 0x05E0},
    {0x0005, 0x0012, 0x0014, 0x0063, 0x0000, 0x7FFF, 0x0000, 0x05F4},
    {0x0005, 0x0063, 0x001A, 0x001C, 0x0000, 0x7FFF, 0x0000, 0x05F4},
    {0x0005, 0x0016, 0x0018, 0x0063, 0x0000, 0x7FFF, 0x0000, 0x05F4},
    {0x0005, 0x0063, 0x001E, 0x000F, 0x0000, 0x7FFF, 0x0000, 0x05F4},
    {0x0005, 0x0014, 0x0016, 0x0063, 0x0000, 0x7FFF, 0x0000, 0x05F4},
    {0x0005, 0x0063, 0x001C, 0x001E, 0x0000, 0x7FFF, 0x0000, 0x05F4},
    {0x0005, 0x0018, 0x001A, 0x0063, 0x0000, 0x7FFF, 0x0000, 0x05F4},
    {0x0005, 0x0063, 0x000F, 0x0012, 0x0000, 0x7FFF, 0x0000, 0x05F4},
    {0x0001, 0x005F, 0x0046, 0x0045, 0x0000, 0x8001, 0x0000, 0xFDB8},
    {0x0001, 0x005F, 0x0045, 0x0061, 0x0000, 0x8001, 0x0000, 0xFDB8},
    {0x0006, 0x000B, 0x0039, 0x003C, 0x7FFF, 0x0000, 0x0000, 0x03CA},
    {0x0006, 0x000A, 0x000B, 0x003C, 0x7FFF, 0x0000, 0x0000, 0x03CA},
    {0x0006, 0x0008, 0x000A, 0x003C, 0x0000, 0x0000, 0x8001, 0xF570},
    {0x0006, 0x0008, 0x003C, 0x003F, 0x0000, 0x0000, 0x8001, 0xF570},
    {0x0002, 0x000B, 0x0009, 0x0035, 0x0000, 0x0000, 0x7FFF, 0x0B30},
    {0x0002, 0x000B, 0x0035, 0x0039, 0x0000, 0x0000, 0x7FFF, 0x0B30},
    {0x0002, 0x0009, 0x0008, 0x003F, 0x8001, 0x0000, 0x0000, 0xFCD6},
    {0x0002, 0x0009, 0x003F, 0x0035, 0x8001, 0x0000, 0x0000, 0xFCD6},
    {0x0001, 0x0004, 0x000D, 0x0005, 0x0000, 0x8001, 0x0000, 0xFC78},
};

Vec3s ddan_boss_sceneCollisionHeader_000E20Vertices[] = {
    {   -370,   -584,  -2864 },
    {   -370,   -744,  -2864 },
    {   -370,   -744,  -2704 },
    {   -370,   -584,  -2704 },
    {   -890,   -904,  -3304 },
    {   -810,   -904,  -3024 },
    {   -970,   -904,  -3024 },
    {  -1170,   -904,  -3024 },
    {   -810,  -1104,  -2704 },
    {   -810,   -904,  -2864 },
    {   -970,  -1104,  -2704 },
    {   -970,   -904,  -2864 },
    {  -1410,  -1104,  -2704 },
    {   -610,   -904,  -3024 },
    {   -370,  -1104,  -2704 },
    {  -1250,  -1524,  -3487 },
    {  -1290,  -1504,  -3504 },
    {  -1290,  -1504,  -3104 },
    {  -1250,  -1524,  -3120 },
    {  -1090,  -1504,  -2904 },
    {  -1073,  -1524,  -2944 },
    {   -690,  -1504,  -2904 },
    {   -707,  -1524,  -2944 },
    {   -490,  -1504,  -3104 },
    {   -530,  -1524,  -3120 },
    {   -490,  -1504,  -3504 },
    {   -530,  -1524,  -3487 },
    {   -690,  -1504,  -3704 },
    {   -707,  -1524,  -3664 },
    {  -1090,  -1504,  -3704 },
    {  -1073,  -1524,  -3664 },
    {  -1410,  -1104,  -3904 },
    {  -1490,  -1104,  -3824 },
    {  -1490,  -1504,  -3824 },
    {  -1410,  -1504,  -3904 },
    {   -290,  -1104,  -2784 },
    {   -290,  -1504,  -2784 },
    {   -370,  -1504,  -2704 },
    {  -1490,  -1104,  -2784 },
    {  -1410,  -1504,  -2704 },
    {  -1490,  -1504,  -2784 },
    {   -290,  -1104,  -3824 },
    {   -370,  -1104,  -3904 },
    {   -370,  -1504,  -3904 },
    {   -290,  -1504,  -3824 },
    {   -610,   -904,  -3584 },
    {  -1170,   -904,  -3584 },
    {   -990,   -344,  -2684 },
    {   -990,   -344,  -2884 },
    {   -790,   -344,  -2884 },
    {   -790,   -344,  -2684 },
    {  -1190,   -544,  -2484 },
    {   -590,   -544,  -2484 },
    {   -810,   -744,  -2864 },
    {   -590,   -744,  -2864 },
    {   -630,   -744,  -3004 },
    {   -670,   -744,  -3044 },
    {   -970,   -744,  -2864 },
    {  -1110,   -744,  -3044 },
    {  -1150,   -744,  -3004 },
    {   -970,   -744,  -2704 },
    {  -1150,   -744,  -2564 },
    {  -1110,   -744,  -2524 },
    {   -810,   -744,  -2704 },
    {   -670,   -744,  -2524 },
    {   -630,   -744,  -2564 },
    {   -590,   -744,  -2704 },
    {   -590,   -744,  -2564 },
    {   -590,   -744,  -3004 },
    {   -590,   -584,  -2864 },
    {   -590,   -584,  -2704 },
    {   -590,   -544,  -2564 },
    {   -590,   -544,  -3004 },
    {   -590,   -544,  -3084 },
    {  -1190,   -544,  -3084 },
    {   -670,   -744,  -3084 },
    {  -1110,   -744,  -3084 },
    {  -1190,   -744,  -2564 },
    {  -1190,   -744,  -3004 },
    {  -1110,   -744,  -2484 },
    {   -670,   -744,  -2484 },
    {  -1110,   -544,  -3084 },
    {  -1110,   -484,  -3044 },
    {  -1150,   -484,  -3004 },
    {  -1190,   -544,  -3004 },
    {   -670,   -484,  -3044 },
    {   -670,   -544,  -3084 },
    {   -630,   -484,  -3004 },
    {   -630,   -484,  -2564 },
    {   -670,   -484,  -2524 },
    {   -670,   -544,  -2484 },
    {  -1110,   -484,  -2524 },
    {  -1110,   -544,  -2484 },
    {  -1150,   -484,  -2564 },
    {  -1190,   -544,  -2564 },
    {   -360,   -584,  -2704 },
    {   -360,   -744,  -2704 },
    {   -360,   -584,  -2864 },
    {   -360,   -744,  -2864 },
    {   -890,  -1524,  -3304 },
    {   -360,   -744,  -2624 },
    {    -50,   -744,  -2624 },
    {    -50,   -744,  -2944 },
    {   -360,   -744,  -2944 },
};

CollisionHeader ddan_boss_sceneCollisionHeader_000E20 = { 
    { -1490, -1524, -3904 },
    { 620, -144, -1994 },
    104, ddan_boss_sceneCollisionHeader_000E20Vertices,
    168, ddan_boss_sceneCollisionHeader_000E20Polygons,
    ddan_boss_sceneCollisionHeader_000E20SurfaceType,
    ddan_boss_sceneCollisionHeader_000E20CamDataList,
    0, NULL
};

u8 ddan_boss_scene_possiblePadding_000E4C[] = {
    0x00, 0x00, 0x00, 0x00, 
};

u64 ddan_boss_sceneTLUT_000E50[] = {
#include "assets/scenes/dungeons/ddan_boss/ddan_boss_sceneTLUT_000E50.rgba16.inc.c"
};

u8 ddan_boss_scene_unaccounted_001050[] = {
    0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 
};

u64 ddan_boss_sceneTex_001058[] = {
#include "assets/scenes/dungeons/ddan_boss/ddan_boss_sceneTex_001058.ci8.inc.c"
};

u64 ddan_boss_sceneTex_001858[] = {
#include "assets/scenes/dungeons/ddan_boss/ddan_boss_sceneTex_001858.ci8.inc.c"
};

u64 ddan_boss_sceneTex_002058[] = {
#include "assets/scenes/dungeons/ddan_boss/ddan_boss_sceneTex_002058.ci8.inc.c"
};
