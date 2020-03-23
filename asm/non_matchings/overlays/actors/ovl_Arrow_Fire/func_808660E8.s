.late_rodata

glabel D_80867BA8
    .float 0.041666668

.text
glabel func_808660E8
/* 003D8 808660E8 27BDFFC8 */  addiu   $sp, $sp, 0xFFC8           ## $sp = FFFFFFC8
/* 003DC 808660EC AFBF001C */  sw      $ra, 0x001C($sp)           
/* 003E0 808660F0 AFB00018 */  sw      $s0, 0x0018($sp)           
/* 003E4 808660F4 AFA5003C */  sw      $a1, 0x003C($sp)           
/* 003E8 808660F8 8C820118 */  lw      $v0, 0x0118($a0)           ## 00000118
/* 003EC 808660FC 00808025 */  or      $s0, $a0, $zero            ## $s0 = 00000000
/* 003F0 80866100 10400004 */  beq     $v0, $zero, .L80866114     
/* 003F4 80866104 00000000 */  nop
/* 003F8 80866108 8C4E0130 */  lw      $t6, 0x0130($v0)           ## 00000130
/* 003FC 8086610C 55C00006 */  bnel    $t6, $zero, .L80866128     
/* 00400 80866110 8C580024 */  lw      $t8, 0x0024($v0)           ## 00000024
.L80866114:
/* 00404 80866114 0C00B55C */  jal     Actor_Kill
              
/* 00408 80866118 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 0040C 8086611C 10000043 */  beq     $zero, $zero, .L8086622C   
/* 00410 80866120 8FBF001C */  lw      $ra, 0x001C($sp)           
/* 00414 80866124 8C580024 */  lw      $t8, 0x0024($v0)           ## 00000024
.L80866128:
/* 00418 80866128 26050024 */  addiu   $a1, $s0, 0x0024           ## $a1 = 00000024
/* 0041C 8086612C 2604014C */  addiu   $a0, $s0, 0x014C           ## $a0 = 0000014C
/* 00420 80866130 ACB80000 */  sw      $t8, 0x0000($a1)           ## 00000024
/* 00424 80866134 8C4F0028 */  lw      $t7, 0x0028($v0)           ## 00000028
/* 00428 80866138 ACAF0004 */  sw      $t7, 0x0004($a1)           ## 00000028
/* 0042C 8086613C 8C58002C */  lw      $t8, 0x002C($v0)           ## 0000002C
/* 00430 80866140 ACB80008 */  sw      $t8, 0x0008($a1)           ## 0000002C
/* 00434 80866144 884800B4 */  lwl     $t0, 0x00B4($v0)           ## 000000B4
/* 00438 80866148 984800B7 */  lwr     $t0, 0x00B7($v0)           ## 000000B7
/* 0043C 8086614C AA0800B4 */  swl     $t0, 0x00B4($s0)           ## 000000B4
/* 00440 80866150 BA0800B7 */  swr     $t0, 0x00B7($s0)           ## 000000B7
/* 00444 80866154 944800B8 */  lhu     $t0, 0x00B8($v0)           ## 000000B8
/* 00448 80866158 A60800B8 */  sh      $t0, 0x00B8($s0)           ## 000000B8
/* 0044C 8086615C AFA50028 */  sw      $a1, 0x0028($sp)           
/* 00450 80866160 AFA40024 */  sw      $a0, 0x0024($sp)           
/* 00454 80866164 0C01DFE4 */  jal     Math_Vec3f_DistXYZ
              
/* 00458 80866168 AFA20034 */  sw      $v0, 0x0034($sp)           
/* 0045C 8086616C 3C013F80 */  lui     $at, 0x3F80                ## $at = 3F800000
/* 00460 80866170 44816000 */  mtc1    $at, $f12                  ## $f12 = 1.00
/* 00464 80866174 3C018086 */  lui     $at, %hi(D_80867BA8)       ## $at = 80860000
/* 00468 80866178 C4247BA8 */  lwc1    $f4, %lo(D_80867BA8)($at)  
/* 0046C 8086617C 8FA20034 */  lw      $v0, 0x0034($sp)           
/* 00470 80866180 8FA40024 */  lw      $a0, 0x0024($sp)           
/* 00474 80866184 46040082 */  mul.s   $f2, $f0, $f4              
/* 00478 80866188 8FA50028 */  lw      $a1, 0x0028($sp)           
/* 0047C 8086618C 3C063D4C */  lui     $a2, 0x3D4C                ## $a2 = 3D4C0000
/* 00480 80866190 34C6CCCD */  ori     $a2, $a2, 0xCCCD           ## $a2 = 3D4CCCCD
/* 00484 80866194 460C103C */  c.lt.s  $f2, $f12                  
/* 00488 80866198 E6020158 */  swc1    $f2, 0x0158($s0)           ## 00000158
/* 0048C 8086619C 45000002 */  bc1f    .L808661A8                 
/* 00490 808661A0 00000000 */  nop
/* 00494 808661A4 E60C0158 */  swc1    $f12, 0x0158($s0)          ## 00000158
.L808661A8:
/* 00498 808661A8 0C2197B3 */  jal     func_80865ECC              
/* 0049C 808661AC AFA20034 */  sw      $v0, 0x0034($sp)           
/* 004A0 808661B0 8FA20034 */  lw      $v0, 0x0034($sp)           
/* 004A4 808661B4 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 004A8 808661B8 90490249 */  lbu     $t1, 0x0249($v0)           ## 00000249
/* 004AC 808661BC 312A0001 */  andi    $t2, $t1, 0x0001           ## $t2 = 00000000
/* 004B0 808661C0 5140000D */  beql    $t2, $zero, .L808661F8     
/* 004B4 808661C4 904D0248 */  lbu     $t5, 0x0248($v0)           ## 00000248
/* 004B8 808661C8 0C00BE0A */  jal     Audio_PlayActorSound2
              
/* 004BC 808661CC 2405183A */  addiu   $a1, $zero, 0x183A         ## $a1 = 0000183A
/* 004C0 808661D0 3C058086 */  lui     $a1, %hi(func_80865F1C)    ## $a1 = 80860000
/* 004C4 808661D4 24A55F1C */  addiu   $a1, $a1, %lo(func_80865F1C) ## $a1 = 80865F1C
/* 004C8 808661D8 0C219744 */  jal     func_80865D10              
/* 004CC 808661DC 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 004D0 808661E0 240B0020 */  addiu   $t3, $zero, 0x0020         ## $t3 = 00000020
/* 004D4 808661E4 240C00FF */  addiu   $t4, $zero, 0x00FF         ## $t4 = 000000FF
/* 004D8 808661E8 A60B0166 */  sh      $t3, 0x0166($s0)           ## 00000166
/* 004DC 808661EC 1000000E */  beq     $zero, $zero, .L80866228   
/* 004E0 808661F0 A20C0168 */  sb      $t4, 0x0168($s0)           ## 00000168
/* 004E4 808661F4 904D0248 */  lbu     $t5, 0x0248($v0)           ## 00000248
.L808661F8:
/* 004E8 808661F8 29A10022 */  slti    $at, $t5, 0x0022           
/* 004EC 808661FC 5020000B */  beql    $at, $zero, .L8086622C     
/* 004F0 80866200 8FBF001C */  lw      $ra, 0x001C($sp)           
/* 004F4 80866204 92020168 */  lbu     $v0, 0x0168($s0)           ## 00000168
/* 004F8 80866208 28410023 */  slti    $at, $v0, 0x0023           
/* 004FC 8086620C 10200005 */  beq     $at, $zero, .L80866224     
/* 00500 80866210 244EFFE7 */  addiu   $t6, $v0, 0xFFE7           ## $t6 = FFFFFFE7
/* 00504 80866214 0C00B55C */  jal     Actor_Kill
              
/* 00508 80866218 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 0050C 8086621C 10000003 */  beq     $zero, $zero, .L8086622C   
/* 00510 80866220 8FBF001C */  lw      $ra, 0x001C($sp)           
.L80866224:
/* 00514 80866224 A20E0168 */  sb      $t6, 0x0168($s0)           ## 00000168
.L80866228:
/* 00518 80866228 8FBF001C */  lw      $ra, 0x001C($sp)           
.L8086622C:
/* 0051C 8086622C 8FB00018 */  lw      $s0, 0x0018($sp)           
/* 00520 80866230 27BD0038 */  addiu   $sp, $sp, 0x0038           ## $sp = 00000000
/* 00524 80866234 03E00008 */  jr      $ra                        
/* 00528 80866238 00000000 */  nop


