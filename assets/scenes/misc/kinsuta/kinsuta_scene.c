#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "kinsuta_scene.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "kinsuta_room_0.h"

SceneCmd kinsuta_sceneCommands[] = {
    SCENE_CMD_SOUND_SETTINGS(5, 19, 28),
    SCENE_CMD_ROOM_LIST(1, kinsuta_sceneRoomList0x000080),
    SCENE_CMD_TRANSITION_ACTOR_LIST(1, kinsuta_sceneTransitionActorList_000070),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x00000001),
    SCENE_CMD_COL_HEADER(&kinsuta_sceneCollisionHeader_0015E4),
    SCENE_CMD_ENTRANCE_LIST(kinsuta_sceneEntranceList0x000088),
    SCENE_CMD_SPECIAL_FILES(0x00, OBJECT_GAMEPLAY_FIELD_KEEP),
    SCENE_CMD_SPAWN_LIST(1, kinsuta_sceneStartPositionList0x000060),
    SCENE_CMD_SKYBOX_SETTINGS(0, 0, true),
    SCENE_CMD_EXIT_LIST(kinsuta_sceneExitList_00008C),
    SCENE_CMD_ENV_LIGHT_SETTINGS(1, kinsuta_sceneLightSettings0x000090),
    SCENE_CMD_END(),
};

ActorEntry kinsuta_sceneStartPositionList0x000060[] = {
    { ACTOR_PLAYER,     {     -1,      0,    507 }, {      0, 0X8000,      0 }, 0x0EFF },
};

TransitionActorEntry kinsuta_sceneTransitionActorList_000070[] = {
    { 0, 255, 0, 255, ACTOR_EN_DOOR, 0, 0, 549, 0, 0x01BF },
};

RomFile kinsuta_sceneRoomList0x000080[] = {
    { _kinsuta_room_0SegmentRomStart, _kinsuta_room_0SegmentRomEnd },
};

EntranceEntry kinsuta_sceneEntranceList0x000088[] = {
    { 0x00, 0x00 },
    { 0x00, 0x00 },
};

u16 kinsuta_sceneExitList_00008C[] = {
    0x04EE,
    0x0000,
};

LightSettings kinsuta_sceneLightSettings0x000090[] = {
    { 0x14, 0x28, 0x14, 0x00, 0x81, 0x00, 0xFF, 0xFF, 0x8C, 0x00, 0x7F, 0x00, 0x3C, 0x28, 0x8C, 0x0A, 0x00, 0x0A,
    0x03A2, 0x07D0 },
};

u8 kinsuta_scene_possiblePadding_0000A8[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

CamData kinsuta_sceneCollisionHeader_0015E4CamDataList[] = {
    { 0x0000, 0, NULL },
    { 0x003A, 0, NULL },
    { 0x0001, 0, NULL },
};

SurfaceType kinsuta_sceneCollisionHeader_0015E4SurfaceType[] = {
    { 0x00000000, 0x000017CA },
    { 0x00000001, 0x0000100A },
    { 0x00000002, 0x0000100A },
    { 0x00000000, 0x000017C0 },
    { 0x00000100, 0x0000100A },
    { 0x00000002, 0x000017C0 },
};

CollisionPoly kinsuta_sceneCollisionHeader_0015E4Polygons[] = {
    {0x0000, 0x0061, 0x0062, 0x0063, 0x0000, 0x0000, 0x7FFF, 0xFFE3},
    {0x0000, 0x0061, 0x0063, 0x0064, 0x0000, 0x0000, 0x7FFF, 0xFFE3},
    {0x0000, 0x0065, 0x0066, 0x0067, 0x0000, 0x0000, 0x8001, 0xFFE4},
    {0x0000, 0x0065, 0x0067, 0x0068, 0x0000, 0x0000, 0x8001, 0xFFE4},
    {0x0000, 0x0064, 0x0063, 0x0066, 0x8001, 0x0000, 0x0000, 0x0101},
    {0x0000, 0x0064, 0x0066, 0x0065, 0x8001, 0x0000, 0x0000, 0x0101},
    {0x0001, 0x0066, 0x0063, 0x0062, 0x0000, 0x7FFF, 0x0000, 0xFFD8},
    {0x0001, 0x0066, 0x0062, 0x0067, 0x0000, 0x7FFF, 0x0000, 0xFFD8},
    {0x0000, 0x0069, 0x006A, 0x006B, 0xB0B8, 0x276E, 0x5C6D, 0x00F7},
    {0x0000, 0x006C, 0x006D, 0x0069, 0xB069, 0x25F0, 0x5CC9, 0x00F8},
    {0x0000, 0x006C, 0x0069, 0x006B, 0xB758, 0x2978, 0x60E0, 0x00F6},
    {0x0000, 0x006E, 0x006D, 0x006C, 0x7220, 0x1E0D, 0x318D, 0xFFBC},
    {0x0000, 0x006E, 0x006C, 0x006F, 0x69E7, 0x243E, 0x3E15, 0xFFDA},
    {0x0001, 0x0070, 0x0069, 0x006D, 0xCAF3, 0x6142, 0xBFE6, 0xFF8D},
    {0x0001, 0x0070, 0x006D, 0x006E, 0xC020, 0x5FCF, 0xC81C, 0xFFAB},
    {0x0001, 0x0071, 0x006A, 0x0069, 0x2F72, 0x769D, 0xF818, 0xFF75},
    {0x0001, 0x0071, 0x0069, 0x0070, 0x21A5, 0x7B5E, 0xFA64, 0xFF87},
    {0x0000, 0x0072, 0x006B, 0x006A, 0x96F8, 0xDC29, 0xC03B, 0x0014},
    {0x0000, 0x0072, 0x006A, 0x0071, 0x949D, 0xDBE4, 0xC472, 0x001F},
    {0x0000, 0x0073, 0x0074, 0x0075, 0x5A68, 0xD69C, 0x509A, 0x000D},
    {0x0000, 0x0073, 0x0075, 0x0076, 0x6163, 0xC368, 0x38CF, 0xFFDB},
    {0x0000, 0x0077, 0x0078, 0x0079, 0xA180, 0xC031, 0xC5D9, 0xFFD1},
    {0x0000, 0x0077, 0x0079, 0x007A, 0xA252, 0xB4DA, 0xD3BC, 0xFFEE},
    {0x0000, 0x007A, 0x0079, 0x007B, 0x908D, 0x0BAC, 0xC226, 0xFFD1},
    {0x0000, 0x007A, 0x007B, 0x007C, 0x8E8E, 0x0A1C, 0xC598, 0xFFDA},
    {0x0001, 0x007C, 0x007B, 0x0074, 0x149B, 0x7DE0, 0xF553, 0xFFC0},
    {0x0001, 0x007C, 0x0074, 0x0073, 0x13C7, 0x7E1C, 0xF69A, 0xFFC3},
    {0x0000, 0x0074, 0x007B, 0x0079, 0xC69D, 0x26D3, 0x6B9F, 0x0108},
    {0x0000, 0x0079, 0x0078, 0x0075, 0xC41B, 0x2706, 0x6A2D, 0x0107},
    {0x0000, 0x0074, 0x0079, 0x0075, 0xC859, 0x35E3, 0x65E5, 0x00FA},
    {0x0000, 0x007D, 0x007E, 0x007F, 0x7A3A, 0x240B, 0xF3FC, 0x00FA},
    {0x0000, 0x0080, 0x0081, 0x007D, 0x79C6, 0x2717, 0x0520, 0x00F7},
    {0x0000, 0x0080, 0x007D, 0x007F, 0x79E9, 0x25B0, 0x0A0E, 0x00F8},
    {0x0000, 0x0082, 0x0081, 0x0080, 0x0000, 0x0000, 0x8001, 0xFFEE},
    {0x0000, 0x0082, 0x0080, 0x0083, 0x0000, 0x0000, 0x8001, 0xFFEE},
    {0x0001, 0x0084, 0x007D, 0x0081, 0xEE8E, 0x7A21, 0x221A, 0xFF90},
    {0x0001, 0x0084, 0x0081, 0x0082, 0xEBAE, 0x79EC, 0x2140, 0xFF89},
    {0x0001, 0x0085, 0x007E, 0x007D, 0xEECF, 0x7854, 0xD7E4, 0xFF94},
    {0x0001, 0x0085, 0x007D, 0x0084, 0xEECF, 0x7854, 0xD7E4, 0xFF94},
    {0x0000, 0x0086, 0x007F, 0x007E, 0x0000, 0xFB25, 0x7FE7, 0xFFF6},
    {0x0000, 0x0086, 0x007E, 0x0085, 0x00B4, 0xFB15, 0x7FE6, 0xFFF8},
    {0x0002, 0x0087, 0x0088, 0x0089, 0x0000, 0x7FFF, 0x0000, 0xFFD8},
    {0x0002, 0x0087, 0x0089, 0x008A, 0x0000, 0x7FFF, 0x0000, 0xFFD8},
    {0x0000, 0x008B, 0x0088, 0x0087, 0x8001, 0x0000, 0x0000, 0x0053},
    {0x0000, 0x008B, 0x0087, 0x008C, 0x8001, 0x0000, 0x0000, 0x0053},
    {0x0000, 0x008D, 0x0089, 0x0088, 0x0000, 0x0000, 0x7FFF, 0xFE72},
    {0x0000, 0x008D, 0x0088, 0x008B, 0x0000, 0x0000, 0x7FFF, 0xFE72},
    {0x0000, 0x008C, 0x0087, 0x008A, 0x0000, 0x0000, 0x8001, 0x0155},
    {0x0000, 0x008C, 0x008A, 0x008E, 0x0000, 0x0000, 0x8001, 0x0155},
    {0x0000, 0x008F, 0x0090, 0x0091, 0x90A4, 0x0000, 0xC0E5, 0xFFC0},
    {0x0000, 0x008F, 0x0091, 0x0092, 0x90A4, 0x0000, 0xC0E5, 0xFFC0},
    {0x0000, 0x0093, 0x0094, 0x0095, 0x6E6C, 0x0000, 0x40BB, 0x0003},
    {0x0000, 0x0093, 0x0095, 0x0096, 0x6E6C, 0x0000, 0x40BB, 0x0003},
    {0x0000, 0x0092, 0x0091, 0x0094, 0x4131, 0x0000, 0x91D9, 0x0101},
    {0x0000, 0x0092, 0x0094, 0x0093, 0x4131, 0x0000, 0x91D9, 0x0101},
    {0x0001, 0x0090, 0x0095, 0x0094, 0x0000, 0x7FFF, 0x0000, 0xFFD8},
    {0x0001, 0x0090, 0x0094, 0x0091, 0x0000, 0x7FFF, 0x0000, 0xFFD8},
    {0x0002, 0x0097, 0x0098, 0x0099, 0xFFAA, 0x48DB, 0x693D, 0xFE9E},
    {0x0002, 0x0097, 0x0099, 0x009A, 0x0000, 0x48F8, 0x6929, 0xFE9E},
    {0x0002, 0x009B, 0x0099, 0x0098, 0xED21, 0x713B, 0xC762, 0x0092},
    {0x0002, 0x009B, 0x0098, 0x009C, 0xED21, 0x713B, 0xC762, 0x0092},
    {0x0000, 0x009D, 0x009A, 0x0099, 0x8010, 0x0014, 0x03E0, 0x0052},
    {0x0000, 0x009D, 0x0099, 0x009B, 0x8001, 0x0000, 0x0000, 0x005E},
    {0x0000, 0x009D, 0x009B, 0x009C, 0xF71C, 0xF27E, 0x8108, 0x0191},
    {0x0000, 0x009D, 0x009C, 0x009E, 0xFEAF, 0xEEE0, 0x8129, 0x018B},
    {0x0000, 0x009F, 0x00A0, 0x00A1, 0x7BCD, 0x207F, 0x0000, 0x005B},
    {0x0000, 0x009F, 0x00A1, 0x00A2, 0x7BCD, 0x207F, 0x0000, 0x005B},
    {0x0000, 0x00A3, 0x00A4, 0x00A0, 0x0000, 0x0000, 0x8001, 0x0165},
    {0x0000, 0x00A3, 0x00A0, 0x009F, 0x0000, 0x0000, 0x8001, 0x0165},
    {0x0000, 0x00A2, 0x00A1, 0x00A5, 0x0000, 0x0000, 0x7FFF, 0xFE88},
    {0x0000, 0x00A2, 0x00A5, 0x00A6, 0x0000, 0x0000, 0x7FFF, 0xFE88},
    {0x0000, 0x00A7, 0x00A8, 0x00A9, 0x7F29, 0x0E98, 0x0000, 0x0068},
    {0x0000, 0x00A7, 0x00A9, 0x00AA, 0x7F29, 0x0E98, 0x0000, 0x0068},
    {0x0000, 0x00AB, 0x00AC, 0x00A8, 0x0000, 0x0000, 0x8001, 0x0144},
    {0x0000, 0x00AB, 0x00A8, 0x00A7, 0x0000, 0x0000, 0x8001, 0x0144},
    {0x0000, 0x00AA, 0x00A9, 0x00AD, 0x0000, 0x0000, 0x7FFF, 0xFEB1},
    {0x0000, 0x00AA, 0x00AD, 0x00AE, 0x0000, 0x0000, 0x7FFF, 0xFEB1},
    {0x0000, 0x00AF, 0x00B0, 0x00B1, 0x0000, 0x1B1B, 0x7D18, 0xFEA4},
    {0x0000, 0x00AF, 0x00B1, 0x00B2, 0x0000, 0x1B1B, 0x7D18, 0xFEA4},
    {0x0000, 0x00B3, 0x00B4, 0x00B5, 0x0000, 0xE6E6, 0x827D, 0x0152},
    {0x0000, 0x00B3, 0x00B5, 0x00B6, 0x0000, 0xE6E6, 0x827D, 0x0152},
    {0x0000, 0x00B6, 0x00B5, 0x00B0, 0x7F29, 0x0E8B, 0xFE8C, 0x006C},
    {0x0000, 0x00B6, 0x00B0, 0x00AF, 0x7F29, 0x0E8C, 0xFEAD, 0x006C},
    {0x0000, 0x2000, 0x0001, 0x0002, 0x5A82, 0x0000, 0xA57E, 0x007F},
    {0x0000, 0x2000, 0x0002, 0x0003, 0x5A82, 0x0000, 0xA57E, 0x007F},
    {0x0000, 0x2004, 0x0005, 0x0001, 0xA57E, 0x0000, 0xA57E, 0xFFD3},
    {0x0000, 0x2004, 0x0001, 0x0000, 0xA57E, 0x0000, 0xA57E, 0xFFD3},
    {0x0000, 0x2006, 0x0007, 0x0005, 0xA57E, 0x0000, 0x5A82, 0xFF70},
    {0x0000, 0x2006, 0x0005, 0x0004, 0xA57E, 0x0000, 0x5A82, 0xFF70},
    {0x0000, 0x2003, 0x0002, 0x0007, 0x5A82, 0x0000, 0x5A82, 0x001C},
    {0x0000, 0x2003, 0x0007, 0x0006, 0x5A82, 0x0000, 0x5A82, 0x001C},
    {0x0000, 0x2008, 0x0009, 0x000A, 0x5A82, 0x0000, 0xA57E, 0xFFD3},
    {0x0000, 0x2008, 0x000A, 0x000B, 0x5A82, 0x0000, 0xA57E, 0xFFD3},
    {0x0000, 0x200C, 0x000D, 0x0009, 0xA57E, 0x0000, 0xA57E, 0x007F},
    {0x0000, 0x200C, 0x0009, 0x0008, 0xA57E, 0x0000, 0xA57E, 0x007F},
    {0x0000, 0x200E, 0x000F, 0x000D, 0xA57E, 0x0000, 0x5A82, 0x001C},
    {0x0000, 0x200E, 0x000D, 0x000C, 0xA57E, 0x0000, 0x5A82, 0x001C},
    {0x0000, 0x200B, 0x000A, 0x000F, 0x5A82, 0x0000, 0x5A82, 0xFF70},
    {0x0000, 0x200B, 0x000F, 0x000E, 0x5A82, 0x0000, 0x5A82, 0xFF70},
    {0x0000, 0x2010, 0x0011, 0x0012, 0x5A82, 0x0000, 0x5A82, 0xFFD3},
    {0x0000, 0x2010, 0x0012, 0x0013, 0x5A82, 0x0000, 0x5A82, 0xFFD3},
    {0x0000, 0x2013, 0x0012, 0x0014, 0xA57E, 0x0000, 0x5A82, 0x007F},
    {0x0000, 0x2013, 0x0014, 0x0015, 0xA57E, 0x0000, 0x5A82, 0x007F},
    {0x0000, 0x2015, 0x0014, 0x0016, 0xA57E, 0x0000, 0xA57E, 0x001C},
    {0x0000, 0x2015, 0x0016, 0x0017, 0xA57E, 0x0000, 0xA57E, 0x001C},
    {0x0000, 0x2017, 0x0016, 0x0011, 0x5A82, 0x0000, 0xA57E, 0xFF70},
    {0x0000, 0x2017, 0x0011, 0x0010, 0x5A82, 0x0000, 0xA57E, 0xFF70},
    {0x0000, 0x2018, 0x0019, 0x001A, 0x5A82, 0x0000, 0xA57E, 0x001C},
    {0x0000, 0x2018, 0x001A, 0x001B, 0x5A82, 0x0000, 0xA57E, 0x001C},
    {0x0000, 0x201C, 0x001D, 0x001E, 0xA57E, 0x0000, 0x5A82, 0xFFD3},
    {0x0000, 0x201C, 0x001E, 0x001F, 0xA57E, 0x0000, 0x5A82, 0xFFD3},
    {0x0000, 0x201B, 0x001A, 0x001D, 0x5A82, 0x0000, 0x5A82, 0x007F},
    {0x0000, 0x201B, 0x001D, 0x001C, 0x5A82, 0x0000, 0x5A82, 0x007F},
    {0x0000, 0x201F, 0x001E, 0x0019, 0xA57E, 0x0000, 0xA57E, 0xFF70},
    {0x0000, 0x201F, 0x0019, 0x0018, 0xA57E, 0x0000, 0xA57E, 0xFF70},
    {0x0000, 0x0020, 0x0021, 0x0022, 0x0000, 0x0000, 0x8001, 0x021B},
    {0x0000, 0x0020, 0x0022, 0x0023, 0x0000, 0x0000, 0x8001, 0x021B},
    {0x0000, 0x0024, 0x0025, 0x0026, 0x0000, 0x0000, 0x7FFF, 0xFDD1},
    {0x0000, 0x0024, 0x0026, 0x0027, 0x0000, 0x0000, 0x7FFF, 0xFDD1},
    {0x0000, 0x0028, 0x0029, 0x002A, 0x7F3A, 0x0000, 0xF1FC, 0x003E},
    {0x0000, 0x0028, 0x002A, 0x002B, 0x7F3A, 0x0000, 0xF1FC, 0x003E},
    {0x0000, 0x002C, 0x002D, 0x0029, 0x1B86, 0x0000, 0x7D00, 0x002D},
    {0x0000, 0x002C, 0x0029, 0x0028, 0x1B86, 0x0000, 0x7D00, 0x002D},
    {0x0000, 0x002E, 0x002F, 0x002D, 0x8343, 0x0000, 0x1CB3, 0x0036},
    {0x0000, 0x002E, 0x002D, 0x002C, 0x8343, 0x0000, 0x1CB3, 0x0036},
    {0x0003, 0x0030, 0x0031, 0x0032, 0x231E, 0x94FF, 0xC32C, 0x018C},
    {0x0003, 0x0030, 0x0033, 0x0031, 0x463C, 0x94FF, 0x0000, 0x018C},
    {0x0003, 0x0031, 0x0034, 0x0032, 0xDCE2, 0x94FF, 0xC32C, 0x018C},
    {0x0003, 0x0033, 0x0035, 0x0031, 0x231E, 0x94FF, 0x3CD4, 0x018C},
    {0x0003, 0x0035, 0x0036, 0x0031, 0xDCE2, 0x94FF, 0x3CD4, 0x018C},
    {0x0003, 0x0036, 0x0034, 0x0031, 0xB9C4, 0x94FF, 0x0000, 0x018C},
    {0x0000, 0x0037, 0x0038, 0x0039, 0x0000, 0x8001, 0x0000, 0x0107},
    {0x0000, 0x0037, 0x003A, 0x0038, 0x0000, 0x8001, 0x0000, 0x0107},
    {0x0000, 0x0037, 0x003B, 0x002E, 0x0000, 0x8001, 0x0000, 0x0107},
    {0x0000, 0x0037, 0x002E, 0x003A, 0x0000, 0x8001, 0x0000, 0x0107},
    {0x0000, 0x002E, 0x003C, 0x003A, 0x0000, 0x8001, 0x0000, 0x0107},
    {0x0000, 0x003C, 0x003D, 0x003A, 0x0000, 0x8001, 0x0000, 0x0107},
    {0x0000, 0x003B, 0x0037, 0x002B, 0x0000, 0x8001, 0x0000, 0x0107},
    {0x0000, 0x0037, 0x003E, 0x002B, 0x0000, 0x8001, 0x0000, 0x0107},
    {0x0000, 0x0037, 0x003F, 0x003E, 0x0000, 0x8001, 0x0000, 0x0107},
    {0x0000, 0x003F, 0x0040, 0x003E, 0x0000, 0x8001, 0x0000, 0x0107},
    {0x0000, 0x002B, 0x003E, 0x0028, 0x0000, 0x8001, 0x0000, 0x0107},
    {0x0000, 0x0037, 0x0041, 0x003F, 0x0000, 0x8001, 0x0000, 0x0107},
    {0x0000, 0x003E, 0x0042, 0x0043, 0x0000, 0x8001, 0x0000, 0x0107},
    {0x0000, 0x003E, 0x0043, 0x0028, 0x0000, 0x8001, 0x0000, 0x0107},
    {0x0000, 0x0042, 0x0044, 0x0045, 0x0000, 0x8001, 0x0000, 0x0107},
    {0x0000, 0x0042, 0x0045, 0x0043, 0x0000, 0x8001, 0x0000, 0x0107},
    {0x0000, 0x002E, 0x002C, 0x0046, 0x0000, 0x8001, 0x0000, 0x0107},
    {0x0000, 0x002E, 0x0046, 0x003C, 0x0000, 0x8001, 0x0000, 0x0107},
    {0x0000, 0x0046, 0x0047, 0x0048, 0x0000, 0x8001, 0x0000, 0x0107},
    {0x0000, 0x0046, 0x0048, 0x003C, 0x0000, 0x8001, 0x0000, 0x0107},
    {0x0000, 0x002C, 0x0049, 0x0046, 0x0000, 0x8001, 0x0000, 0x0107},
    {0x0000, 0x002C, 0x004A, 0x004B, 0x0000, 0x8001, 0x0000, 0x0107},
    {0x0000, 0x002C, 0x004B, 0x0049, 0x0000, 0x8001, 0x0000, 0x0107},
    {0x0000, 0x002C, 0x004C, 0x004A, 0x0000, 0x8001, 0x0000, 0x0107},
    {0x0000, 0x002C, 0x0028, 0x004C, 0x0000, 0x8001, 0x0000, 0x0107},
    {0x0000, 0x004C, 0x004D, 0x004A, 0x0000, 0x8001, 0x0000, 0x0107},
    {0x0000, 0x004D, 0x004E, 0x004A, 0x0000, 0x8001, 0x0000, 0x0107},
    {0x0000, 0x0028, 0x004F, 0x004C, 0x0000, 0x8001, 0x0000, 0x0107},
    {0x0000, 0x0028, 0x0050, 0x004F, 0x0000, 0x8001, 0x0000, 0x0107},
    {0x0000, 0x0028, 0x0051, 0x0050, 0x0000, 0x8001, 0x0000, 0x0107},
    {0x0000, 0x0028, 0x0052, 0x0051, 0x0000, 0x8001, 0x0000, 0x0107},
    {0x0000, 0x0028, 0x0043, 0x0052, 0x0000, 0x8001, 0x0000, 0x0107},
    {0x0000, 0x0051, 0x0053, 0x0054, 0x0000, 0x8001, 0x0000, 0x0107},
    {0x0000, 0x0051, 0x0054, 0x0050, 0x0000, 0x8001, 0x0000, 0x0107},
    {0x0000, 0x0055, 0x0056, 0x0057, 0x0000, 0x8001, 0x0000, 0x008C},
    {0x0000, 0x0055, 0x0057, 0x0058, 0x0000, 0x8001, 0x0000, 0x008C},
    {0x0000, 0x0059, 0x005A, 0x005B, 0x44DB, 0x0000, 0x941A, 0xFFD7},
    {0x0000, 0x0059, 0x005B, 0x005C, 0x44DB, 0x0000, 0x941A, 0xFFD7},
    {0x0000, 0x005D, 0x005E, 0x0059, 0x0000, 0x8001, 0x0000, 0x010F},
    {0x0000, 0x005D, 0x0059, 0x005C, 0x0000, 0x8001, 0x0000, 0x010F},
    {0x0000, 0x005D, 0x005F, 0x0060, 0xBCBD, 0x0000, 0x6CE6, 0x000F},
    {0x0000, 0x005D, 0x0060, 0x005E, 0xBCBD, 0x0000, 0x6CE6, 0x000F},
    {0x0000, 0x00DE, 0x00DF, 0x00E0, 0x0000, 0xFEB8, 0x8003, 0x0275},
    {0x0000, 0x00DE, 0x00E0, 0x00E1, 0x0000, 0xFEB8, 0x8003, 0x0275},
    {0x0002, 0x00C0, 0x00DB, 0x00D6, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x00C0, 0x00D6, 0x00BE, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0004, 0x00DB, 0x00E2, 0x00E3, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0004, 0x00DB, 0x00E3, 0x00D6, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0004, 0x00E2, 0x00DE, 0x00E1, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0004, 0x00E2, 0x00E1, 0x00E3, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x00D9, 0x00DF, 0x00DB, 0x7FFF, 0x0000, 0x0000, 0x001E},
    {0x0000, 0x00DF, 0x00DE, 0x00DB, 0x7FFF, 0x0000, 0x0000, 0x001E},
    {0x0000, 0x00D7, 0x00E0, 0x00DF, 0x0000, 0x8001, 0x0000, 0x0064},
    {0x0000, 0x00D7, 0x00DF, 0x00D9, 0x0000, 0x8001, 0x0000, 0x0064},
    {0x0000, 0x00D6, 0x00E0, 0x00D7, 0x8001, 0x0000, 0x0000, 0x001E},
    {0x0000, 0x00D6, 0x00E1, 0x00E0, 0x8001, 0x0000, 0x0000, 0x001E},
    {0x0000, 0x00C2, 0x00C3, 0x00C4, 0x9053, 0x0000, 0x3E8A, 0x0148},
    {0x0000, 0x00C2, 0x00C4, 0x00C5, 0x9053, 0x0000, 0x3E8A, 0x0148},
    {0x0000, 0x00C6, 0x00C7, 0x00C8, 0x9053, 0x0000, 0xC176, 0x0148},
    {0x0000, 0x00C6, 0x00C8, 0x00C9, 0x9053, 0x0000, 0xC176, 0x0148},
    {0x0000, 0x00CA, 0x00CB, 0x00CC, 0x6FAD, 0x0000, 0xC176, 0x0148},
    {0x0000, 0x00CA, 0x00CC, 0x00CD, 0x6FAD, 0x0000, 0xC176, 0x0148},
    {0x0000, 0x00CE, 0x00CF, 0x00D0, 0x6FAD, 0x0000, 0x3E8A, 0x0148},
    {0x0000, 0x00CE, 0x00D0, 0x00D1, 0x6FAD, 0x0000, 0x3E8A, 0x0148},
    {0x0000, 0x00D2, 0x00D3, 0x00D4, 0x0000, 0x0000, 0x7FFF, 0x0148},
    {0x0000, 0x00D2, 0x00D4, 0x00D5, 0x0000, 0x0000, 0x7FFF, 0x0148},
    {0x0000, 0x00BE, 0x00D6, 0x00D7, 0x8001, 0x0000, 0x0000, 0x001E},
    {0x0000, 0x00BE, 0x00D7, 0x00D8, 0x8001, 0x0000, 0x0000, 0x001E},
    {0x0000, 0x00D8, 0x00D7, 0x00D9, 0x0000, 0x8001, 0x0000, 0x0064},
    {0x0000, 0x00D8, 0x00D9, 0x00DA, 0x0000, 0x8001, 0x0000, 0x0064},
    {0x0000, 0x00DA, 0x00D9, 0x00DB, 0x7FFF, 0x0000, 0x0000, 0x001E},
    {0x0000, 0x00DA, 0x00DB, 0x00C0, 0x7FFF, 0x0000, 0x0000, 0x001E},
    {0x0003, 0x00DA, 0x00C0, 0x00C1, 0x0000, 0x0000, 0x8001, 0x0211},
    {0x0003, 0x00DA, 0x00C1, 0x0057, 0x0000, 0x0000, 0x8001, 0x0211},
    {0x0003, 0x00BF, 0x0056, 0x0055, 0x8001, 0x0000, 0x0000, 0x0076},
    {0x0003, 0x00BF, 0x0055, 0x00BB, 0x8001, 0x0000, 0x0000, 0x0076},
    {0x0003, 0x0057, 0x00C1, 0x00BA, 0x7FFF, 0x0000, 0x0000, 0x0076},
    {0x0003, 0x0057, 0x00BA, 0x0058, 0x7FFF, 0x0000, 0x0000, 0x0076},
    {0x0003, 0x00C6, 0x00C9, 0x00C4, 0x8001, 0x0000, 0x0000, 0x0123},
    {0x0003, 0x00C6, 0x00C4, 0x00C3, 0x8001, 0x0000, 0x0000, 0x0123},
    {0x0003, 0x00D1, 0x00CC, 0x00CB, 0x7FFF, 0x0000, 0x0000, 0x0123},
    {0x0003, 0x00D1, 0x00CB, 0x00CE, 0x7FFF, 0x0000, 0x0000, 0x0123},
    {0x0003, 0x00C2, 0x00C5, 0x00D4, 0xBFF4, 0x0000, 0x6ED2, 0x0123},
    {0x0003, 0x00C2, 0x00D4, 0x00D3, 0xBFF4, 0x0000, 0x6ED2, 0x0123},
    {0x0003, 0x00D2, 0x00D5, 0x00D0, 0x400C, 0x0000, 0x6ED2, 0x0123},
    {0x0003, 0x00D2, 0x00D0, 0x00CF, 0x400C, 0x0000, 0x6ED2, 0x0123},
    {0x0003, 0x00C8, 0x0055, 0x00DC, 0xBFE6, 0x0000, 0x9137, 0x0123},
    {0x0003, 0x00C8, 0x00C7, 0x0055, 0xBFE6, 0x0000, 0x9137, 0x0123},
    {0x0003, 0x00C7, 0x00BB, 0x0055, 0xBFE6, 0x0000, 0x9137, 0x0123},
    {0x0003, 0x00CA, 0x0058, 0x00BA, 0x401A, 0x0000, 0x9137, 0x0123},
    {0x0003, 0x00CA, 0x00CD, 0x0058, 0x401A, 0x0000, 0x9137, 0x0123},
    {0x0003, 0x00CD, 0x00DD, 0x0058, 0x401A, 0x0000, 0x9137, 0x0123},
    {0x0003, 0x00D8, 0x0056, 0x00BF, 0x0000, 0x0000, 0x8001, 0x0211},
    {0x0003, 0x00D8, 0x00BF, 0x00BE, 0x0000, 0x0000, 0x8001, 0x0211},
    {0x0003, 0x00D8, 0x00DA, 0x0057, 0x0000, 0x0000, 0x8001, 0x0211},
    {0x0003, 0x00D8, 0x0057, 0x0056, 0x0000, 0x0000, 0x8001, 0x0211},
    {0x0000, 0x00DD, 0x00DC, 0x0055, 0x0000, 0x0000, 0x8001, 0x010C},
    {0x0000, 0x00DD, 0x0055, 0x0058, 0x0000, 0x0000, 0x8001, 0x010C},
    {0x0005, 0x00E4, 0x00E5, 0x00E6, 0x0000, 0x7FFF, 0x0000, 0xFFFF},
    {0x0005, 0x00E4, 0x00E6, 0x00E7, 0x0000, 0x7FFF, 0x0000, 0xFFFF},
    {0x0005, 0x00E4, 0x00E7, 0x00E8, 0x0000, 0x7FFF, 0x0000, 0xFFFF},
    {0x0003, 0x00E9, 0x00EA, 0x00EB, 0x0000, 0x7FFF, 0x0000, 0xFFFF},
    {0x0003, 0x00E9, 0x00EC, 0x00EA, 0x0000, 0x7FFF, 0x0000, 0xFFFF},
    {0x0003, 0x00EC, 0x00ED, 0x00EA, 0x0000, 0x7FFF, 0x0000, 0xFFFF},
    {0x0003, 0x00ED, 0x00EE, 0x00EA, 0x0000, 0x7FFF, 0x0000, 0xFFFF},
    {0x0001, 0x00B7, 0x00B8, 0x00B9, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x00B7, 0x00B9, 0x00BA, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x00B7, 0x00BA, 0x00BB, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x00B7, 0x00BB, 0x00BC, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x00B7, 0x00BC, 0x00BD, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x00BA, 0x00BE, 0x00BF, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x00BA, 0x00C0, 0x00BE, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x00BA, 0x00C1, 0x00C0, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x00BA, 0x00BF, 0x00BB, 0x0000, 0x7FFF, 0x0000, 0x0000},
};

Vec3s kinsuta_sceneCollisionHeader_0015E4Vertices[] = {
    {   -121,      0,     58 },
    {   -121,    263,     58 },
    {   -109,    263,     70 },
    {   -109,      0,     70 },
    {   -133,      0,     70 },
    {   -133,    263,     70 },
    {   -121,      0,     82 },
    {   -121,    263,     82 },
    {    121,      0,     58 },
    {    121,    263,     58 },
    {    133,    263,     70 },
    {    133,      0,     70 },
    {    109,      0,     70 },
    {    109,    263,     70 },
    {    121,      0,     82 },
    {    121,    263,     82 },
    {    133,      0,    -70 },
    {    133,    263,    -70 },
    {    121,    263,    -58 },
    {    121,      0,    -58 },
    {    109,    263,    -70 },
    {    109,      0,    -70 },
    {    121,    263,    -82 },
    {    121,      0,    -82 },
    {   -121,      0,    -82 },
    {   -121,    263,    -82 },
    {   -109,    263,    -70 },
    {   -109,      0,    -70 },
    {   -121,      0,    -58 },
    {   -121,    263,    -58 },
    {   -133,    263,    -70 },
    {   -133,      0,    -70 },
    {     30,      0,    539 },
    {    -30,      0,    539 },
    {    -30,    100,    539 },
    {     30,    100,    539 },
    {     30,    100,    559 },
    {    -30,    100,    559 },
    {    -30,      0,    559 },
    {     30,      0,    559 },
    {    -66,    263,    -32 },
    {    -66,    271,    -32 },
    {    -53,    271,     86 },
    {    -53,    263,     86 },
    {     43,    263,    -56 },
    {     43,    271,    -56 },
    {     69,    263,     57 },
    {     69,    271,     57 },
    {   -291,    283,    168 },
    {      0,    474,      0 },
    {      0,    283,    336 },
    {   -291,    283,   -168 },
    {    291,    283,    168 },
    {      0,    283,   -336 },
    {    291,    283,   -168 },
    {      0,    263,    336 },
    {    179,    263,    151 },
    {    253,    263,    190 },
    {    164,    263,    132 },
    {     -1,    263,    111 },
    {    171,    263,     76 },
    {    200,    263,    105 },
    {   -153,    263,    117 },
    {   -175,    263,    211 },
    {   -190,    263,    175 },
    {   -211,    263,    214 },
    {   -219,    263,     94 },
    {   -185,    263,    -86 },
    {   -291,    263,     96 },
    {   -291,    263,    -93 },
    {    162,    263,   -122 },
    {    291,    263,   -105 },
    {    291,    263,     73 },
    {    131,    263,   -140 },
    {    145,    263,   -198 },
    {    170,    263,   -179 },
    {     20,    263,   -215 },
    {     76,    263,   -292 },
    {    229,    263,   -204 },
    {      3,    263,   -244 },
    {    -47,    263,   -223 },
    {   -163,    263,   -158 },
    {   -203,    263,   -124 },
    {   -231,    263,   -203 },
    {    -77,    263,   -291 },
    {    118,    140,    268 },
    {    118,    140,    529 },
    {   -118,    140,    529 },
    {   -118,    140,    268 },
    {    -29,    271,    -67 },
    {    -29,    276,    -67 },
    {    123,    276,     30 },
    {    123,    271,     30 },
    {     99,    271,     43 },
    {    -37,    271,    -41 },
    {     99,    276,     43 },
    {    -37,    276,    -41 },
    {    291,      0,     29 },
    {    291,     40,     29 },
    {    257,     40,     29 },
    {    257,      0,     29 },
    {    257,      0,    -28 },
    {    257,     40,    -28 },
    {    291,     40,    -28 },
    {    291,      0,    -28 },
    {    151,     73,   -243 },
    {    148,     74,   -246 },
    {    152,      0,   -211 },
    {    164,      0,   -202 },
    {    159,     80,   -239 },
    {    161,     79,   -243 },
    {    181,      0,   -231 },
    {    154,     72,   -247 },
    {    150,     73,   -249 },
    {    169,      0,   -239 },
    {    190,     15,   -226 },
    {    186,     16,   -221 },
    {    176,      0,   -218 },
    {    183,      0,   -230 },
    {    106,      0,   -275 },
    {     98,      0,   -262 },
    {     95,      9,   -267 },
    {    101,      8,   -278 },
    {     99,     26,   -271 },
    {    102,     25,   -277 },
    {   -284,     76,      4 },
    {   -284,     79,     13 },
    {   -261,      0,     10 },
    {   -259,      1,    -18 },
    {   -285,     82,    -18 },
    {   -291,     81,    -18 },
    {   -291,      0,    -18 },
    {   -291,     75,      4 },
    {   -291,     78,     13 },
    {   -291,      0,     10 },
    {     83,     40,    341 },
    {     83,     40,    398 },
    {    118,     40,    398 },
    {    118,     40,    341 },
    {     83,      0,    398 },
    {     83,      0,    341 },
    {    118,      0,    398 },
    {    118,      0,    341 },
    {   -199,      0,    221 },
    {   -199,     40,    221 },
    {   -182,     40,    191 },
    {   -182,      0,    191 },
    {   -133,      0,    220 },
    {   -133,     40,    220 },
    {   -150,     40,    249 },
    {   -150,      0,    249 },
    {    118,      0,    431 },
    {    118,     52,    395 },
    {     94,     49,    397 },
    {     95,      0,    431 },
    {     94,     47,    393 },
    {    118,     50,    391 },
    {     94,      0,    398 },
    {    120,     -2,    398 },
    {    -94,      0,    357 },
    {   -115,     80,    357 },
    {   -115,     80,    376 },
    {    -94,      0,    376 },
    {   -118,     -1,    357 },
    {   -118,     79,    357 },
    {   -118,     79,    376 },
    {   -118,     -1,    376 },
    {   -105,      0,    324 },
    {   -112,     61,    324 },
    {   -112,     61,    335 },
    {   -105,      0,    335 },
    {   -118,      0,    324 },
    {   -118,     60,    324 },
    {   -118,     60,    335 },
    {   -118,      0,    335 },
    {   -105,      1,    356 },
    {   -112,     61,    343 },
    {   -118,     61,    343 },
    {   -118,      1,    356 },
    {   -118,      0,    345 },
    {   -118,     60,    333 },
    {   -112,     60,    333 },
    {   -105,      0,    345 },
    {      0,      0,   -336 },
    {   -291,      0,   -168 },
    {   -291,      0,    168 },
    {   -118,      0,    268 },
    {    118,      0,    268 },
    {    291,      0,    168 },
    {    291,      0,   -168 },
    {     30,      0,    529 },
    {    118,      0,    529 },
    {    -30,      0,    529 },
    {   -118,      0,    529 },
    {    277,      0,   -176 },
    {    291,      0,   -151 },
    {    291,    283,   -151 },
    {    277,    283,   -176 },
    {    291,      0,    151 },
    {    277,      0,    176 },
    {    277,    283,    176 },
    {    291,    283,    151 },
    {   -277,      0,    176 },
    {   -291,      0,    151 },
    {   -291,    283,    151 },
    {   -277,    283,    176 },
    {   -291,      0,   -151 },
    {   -277,      0,   -176 },
    {   -277,    283,   -176 },
    {   -291,    283,   -151 },
    {    -14,      0,   -328 },
    {     14,      0,   -328 },
    {     14,    283,   -328 },
    {    -14,    283,   -328 },
    {     30,      0,    549 },
    {     30,    100,    549 },
    {     30,    100,    529 },
    {    -30,    100,    549 },
    {    -30,    100,    529 },
    {    -30,      0,    549 },
    {    118,    283,    268 },
    {   -118,    283,    268 },
    {    -30,      0,    629 },
    {    -30,    100,    628 },
    {     30,    100,    628 },
    {     30,      0,    629 },
    {    -30,      0,    589 },
    {     30,      0,    589 },
    {     74,      1,    270 },
    {     65,      1,    301 },
    {    101,      1,    376 },
    {    117,      1,    380 },
    {    143,      1,    254 },
    {   -162,      1,   -112 },
    {    -91,      1,    -67 },
    {    -92,      1,   -129 },
    {   -170,      1,    -82 },
    {   -134,      1,     -7 },
    {   -118,      1,     -3 },
};

CollisionHeader kinsuta_sceneCollisionHeader_0015E4 = { 
    { -291, -2, -336 },
    { 291, 474, 629 },
    239, kinsuta_sceneCollisionHeader_0015E4Vertices,
    245, kinsuta_sceneCollisionHeader_0015E4Polygons,
    kinsuta_sceneCollisionHeader_0015E4SurfaceType,
    kinsuta_sceneCollisionHeader_0015E4CamDataList,
    0, NULL
};

