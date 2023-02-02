#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_anubice.h"

s16 sAnubiceLaughingAnimFrameData[] = {
    0x0000, 0x125C, 0x4000, 0x2000, 0x8000, 0x13E9, 0x125C, 0x1324, 0x13EC, 0x12A0, 0x1154, 0x1008, 0x104B, 0x108F, 
    0x10D2, 0x108F, 0x104B, 0x1008, 0xC000, 0xBD7C, 0xB77D, 0xB054, 0xAA54, 0xA7D1, 0xA7D1, 0xA7D1, 0xA7D1, 0xA7D1, 
    0xA7D1, 0xA7D1, 0x0000, 0x012B, 0x03F5, 0x0749, 0x0A13, 0x0B3F, 0x0B3F, 0x0B3F, 0x0B3F, 0x0B3F, 0x0B3F, 0x0B3F, 
    0x0000, 0x0145, 0x044D, 0x07EC, 0x0AF4, 0x0C39, 0x0C39, 0x0C39, 0x0C39, 0x0C39, 0x0C39, 0x0C39, 0x0000, 0x0179, 
    0x04FE, 0x0930, 0x0CB4, 0x0E2E, 0x0E2E, 0x0E2E, 0x0E2E, 0x0E2E, 0x0E2E, 0x0E2E, 0x0000, 0x01DF, 0x0657, 0x0BAB, 
    0x1023, 0x1202, 0x1202, 0x1202, 0x1202, 0x1202, 0x1202, 0x1202, 0xC000, 0xC000, 0xBB57, 0xB144, 0xA7A2, 0xA44B, 
    0xB6AA, 0xCA91, 0xC216, 0xB78F, 0xC2AF, 0xCD72, 0x8000, 0x7B8C, 0x70A6, 0x6301, 0x564C, 0x4E39, 0x4B14, 0x4A33, 
    0x4AD4, 0x4C36, 0x4D98, 0x4E39, 0x8000, 0x83B1, 0x8C9F, 0x9794, 0xA158, 0xA6B5, 0xA1EE, 0x96E0, 0x90B4, 0x9669, 
    0xA101, 0xA6B5, 
};

JointIndex sAnubiceLaughingAnimJointIndices[] = {
    { 0x0000, 0x0006, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0002, 0x0000 },
    { 0x0000, 0x0000, 0x0012 },
    { 0x0000, 0x0000, 0x001E },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x002A },
    { 0x0000, 0x0000, 0x0036 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0042 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x004E },
    { 0x0003, 0x0002, 0x0003 },
    { 0x0000, 0x0000, 0x005A },
    { 0x0004, 0x0004, 0x0005 },
    { 0x0000, 0x0000, 0x0066 },
};

AnimationHeader gAnubiceLaughingAnim = { 
    { 12 }, sAnubiceLaughingAnimFrameData,
    sAnubiceLaughingAnimJointIndices, 6
};

u8 object_anubice_possiblePadding_000154[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

s16 sAnubiceFallDownAnimFrameData[] = {
    0x0000, 0x1068, 0x4000, 0x2000, 0x8000, 0x13E9, 0x1068, 0x0F6E, 0x0E74, 0x0D7A, 0x0C80, 0x0A8C, 0x0898, 0x06A4, 
    0x04B0, 0x0557, 0x05FD, 0x06A4, 0x0627, 0x05AA, 0x052D, 0x04B0, 0x0514, 0x0578, 0x0535, 0x04F3, 0x04B0, 0x0000, 
    0xFDDA, 0xFBB4, 0xF98E, 0xF768, 0xF542, 0xF31C, 0xF0F6, 0xEED0, 0xEED0, 0xEED0, 0xEED0, 0xEED0, 0xEED0, 0xEED0, 
    0xEED0, 0xEED0, 0xEED0, 0xEED0, 0xEED0, 0xEED0, 0xD58C, 0xCFA0, 0xC763, 0xBD76, 0xB27A, 0xA710, 0x9BD9, 0x9177, 
    0x888A, 0x8148, 0x7C2D, 0x7A48, 0x7C9B, 0x81A4, 0x86AB, 0x88F2, 0x88F2, 0x88F2, 0x88F2, 0x88F2, 0x88F2, 0xF3F4, 
    0xF435, 0xF526, 0xF6A1, 0xF87C, 0xFA90, 0xFCB6, 0xFEC5, 0x0096, 0x02E6, 0x057A, 0x06B2, 0x0609, 0x046C, 0x026B, 
    0x0096, 0xFE91, 0xFD53, 0xFE2C, 0xFFBD, 0x0096, 0xF54C, 0xF3DB, 0xF2A6, 0xF1B9, 0xF123, 0xF0F2, 0xF132, 0xF1F3, 
    0xF342, 0xF90C, 0x024A, 0x07A1, 0x0679, 0x0276, 0xFD91, 0xF9C7, 0xF851, 0xF826, 0xF892, 0xF95B, 0xF9C7, 0xF575, 
    0xF434, 0xF326, 0xF260, 0xF1F5, 0xF1FA, 0xF284, 0xF3A6, 0xF575, 0xFC82, 0x07A1, 0x0E50, 0x0DA0, 0x09BA, 0x04C3, 
    0x00DE, 0xFEFB, 0xFE6C, 0xFF0E, 0x003C, 0x00DE, 0xF084, 0xEE74, 0xECD6, 0xEBBB, 0xEB33, 0xEB4E, 0xEC1E, 0xEDB2, 
    0xF01C, 0xF8FA, 0x0747, 0x111D, 0x13A6, 0x1355, 0x1132, 0x0E43, 0x05FA, 0xFF2F, 0x0318, 0x0A5A, 0x0E43, 0x9756, 
    0xB344, 0xC480, 0xBBEB, 0xA84A, 0x9DBD, 0xA52D, 0xB48C, 0xC386, 0xC9C7, 0xB06A, 0x97AA, 0x9C86, 0xA7EE, 0xB629, 
    0xC37F, 0xCC39, 0xC55F, 0xBBED, 0xC413, 0xCC39, 0x9B3A, 0x8E84, 0x7B43, 0x6644, 0x5453, 0x4660, 0x3A72, 0x30F7, 
    0x2A5B, 0x293B, 0x2C44, 0x2E06, 0x2C4B, 0x2966, 0x26AC, 0x2578, 0x2578, 0x2578, 0x2578, 0x2578, 0x2578, 0x0000, 
    
};

JointIndex sAnubiceFallDownAnimJointIndices[] = {
    { 0x0000, 0x0006, 0x001B },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0002, 0x0000 },
    { 0x0000, 0x0000, 0x0030 },
    { 0x0000, 0x0000, 0x0045 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x005A },
    { 0x0000, 0x0000, 0x006F },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0084 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x0099 },
    { 0x0003, 0x0002, 0x0003 },
    { 0x0000, 0x0000, 0x00AE },
    { 0x0004, 0x0004, 0x0005 },
    { 0x0000, 0x0000, 0x0004 },
};

AnimationHeader gAnubiceFallDownAnim = { 
    { 21 }, sAnubiceFallDownAnimFrameData,
    sAnubiceFallDownAnimJointIndices, 6
};

u8 object_anubice_possiblePadding_000358[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

s16 sAnubiceAttackingAnimFrameData[] = {
    0x0000, 0x125C, 0x4000, 0x2000, 0x8000, 0x13E9, 0xC000, 0xC035, 0xC070, 0xC0B1, 0xC0F5, 0xC13B, 0xC180, 0xC1C5, 
    0xC205, 0xC241, 0xC275, 0xC2A1, 0xC2C3, 0xC2D8, 0xC2E0, 0xC2D8, 0xC2C5, 0xC2AB, 0xC28C, 0xC268, 0xC23F, 0xC212, 
    0xC1E1, 0xC1AC, 0xC175, 0xC13B, 0xC0FE, 0xC0C0, 0xC081, 0xC041, 0xC000, 0xBFBF, 0xBF7F, 0xBF40, 0xBF02, 0xBEC5, 
    0xBE8B, 0xBE54, 0xBE1F, 0xBDEE, 0xBDC1, 0xBD98, 0xBD74, 0xBD55, 0xBD3B, 0xBD28, 0xBD20, 0xBD28, 0xBD3D, 0xBD5F, 
    0xBD8B, 0xBDBF, 0xBDFB, 0xBE3B, 0xBE80, 0xBEC5, 0xBF0B, 0xBF4F, 0xBF90, 0xBFCB, 0x0000, 0x001A, 0x0038, 0x0058, 
    0x007A, 0x009D, 0x00C0, 0x00E2, 0x0103, 0x0120, 0x013B, 0x0151, 0x0161, 0x016C, 0x0170, 0x016C, 0x0162, 0x0156, 
    0x0146, 0x0134, 0x0120, 0x0109, 0x00F0, 0x00D6, 0x00BA, 0x009D, 0x007F, 0x0060, 0x0040, 0x0020, 0x0000, 0xFFE0, 
    0xFFC0, 0xFFA0, 0xFF81, 0xFF63, 0xFF46, 0xFF2A, 0xFF10, 0xFEF7, 0xFEE0, 0xFECC, 0xFEBA, 0xFEAA, 0xFE9E, 0xFE94, 
    0xFE90, 0xFE94, 0xFE9F, 0xFEAF, 0xFEC5, 0xFEE0, 0xFEFD, 0xFF1E, 0xFF40, 0xFF63, 0xFF86, 0xFFA8, 0xFFC8, 0xFFE6, 
    0x0000, 0xFFE6, 0xFFC8, 0xFFA8, 0xFF86, 0xFF63, 0xFF40, 0xFF1E, 0xFEFD, 0xFEE0, 0xFEC5, 0xFEAF, 0xFE9F, 0xFE94, 
    0xFE90, 0xFE94, 0xFE9E, 0xFEAA, 0xFEBA, 0xFECC, 0xFEE0, 0xFEF7, 0xFF10, 0xFF2A, 0xFF46, 0xFF63, 0xFF81, 0xFFA0, 
    0xFFC0, 0xFFE0, 0x0000, 0x0020, 0x0040, 0x0060, 0x007F, 0x009D, 0x00BA, 0x00D6, 0x00F0, 0x0109, 0x0120, 0x0134, 
    0x0146, 0x0156, 0x0162, 0x016C, 0x0170, 0x016C, 0x0161, 0x0151, 0x013B, 0x0120, 0x0103, 0x00E2, 0x00C0, 0x009D, 
    0x007A, 0x0058, 0x0038, 0x001A, 0x0000, 0xFFCB, 0xFF90, 0xFF4F, 0xFF0B, 0xFEC5, 0xFE80, 0xFE3B, 0xFDFB, 0xFDBF, 
    0xFD8B, 0xFD5F, 0xFD3D, 0xFD28, 0xFD20, 0xFD28, 0xFD3B, 0xFD55, 0xFD74, 0xFD98, 0xFDC1, 0xFDEE, 0xFE1F, 0xFE54, 
    0xFE8B, 0xFEC5, 0xFF02, 0xFF40, 0xFF7F, 0xFFBF, 0x0000, 0x0041, 0x0081, 0x00C0, 0x00FE, 0x013B, 0x0175, 0x01AC, 
    0x01E1, 0x0212, 0x023F, 0x0268, 0x028C, 0x02AB, 0x02C5, 0x02D8, 0x02E0, 0x02D8, 0x02C3, 0x02A1, 0x0275, 0x0241, 
    0x0205, 0x01C5, 0x0180, 0x013B, 0x00F5, 0x00B1, 0x0070, 0x0035, 0x0000, 0xFFC0, 0xFF7C, 0xFF34, 0xFEEB, 0xFEA1, 
    0xFE5A, 0xFE15, 0xFDD6, 0xFD9C, 0xFD6B, 0xFD44, 0xFD28, 0xFD19, 0xFD18, 0xFD28, 0xFD44, 0xFD67, 0xFD91, 0xFDC2, 
    0xFDF8, 0xFE33, 0xFE73, 0xFEB6, 0xFEFD, 0xFF48, 0xFF94, 0xFFE3, 0x0033, 0x0083, 0x00D4, 0x0125, 0x0175, 0x01C3, 
    0x0210, 0x025A, 0x02A2, 0x02E5, 0x0325, 0x0360, 0x0396, 0x03C6, 0x03F1, 0x0414, 0x0430, 0x0444, 0x0448, 0x0436, 
    0x040F, 0x03D7, 0x0390, 0x033E, 0x02E3, 0x0281, 0x021B, 0x01B4, 0x014F, 0x00EE, 0x0094, 0x0044, 0xC000, 0xBE5A, 
    0xBC79, 0xBAB6, 0xB967, 0xB8E4, 0xB967, 0xBAB6, 0xBC79, 0xBE5A, 0xC000, 0xC1A6, 0xC387, 0xC54A, 0xC699, 0xC71C, 
    0xC699, 0xC54A, 0xC387, 0xC1A6, 0xC000, 0xBE5A, 0xBC79, 0xBAB6, 0xB967, 0xB8E4, 0xB967, 0xBAB6, 0xBC79, 0xBE5A, 
    0xC000, 0xC1A6, 0xC387, 0xC54A, 0xC699, 0xC71C, 0xC699, 0xC54A, 0xC387, 0xC1A6, 0xC000, 0xBE5A, 0xBC79, 0xBAB6, 
    0xB967, 0xB8E4, 0xB967, 0xBAB6, 0xBC79, 0xBE5A, 0xC000, 0xC1A6, 0xC387, 0xC54A, 0xC699, 0xC71C, 0xC6C4, 0xC5D8, 
    0xC486, 0xC2FE, 0x8000, 0x817B, 0x8502, 0x8937, 0x8CBE, 0x8E39, 0x8E39, 0x8E39, 0x8E39, 0x8E39, 0x857F, 0x74DF, 
    0x6AAB, 0x68B8, 0x6749, 0x6651, 0x65C2, 0x658F, 0x65AA, 0x6607, 0x6698, 0x6750, 0x6821, 0x68FF, 0x69DC, 0x6AAB, 
    0x6B9A, 0x6CD9, 0x6E59, 0x700C, 0x71E4, 0x73D2, 0x75C9, 0x77BA, 0x7996, 0x7B51, 0x7CDB, 0x7E26, 0x7F24, 0x7FC7, 
    0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 
    0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 
    0x8000, 0x8000, 0x86EC, 0x942B, 0x9C72, 0x9E3F, 0x9F9C, 0xA08F, 0xA11F, 0xA153, 0xA131, 0xA0C0, 0xA007, 0x9F0E, 
    0x9DDA, 0x9C72, 0x9A13, 0x9651, 0x91B1, 0x8CBA, 0x87F3, 0x83E2, 0x810F, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 
    0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 
    0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 
};

JointIndex sAnubiceAttackingAnimJointIndices[] = {
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0002, 0x0000 },
    { 0x0000, 0x0000, 0x0006 },
    { 0x0000, 0x0000, 0x0042 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x007E },
    { 0x0000, 0x0000, 0x00BA },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x00F6 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x0132 },
    { 0x0003, 0x0002, 0x0003 },
    { 0x0000, 0x0000, 0x016E },
    { 0x0004, 0x0004, 0x0005 },
    { 0x0000, 0x0000, 0x01AA },
};

AnimationHeader gAnubiceAttackingAnim = { 
    { 60 }, sAnubiceAttackingAnimFrameData,
    sAnubiceAttackingAnimJointIndices, 6
};

u8 object_anubice_possiblePadding_00079C[] = {
    0x00, 0x00, 0x00, 0x00, 
};

s16 sAnubiceStandUpAnimFrameData[] = {
    0x0000, 0x04B0, 0xEED0, 0x4000, 0x2000, 0x8000, 0x13E9, 0x04B0, 0x0488, 0x0460, 0x0438, 0x0410, 0x03E8, 0x0578, 
    0x0708, 0x0898, 0x0A28, 0x0BB8, 0x0DAC, 0x0FA0, 0x1194, 0x11F8, 0x125C, 0xEED0, 0xEF3E, 0xEFAC, 0xF01A, 0xF088, 
    0xF0F6, 0xF1C8, 0xF29A, 0xF36C, 0xF43E, 0xF510, 0xF7AB, 0xFA45, 0xFCE0, 0xFE70, 0x0000, 0x88F2, 0x85E8, 0x7EE0, 
    0x7702, 0x7171, 0x7154, 0x78AD, 0x8563, 0x9472, 0xA2D6, 0xAD8D, 0xB481, 0xB9B5, 0xBD48, 0xBF57, 0xC000, 0x0096, 
    0x0208, 0x0567, 0x0942, 0x0C28, 0x0CA8, 0x099E, 0x0400, 0xFD84, 0xF7DE, 0xF4C2, 0xF51E, 0xF7CE, 0xFB70, 0xFEA1, 
    0x0000, 0xF9C7, 0xFBBB, 0x0060, 0x05DF, 0x0A64, 0x0C18, 0x09DD, 0x04EA, 0xFEF0, 0xF9A1, 0xF6AD, 0xF6DF, 0xF916, 
    0xFC23, 0xFED6, 0x0000, 0x00DE, 0x0202, 0x04AB, 0x07B8, 0x0A04, 0x0A6C, 0x080D, 0x03AB, 0xFE98, 0xFA29, 0xF7B1, 
    0xF7E4, 0xF9DE, 0xFC93, 0xFEF8, 0x0000, 0x0E43, 0x0F74, 0x1221, 0x14F1, 0x168A, 0x1590, 0x109A, 0x088C, 0xFF8A, 
    0xF7B5, 0xF32F, 0xF323, 0xF625, 0xFA74, 0xFE52, 0x0000, 0xCC39, 0xC74A, 0xBB78, 0xAD3A, 0xA106, 0x9B55, 0xA0E7, 
    0xAE80, 0xBC99, 0xC3AB, 0xBBB6, 0xABBA, 0xA2AA, 0xAA00, 0xB842, 0xC000, 0x2578, 0x2450, 0x2211, 0x208A, 0x218F, 
    0x26F0, 0x3314, 0x44C5, 0x5868, 0x6A65, 0x7720, 0x7DC0, 0x80AA, 0x8127, 0x8081, 0x8000, 0x0000, 
};

JointIndex sAnubiceStandUpAnimJointIndices[] = {
    { 0x0000, 0x0007, 0x0017 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0003, 0x0000 },
    { 0x0000, 0x0000, 0x0027 },
    { 0x0000, 0x0000, 0x0037 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0047 },
    { 0x0000, 0x0000, 0x0057 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0067 },
    { 0x0000, 0x0000, 0x0003 },
    { 0x0000, 0x0000, 0x0077 },
    { 0x0004, 0x0003, 0x0004 },
    { 0x0000, 0x0000, 0x0087 },
    { 0x0005, 0x0005, 0x0006 },
    { 0x0000, 0x0000, 0x0005 },
};

AnimationHeader gAnubiceStandUpAnim = { 
    { 16 }, sAnubiceStandUpAnimFrameData,
    sAnubiceStandUpAnimJointIndices, 7
};

s16 sAnubiceAnim_000A48FrameData[] = {
    0x0000, 0x1210, 0x4000, 0x2000, 0x8000, 0x13E9, 0xB1C7, 0xB350, 0xB818, 0xBE3D, 0xC3DE, 0xC71C, 0xC748, 0xC5A2, 
    0xC330, 0xC0F8, 0xC000, 0x061D, 0x0510, 0x026A, 0xFF24, 0xFC38, 0xFA9F, 0xFACA, 0xFC13, 0xFDD0, 0xFF58, 0x0000, 
    0x0755, 0x06D0, 0x04BB, 0x01F3, 0xFF59, 0xFDCD, 0xFD8F, 0xFE0C, 0xFEE0, 0xFFA7, 0x0000, 0x088E, 0x07A5, 0x04F9, 
    0x018F, 0xFE6C, 0xFC94, 0xFC63, 0xFD2B, 0xFE62, 0xFF82, 0x0000, 0x09C7, 0x092F, 0x0674, 0x02C4, 0xFF4C, 0xFD3B, 
    0xFCE4, 0xFD80, 0xFE8E, 0xFF8E, 0x0000, 0x99B3, 0x9E82, 0xA8F9, 0xB5B7, 0xC15E, 0xC88E, 0xCA1E, 0xC84D, 0xC4DA, 
    0xC181, 0xC000, 0x5C25, 0x60B1, 0x6D1C, 0x7CC2, 0x8AFC, 0x9326, 0x9374, 0x8EFE, 0x8876, 0x8291, 0x8000, 0x0000, 
    
};

JointIndex sAnubiceAnim_000A48JointIndices[] = {
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0002, 0x0000 },
    { 0x0000, 0x0000, 0x0006 },
    { 0x0000, 0x0000, 0x0011 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x001C },
    { 0x0000, 0x0000, 0x0027 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0032 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x003D },
    { 0x0003, 0x0002, 0x0003 },
    { 0x0000, 0x0000, 0x0048 },
    { 0x0004, 0x0004, 0x0005 },
    { 0x0000, 0x0000, 0x0004 },
};

AnimationHeader gAnubiceAnim_000A48 = { 
    { 11 }, sAnubiceAnim_000A48FrameData,
    sAnubiceAnim_000A48JointIndices, 6
};

u8 object_anubice_possiblePadding_000A58[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

s16 sAnubiceAnim_000BACFrameData[] = {
    0x0000, 0x1210, 0x4000, 0x2000, 0x8000, 0x13E9, 0xC000, 0xC140, 0xC453, 0xC831, 0xCBD5, 0xCE39, 0xCF96, 0xD09D, 
    0xD0F4, 0xD045, 0xCE39, 0xC98F, 0xC281, 0xBAF0, 0xB4BC, 0xB1C7, 0x0000, 0xFF76, 0xFE24, 0xFC7B, 0xFAEA, 0xF9E3, 
    0xF94D, 0xF8DD, 0xF8B7, 0xF902, 0xF9E3, 0xFBEE, 0xFF09, 0x0258, 0x04FD, 0x061D, 0x0000, 0xFF52, 0xFDA6, 0xFB8A, 
    0xF98F, 0xF842, 0xF786, 0xF6FA, 0xF6CD, 0xF72C, 0xF842, 0xFAB4, 0xFE62, 0x025A, 0x05A7, 0x0755, 0x0000, 0xFF6D, 
    0xFE05, 0xFC3F, 0xFA94, 0xF97B, 0xF8D3, 0xF84A, 0xF815, 0xF869, 0xF97B, 0xFBF7, 0xFFB9, 0x03C0, 0x0708, 0x088E, 
    0x0000, 0xFEFF, 0xFC88, 0xF96E, 0xF682, 0xF497, 0xF386, 0xF2C1, 0xF285, 0xF30E, 0xF497, 0xF803, 0xFD29, 0x02B7, 
    0x075C, 0x09C7, 0xC000, 0xC000, 0xC000, 0xB570, 0xA1D2, 0x9742, 0x9B74, 0xA57B, 0xB17B, 0xBB9B, 0xC000, 0xBC09, 
    0xB249, 0xA6AF, 0x9D2D, 0x99B3, 0x8000, 0x8283, 0x88AC, 0x906E, 0x97BB, 0x9C85, 0x9F60, 0xA1AA, 0xA286, 0xA119, 
    0x9C85, 0x91DB, 0x81AD, 0x7064, 0x6269, 0x5C25, 
};

JointIndex sAnubiceAnim_000BACJointIndices[] = {
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0002, 0x0000 },
    { 0x0000, 0x0000, 0x0006 },
    { 0x0000, 0x0000, 0x0016 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0026 },
    { 0x0000, 0x0000, 0x0036 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0046 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x0056 },
    { 0x0003, 0x0002, 0x0003 },
    { 0x0000, 0x0000, 0x0066 },
    { 0x0004, 0x0004, 0x0005 },
    { 0x0000, 0x0000, 0x0004 },
};

AnimationHeader gAnubiceAnim_000BAC = { 
    { 16 }, sAnubiceAnim_000BACFrameData,
    sAnubiceAnim_000BACJointIndices, 6
};

u8 object_anubice_possiblePadding_000BBC[] = {
    0x00, 0x00, 0x00, 0x00, 
};

s16 sAnubiceIdleAnimFrameData[] = {
    0x0000, 0x125C, 0x4000, 0x2000, 0x8000, 0x13E9, 0xC000, 0xC035, 0xC070, 0xC0B1, 0xC0F5, 0xC13B, 0xC180, 0xC1C5, 
    0xC205, 0xC241, 0xC275, 0xC2A1, 0xC2C3, 0xC2D8, 0xC2E0, 0xC2D8, 0xC2C5, 0xC2AB, 0xC28C, 0xC268, 0xC23F, 0xC212, 
    0xC1E1, 0xC1AC, 0xC175, 0xC13B, 0xC0FE, 0xC0C0, 0xC081, 0xC041, 0xC000, 0xBFBF, 0xBF7F, 0xBF40, 0xBF02, 0xBEC5, 
    0xBE8B, 0xBE54, 0xBE1F, 0xBDEE, 0xBDC1, 0xBD98, 0xBD74, 0xBD55, 0xBD3B, 0xBD28, 0xBD20, 0xBD28, 0xBD3D, 0xBD5F, 
    0xBD8B, 0xBDBF, 0xBDFB, 0xBE3B, 0xBE80, 0xBEC5, 0xBF0B, 0xBF4F, 0xBF90, 0xBFCB, 0x0000, 0x001A, 0x0038, 0x0058, 
    0x007A, 0x009D, 0x00C0, 0x00E2, 0x0103, 0x0120, 0x013B, 0x0151, 0x0161, 0x016C, 0x0170, 0x016C, 0x0162, 0x0156, 
    0x0146, 0x0134, 0x0120, 0x0109, 0x00F0, 0x00D6, 0x00BA, 0x009D, 0x007F, 0x0060, 0x0040, 0x0020, 0x0000, 0xFFE0, 
    0xFFC0, 0xFFA0, 0xFF81, 0xFF63, 0xFF46, 0xFF2A, 0xFF10, 0xFEF7, 0xFEE0, 0xFECC, 0xFEBA, 0xFEAA, 0xFE9E, 0xFE94, 
    0xFE90, 0xFE94, 0xFE9F, 0xFEAF, 0xFEC5, 0xFEE0, 0xFEFD, 0xFF1E, 0xFF40, 0xFF63, 0xFF86, 0xFFA8, 0xFFC8, 0xFFE6, 
    0x0000, 0xFFE6, 0xFFC8, 0xFFA8, 0xFF86, 0xFF63, 0xFF40, 0xFF1E, 0xFEFD, 0xFEE0, 0xFEC5, 0xFEAF, 0xFE9F, 0xFE94, 
    0xFE90, 0xFE94, 0xFE9E, 0xFEAA, 0xFEBA, 0xFECC, 0xFEE0, 0xFEF7, 0xFF10, 0xFF2A, 0xFF46, 0xFF63, 0xFF81, 0xFFA0, 
    0xFFC0, 0xFFE0, 0x0000, 0x0020, 0x0040, 0x0060, 0x007F, 0x009D, 0x00BA, 0x00D6, 0x00F0, 0x0109, 0x0120, 0x0134, 
    0x0146, 0x0156, 0x0162, 0x016C, 0x0170, 0x016C, 0x0161, 0x0151, 0x013B, 0x0120, 0x0103, 0x00E2, 0x00C0, 0x009D, 
    0x007A, 0x0058, 0x0038, 0x001A, 0x0000, 0xFFCB, 0xFF90, 0xFF4F, 0xFF0B, 0xFEC5, 0xFE80, 0xFE3B, 0xFDFB, 0xFDBF, 
    0xFD8B, 0xFD5F, 0xFD3D, 0xFD28, 0xFD20, 0xFD28, 0xFD3B, 0xFD55, 0xFD74, 0xFD98, 0xFDC1, 0xFDEE, 0xFE1F, 0xFE54, 
    0xFE8B, 0xFEC5, 0xFF02, 0xFF40, 0xFF7F, 0xFFBF, 0x0000, 0x0041, 0x0081, 0x00C0, 0x00FE, 0x013B, 0x0175, 0x01AC, 
    0x01E1, 0x0212, 0x023F, 0x0268, 0x028C, 0x02AB, 0x02C5, 0x02D8, 0x02E0, 0x02D8, 0x02C3, 0x02A1, 0x0275, 0x0241, 
    0x0205, 0x01C5, 0x0180, 0x013B, 0x00F5, 0x00B1, 0x0070, 0x0035, 0x0000, 0xFFC0, 0xFF7C, 0xFF34, 0xFEEB, 0xFEA1, 
    0xFE5A, 0xFE15, 0xFDD6, 0xFD9C, 0xFD6B, 0xFD44, 0xFD28, 0xFD19, 0xFD18, 0xFD28, 0xFD44, 0xFD67, 0xFD91, 0xFDC2, 
    0xFDF8, 0xFE33, 0xFE73, 0xFEB6, 0xFEFD, 0xFF48, 0xFF94, 0xFFE3, 0x0033, 0x0083, 0x00D4, 0x0125, 0x0175, 0x01C3, 
    0x0210, 0x025A, 0x02A2, 0x02E5, 0x0325, 0x0360, 0x0396, 0x03C6, 0x03F1, 0x0414, 0x0430, 0x0444, 0x0448, 0x0436, 
    0x040F, 0x03D7, 0x0390, 0x033E, 0x02E3, 0x0281, 0x021B, 0x01B4, 0x014F, 0x00EE, 0x0094, 0x0044, 0xC000, 0xBE5A, 
    0xBC79, 0xBAB6, 0xB967, 0xB8E4, 0xB967, 0xBAB6, 0xBC79, 0xBE5A, 0xC000, 0xC1A6, 0xC387, 0xC54A, 0xC699, 0xC71C, 
    0xC699, 0xC54A, 0xC387, 0xC1A6, 0xC000, 0xBE5A, 0xBC79, 0xBAB6, 0xB967, 0xB8E4, 0xB967, 0xBAB6, 0xBC79, 0xBE5A, 
    0xC000, 0xC1A6, 0xC387, 0xC54A, 0xC699, 0xC71C, 0xC699, 0xC54A, 0xC387, 0xC1A6, 0xC000, 0xBE5A, 0xBC79, 0xBAB6, 
    0xB967, 0xB8E4, 0xB967, 0xBAB6, 0xBC79, 0xBE5A, 0xC000, 0xC1A6, 0xC387, 0xC54A, 0xC699, 0xC71C, 0xC6C4, 0xC5D8, 
    0xC486, 0xC2FE, 0x8000, 0x8087, 0x8122, 0x81C3, 0x825E, 0x82E6, 0x834D, 0x8386, 0x8386, 0x834D, 0x82E6, 0x825E, 
    0x81C3, 0x8122, 0x8087, 0x8000, 0x7F79, 0x7EDE, 0x7E3D, 0x7DA2, 0x7D1A, 0x7CB3, 0x7C7A, 0x7C7A, 0x7CB3, 0x7D1A, 
    0x7DA2, 0x7E3D, 0x7EDE, 0x7F79, 0x8000, 0x8087, 0x8122, 0x81C3, 0x825E, 0x82E6, 0x834D, 0x8386, 0x8386, 0x834D, 
    0x82E6, 0x825E, 0x81C3, 0x8122, 0x8087, 0x8000, 0x7F79, 0x7EDE, 0x7E3D, 0x7DA2, 0x7D1A, 0x7CB3, 0x7C7A, 0x7C7A, 
    0x7CB3, 0x7D1A, 0x7DA2, 0x7E3D, 0x7EDE, 0x7F79, 
};

JointIndex sAnubiceIdleAnimJointIndices[] = {
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0002, 0x0000 },
    { 0x0000, 0x0000, 0x0006 },
    { 0x0000, 0x0000, 0x0042 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x007E },
    { 0x0000, 0x0000, 0x00BA },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x00F6 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x0132 },
    { 0x0003, 0x0002, 0x0003 },
    { 0x0000, 0x0000, 0x016E },
    { 0x0004, 0x0004, 0x0005 },
    { 0x0000, 0x0000, 0x0004 },
};

AnimationHeader gAnubiceIdleAnim = { 
    { 60 }, sAnubiceIdleAnimFrameData,
    sAnubiceIdleAnimJointIndices, 6
};

u8 object_anubice_possiblePadding_000F84[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 object_anubiceTex_000F90[] = {
#include "assets/objects/object_anubice/object_anubiceTex_000F90.rgba16.inc.c"
};

u64 object_anubiceTex_001090[] = {
#include "assets/objects/object_anubice/object_anubiceTex_001090.rgba16.inc.c"
};

u64 object_anubiceTex_001110[] = {
#include "assets/objects/object_anubice/object_anubiceTex_001110.rgba16.inc.c"
};

u64 object_anubiceTex_001510[] = {
#include "assets/objects/object_anubice/object_anubiceTex_001510.rgba16.inc.c"
};

u64 object_anubiceTex_001590[] = {
#include "assets/objects/object_anubice/object_anubiceTex_001590.rgba16.inc.c"
};

u64 object_anubiceTex_001610[] = {
#include "assets/objects/object_anubice/object_anubiceTex_001610.rgba16.inc.c"
};

u64 object_anubiceTex_001690[] = {
#include "assets/objects/object_anubice/object_anubiceTex_001690.ia16.inc.c"
};

u64 object_anubiceTex_001A90[] = {
#include "assets/objects/object_anubice/object_anubiceTex_001A90.rgba16.inc.c"
};

Vtx object_anubiceVtx_001B10[] = {
#include "assets/objects/object_anubice/object_anubiceVtx_001B10.vtx.inc"
};

Gfx gAnubiceSkelLimbsLimb_0038B8DL_002CE0[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_anubiceTex_001090, G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 2, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(object_anubiceVtx_001B10, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&object_anubiceVtx_001B10[30], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_anubiceTex_000F90, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_anubiceVtx_001B10[42], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 5, 9, 3, 0),
    gsSP2Triangles(10, 11, 12, 0, 12, 13, 10, 0),
    gsSP2Triangles(14, 15, 16, 0, 16, 17, 14, 0),
    gsSP2Triangles(8, 18, 6, 0, 2, 19, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gAnubiceSkelLimbsLimb_0038D0DL_002E30[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_anubiceTex_000F90, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_anubiceVtx_001B10[62], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 10, 11, 8, 0),
    gsSP2Triangles(12, 13, 14, 0, 14, 15, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 18, 19, 16, 0),
    gsSPEndDisplayList(),
};

Gfx gAnubiceSkelLimbsLimb_0038DCDL_002EE0[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_anubiceTex_000F90, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_anubiceVtx_001B10[82], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 10, 11, 8, 0),
    gsSP2Triangles(12, 13, 14, 0, 14, 15, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 18, 19, 16, 0),
    gsSPEndDisplayList(),
};

Gfx gAnubiceSkelLimbsLimb_0038F4DL_002F90[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_anubiceTex_000F90, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_anubiceVtx_001B10[102], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 10, 11, 8, 0),
    gsSP2Triangles(12, 13, 14, 0, 14, 15, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 18, 19, 16, 0),
    gsSPEndDisplayList(),
};

Gfx gAnubiceSkelLimbsLimb_003900DL_003040[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_anubiceTex_000F90, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_anubiceVtx_001B10[122], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 1, 6, 0, 5, 6, 7, 0),
    gsSP2Triangles(1, 5, 8, 0, 9, 0, 3, 0),
    gsSP2Triangles(3, 10, 9, 0, 11, 12, 5, 0),
    gsSP2Triangles(5, 7, 11, 0, 5, 12, 13, 0),
    gsSP2Triangles(6, 1, 0, 0, 0, 9, 6, 0),
    gsSP2Triangles(14, 15, 12, 0, 12, 11, 14, 0),
    gsSP1Triangle(12, 15, 16, 0),
    gsSPEndDisplayList(),
};

Gfx gAnubiceSkelLimbsLimb_003918DL_003108[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_anubiceTex_001110, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_anubiceVtx_001B10[139], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSPEndDisplayList(),
};

Gfx gAnubiceSkelLimbsLimb_003948DL_0031A0[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_anubiceTex_001510, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_anubiceVtx_001B10[144], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_anubiceTex_001A90, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_anubiceVtx_001B10[154], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
};

Gfx gAnubiceSkelLimbsLimb_003930DL_003288[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_anubiceTex_001510, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_anubiceVtx_001B10[160], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(0, 30, 31, 0),
    gsSPVertex(&object_anubiceVtx_001B10[192], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(5, 22, 23, 0, 24, 25, 21, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_anubiceTex_001590, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_anubiceVtx_001B10[218], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP1Triangle(13, 15, 16, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_anubiceTex_001610, G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 2, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_anubiceVtx_001B10[235], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 6, 15, 7, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&object_anubiceVtx_001B10[266], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSPEndDisplayList(),
};

Gfx gAnubiceEyesDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_anubiceTex_001690, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, 0, 0, 0,
                       COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 150, 100, 0, 255),
    gsDPSetEnvColor(30, 20, 10, 255),
    gsSPVertex(&object_anubiceVtx_001B10[275], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 0, 0, 5, 6, 7, 0),
    gsSP2Triangles(7, 8, 5, 0, 8, 9, 5, 0),
    gsSPEndDisplayList(),
};

Gfx gAnubiceFireAttackDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0,
                       0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(object_anubiceVtx_003590, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx object_anubiceVtx_003590[] = {
#include "assets/objects/object_anubice/object_anubiceVtx_003590.vtx.inc"
};

Gfx gAnubiceUnusedParticleMaterialDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(object_anubiceTex_0036A0, G_IM_FMT_I, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                            G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0,
                       COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPEndDisplayList(),
};

Gfx gAnubiceUnusedParticleModelDL[] = {
    gsSPVertex(&object_anubiceVtx_003590[4], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

u64 object_anubiceTex_0036A0[] = {
#include "assets/objects/object_anubice/object_anubiceTex_0036A0.i4.inc.c"
};

StandardLimb gAnubiceSkelLimbsLimb_0038A0 = { 
    { 0, 4700, 0 }, 0x01, LIMB_DONE,
    NULL
};

StandardLimb gAnubiceSkelLimbsLimb_0038AC = { 
    { 0, 0, 0 }, 0x02, 0x0B,
    NULL
};

StandardLimb gAnubiceSkelLimbsLimb_0038B8 = { 
    { 0, 0, 0 }, 0x03, LIMB_DONE,
    gAnubiceSkelLimbsLimb_0038B8DL_002CE0
};

StandardLimb gAnubiceSkelLimbsLimb_0038C4 = { 
    { 1319, 0, 0 }, 0x04, 0x09,
    NULL
};

StandardLimb gAnubiceSkelLimbsLimb_0038D0 = { 
    { 0, 0, 0 }, LIMB_DONE, 0x05,
    gAnubiceSkelLimbsLimb_0038D0DL_002E30
};

StandardLimb gAnubiceSkelLimbsLimb_0038DC = { 
    { 721, 0, 0 }, 0x06, LIMB_DONE,
    gAnubiceSkelLimbsLimb_0038DCDL_002EE0
};

StandardLimb gAnubiceSkelLimbsLimb_0038E8 = { 
    { 793, 0, 0 }, 0x07, LIMB_DONE,
    NULL
};

StandardLimb gAnubiceSkelLimbsLimb_0038F4 = { 
    { 0, 0, 0 }, LIMB_DONE, 0x08,
    gAnubiceSkelLimbsLimb_0038F4DL_002F90
};

StandardLimb gAnubiceSkelLimbsLimb_003900 = { 
    { 742, 0, 0 }, LIMB_DONE, LIMB_DONE,
    gAnubiceSkelLimbsLimb_003900DL_003040
};

StandardLimb gAnubiceSkelLimbsLimb_00390C = { 
    { 1367, -800, 0 }, 0x0A, LIMB_DONE,
    NULL
};

StandardLimb gAnubiceSkelLimbsLimb_003918 = { 
    { 0, 0, 0 }, LIMB_DONE, LIMB_DONE,
    gAnubiceSkelLimbsLimb_003918DL_003108
};

StandardLimb gAnubiceSkelLimbsLimb_003924 = { 
    { 0, 12, -100 }, 0x0C, LIMB_DONE,
    NULL
};

StandardLimb gAnubiceSkelLimbsLimb_003930 = { 
    { 0, 0, 0 }, 0x0D, LIMB_DONE,
    gAnubiceSkelLimbsLimb_003930DL_003288
};

StandardLimb gAnubiceSkelLimbsLimb_00393C = { 
    { 647, 89, 0 }, 0x0E, LIMB_DONE,
    NULL
};

StandardLimb gAnubiceSkelLimbsLimb_003948 = { 
    { 0, 0, 0 }, LIMB_DONE, LIMB_DONE,
    gAnubiceSkelLimbsLimb_003948DL_0031A0
};

void* gAnubiceSkelLimbs[] = {
    &gAnubiceSkelLimbsLimb_0038A0,
    &gAnubiceSkelLimbsLimb_0038AC,
    &gAnubiceSkelLimbsLimb_0038B8,
    &gAnubiceSkelLimbsLimb_0038C4,
    &gAnubiceSkelLimbsLimb_0038D0,
    &gAnubiceSkelLimbsLimb_0038DC,
    &gAnubiceSkelLimbsLimb_0038E8,
    &gAnubiceSkelLimbsLimb_0038F4,
    &gAnubiceSkelLimbsLimb_003900,
    &gAnubiceSkelLimbsLimb_00390C,
    &gAnubiceSkelLimbsLimb_003918,
    &gAnubiceSkelLimbsLimb_003924,
    &gAnubiceSkelLimbsLimb_003930,
    &gAnubiceSkelLimbsLimb_00393C,
    &gAnubiceSkelLimbsLimb_003948,
};

SkeletonHeader gAnubiceSkel = { 
    gAnubiceSkelLimbs, ARRAY_COUNT(gAnubiceSkelLimbs)
};
