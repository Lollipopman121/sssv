#include <ultra64.h>
#include "common.h"


#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_716900/func_80305250_716900.s")
// delay slot + jump table
#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_716900/func_80305368_716A18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_716900/func_80305A70_717120.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_716900/func_80305DA4_717454.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_716900/func_803064BC_717B6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_716900/func_803065F0_717CA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_716900/func_803071BC_71886C.s")

s32 func_80309798_71AE48(Animal *arg0) {
    u8 i, j;
    Animal *tmp;

    tmp = arg0;
    if (tmp->unk4A == 0) {
        if ((tmp->unk16C->unk0 != 318) &&
            (tmp->unk16C->unk0 != 319) &&
            (tmp->unk16C->unk0 != 317)) {
            if ((tmp->unk366 != 5) && (tmp->unk366 != 2)) {
                if (D_803D5530->unk18C == 0) {
                    return 1;
                }
                for (i = 0; i < D_803D5530->unk18C; i++) {
                    for (j = 0; j < tmp->unk192; j++) {
                        if (D_803D5530->unk18D[i] == tmp->unk193[j]) {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

s32 func_80309868_71AF18(void) {
    if ((D_803D552C->unk272 & 1) != 0) {
        if ((D_803E4BE0.unk58 != 0) && (D_803E4BE0.unk54 < D_803A4638[D_803D5530->unk16C->unk0])) {
            return func_80309798_71AE48(D_803E4BE0.unk58);
        }
    }
    return 0;
}

s32 func_803098F0_71AFA0(void) {
    s32 xDist = ABS(D_803D5530->xPos - D_801DDD8C[gCurrentAnimalIndex].unk0->xPos);
    s32 zDist = ABS(D_803D5530->zPos - D_801DDD8C[gCurrentAnimalIndex].unk0->zPos);

    if ((D_803D552C->unk272 & 1)) {
        if ((s16) (zDist + xDist) < D_803A4638[D_803D5530->unk16C->unk0]) {
            return func_80309798_71AE48(D_801DDD8C[gCurrentAnimalIndex].unk0);
        }
    }
    return 0;
}

s32 func_803099BC_71B06C(void) {
    if (D_803D552C->unk28C == 8) {
        if (D_803D552C->unk272 & 1) {
            if (D_803D552C->unk2CC != 0) {
                if ((D_803D5524->unk9C != EVO_GLITCHY) &&
                    (D_803D5524->unk9C != EVO) &&
                    (D_803D5524->unk9C != EVO_MICROCHIP)) {
                    if ((D_803D552C->unk2CC->unk366 != 5) && (D_803D552C->unk2CC->unk366 != 2)) {
                        return 1;
                    }
                }
            }
        }
        return 0;
    }
    if (D_803D552C->unk272 & 1) {
        if ((D_803D552C->unk2CC != 0) &&
            (D_803D552C->unk2CC->unk16C->unk0 != 316) &&
            (D_803D552C->unk2D0 < D_803A4638[D_803D5530->unk16C->unk0])) {
            return func_80309798_71AE48(D_803D552C->unk2CC);
        }
    }
    return 0;
}

s32 func_80309ACC_71B17C(void) {
    if (D_803E4BE0.unk64 != 0) {
        if ((D_803E4BE0.unk60 != NULL) && ((D_803D552C->unk272 & 8) != 0) && (D_803E4BE0.unk5C < 0x280)) {
            return func_80309798_71AE48(D_803E4BE0.unk60);
        }
    }
    return 0;
}

s32 func_80309B40_71B1F0(void) {
    if ((D_803D552C->unk272 & 8) != 0) {
        if ((D_803D552C->unk280 != NULL) && (D_803D552C->unk284 < 640)) {
            return func_80309798_71AE48(D_803D552C->unk280);
        }
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_716900/func_80309BA0_71B250.s")
// JUSTREG
// s32 func_80309BA0_71B250(void) {
//     s32 phi_v1;
//     s32 phi_a3;
//     s32 phi_v0;
//
//     if ((D_803D552C->unk272 & 1) && (D_803E4BE0.unk58 != NULL)) {
//         phi_a3 = ABS(D_803D552C->unk280->xPos - D_803E4BE0.unk58->xPos);
//         phi_v1 = ABS(D_803D552C->unk280->zPos - D_803E4BE0.unk58->zPos);
//         // typo? function looks completely different without:
//         phi_a3 = ABS(D_803D552C->unk280->xPos - D_803E4BE0.unk58->xPos);
//         phi_v1 = ABS(D_803D552C->unk280->zPos - D_803E4BE0.unk58->zPos);
//
//         phi_v0 = (phi_v1 + phi_a3) - (D_803D552C->unk280->unk30 + D_803E4BE0.unk58->unk30);
//         phi_v0 = MAX(1, phi_v0);
//
//         if ((phi_v0 < 320) && (D_803E4BE0.unk54 < D_803A4638[D_803D5530->unk16C->unk0])) {
//             return func_80309798_71AE48(phi_v1); // huh?
//         }
//     }
//     return 0;
// }

#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_716900/func_80309C8C_71B33C.s")

// functionally similar to func_802F8918_709FC8
s32 func_80309DC4_71B474(void) {
    s16 i, j;

    if (D_803D5530->unk18C == 0) {
        return 1;
    }
    for (i = 0; i < D_803D5530->unk18C; i++) {
        for (j = 0; j < D_803D5530->unk192; j++) {
            if (D_803D5530->unk193[j] == D_803D5530->unk18D[i]) {
                return 1;
            }
        }
    }

    return 0;
}

void func_80309E4C_71B4FC(Animal *arg0) {

    D_803D552C->unk2B8 = 0;
    D_803D552C->unk2BC = 0;
    D_803D552C->unk2C0 = 0;
    D_803D552C->unk2B4.state = 0;
    D_803D552C->unk2C8 = D_803D552C->unk272;
    D_803D552C->unk2CC = arg0;

    if (arg0 == D_801DDD8C[gCurrentAnimalIndex].unk0) {
        D_803D552C->unk2B4.unk7 = 1;
    } else {
        D_803D552C->unk2B4.unk7 = 0;
    }
}

void func_80309EDC_71B58C(Animal *arg0) {
    D_803D552C->unk2CC = arg0;
    if (arg0 == D_801DDD8C[gCurrentAnimalIndex].unk0) {
        D_803D552C->unk2B4.unk7 = 1;
    } else {
        D_803D552C->unk2B4.unk7 = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_716900/func_80309F38_71B5E8.s")

void func_8030A8EC_71BF9C(void) {
    Animal *animal = D_801DDD8C[gCurrentAnimalIndex].unk0;
    func_80319C38_72B2E8(animal->xPos >> 6, animal->zPos >> 6, animal->yPos >> 6,
                         animal->unk193, &animal->unk192, animal->unk160);
}

void animal_jump(void) {
    if ((D_803D5524->unkA2 & 1) && (D_803D5524->unk9E == 2)) {
        if ((D_803D5530->unk162 == 1) || (D_803D5530->unk162 == 6)) {
            switch (D_803D5530->state) {
            case STATE_STANDING:
                func_802A6390_6B7A40();
                break;
            case STATE_WALKING:
                func_802A6390_6B7A40();
                break;
            case STATE_RUNNING:
                func_802A63C0_6B7A70();
                break;
            default:
                break;
            }
        }
    }
}

s32 func_8030AA08_71C0B8(Animal *arg0, Animal *arg1) {
    if (arg0 == arg1->unk2CC) {
        return 0;
    }
    if ((arg1->unk272 & 1) || (arg1->unk272 & 4)) {
        s16 tmp = func_802EA3E0_6FBA90(arg1->unk16C->unk0, arg0->unk16C->unk0);
        if ((tmp == 2) || (tmp == 1))
            return 0;
    }
    return 1;
}

s32 func_8030AA90_71C140(struct071 *arg0) {
    if (!arg0->unk4C.unk1D) {
        return 0;
    }
    if (!arg0->unk4C.unk1C) {
        return func_8030E8AC_71FF5C();
    }
    return func_8030AAE0_71C190();
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_716900/func_8030AAE0_71C190.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_716900/func_8030B494_71CB44.s")

s32 func_8030BC50_71D300(s16 arg0, s16 arg1, s16 arg2, s16 arg3, u8 *arg4) {
    s16 phi_v0;

    s32 sp20;
    s32 sp1C;

    phi_v0 = D_803E4C94->yPos;
    func_80311554_722C04((arg0 << 6) + arg2, (arg1 << 6) + arg3, &sp1C, &sp20);

    sp20 = sp20 >> 16;
    sp1C = sp1C >> 16;

    if (phi_v0 < sp20) {
        phi_v0 = sp20;
    }

    if ((phi_v0 + 10) > sp1C) {
        *arg4 = 2;
        return 0;
    }

    if ((phi_v0 + D_803E4C94->unk42) < sp1C) {
        *arg4 = 1;
        return 0;
    }
    return 1;
}

s32 func_8030BD50_71D400(s16 arg0, s16 arg1, s16 arg2, s16 arg3) {
    s16 temp_v1;
    s16 temp_a2;

    s16 temp_a0;
    s16 temp_a1;

    temp_a0 = (arg0 << 6) + arg2;
    temp_a1 = (arg1 << 6) + arg3;

    temp_v1 = D_803E4C94->yPos;
    temp_a2 = func_8031124C_7228FC(temp_a0, temp_a1) >> 0x10;

    if (temp_v1 < temp_a2) {
        temp_v1 = temp_a2;
    }

    if ((s16) (func_80310F58_722608(temp_a0, temp_a1) >> 0x10) < (temp_v1 + D_803E4C94->unk42)) {
        return 1;
    }
    return 0;
}


#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_716900/func_8030BE20_71D4D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_716900/func_8030DD34_71F3E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_716900/func_8030E208_71F8B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_716900/func_8030E69C_71FD4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_716900/func_8030E8AC_71FF5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_716900/func_8030EA98_720148.s")
// yuck
// s32 func_8030EA98_720148(void) {
//     s32 sp24;
//     s32 sp20;
//     s32 phi_v1;
//
//     if (D_803E4C78 == 1) {
//         func_80311554_722C04(D_803E4C56, D_803E4C58, &sp24, &sp20);
//         if ((D_803C0740_7D1DF0[D_803E4C6C][D_803E4C6E].unk4 & 4) != 0) {
//             // what is this variable?
//             phi_v1 = D_803E1D32[D_803C0740_7D1DF0[D_803E4C6C][D_803E4C6E].unk3];
//         } else {
//             phi_v1 = 0;
//         }
//         if ((((sp24 - sp20) - phi_v1) >> 16) < D_803E4C94->unk42) {
//             return 3;
//         } else {
//             return 0;
//         }
//     } else {
//         return 0;
//     }
// }

s32 func_8030EB88_720238(s16 arg0, s16 arg1) {
    s32 pad;
    s32 sp20;
    s32 sp1C;

    func_80311554_722C04(arg0, arg1, &sp20, &sp1C);
    if (((sp20 - sp1C) >> 16) < D_803E4C94->unk42) {
        return 3;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_716900/func_8030EBF0_7202A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_716900/func_80310030_7216E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_716900/func_803102BC_72196C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_716900/func_80310E10_7224C0.s")

s32 func_80310EE4_722594(s16 x, s16 z, u8 arg2) {
    switch (arg2) {
    case 0:
    case 1:
        return func_8031124C_7228FC(x, z);
    case 2:
        return func_80310F58_722608(x, z);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_716900/func_80310F58_722608.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_716900/func_8031124C_7228FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_716900/func_80311554_722C04.s")

void func_80311A2C_7230DC(s16 arg0, s16 arg1, s16 *arg2, s16 *arg3, u8 arg4) {
    switch (arg4) {
    case 1:
        func_80311BF8_7232A8(arg0, arg1, arg2, arg3);
        break;
    case 0:
        func_80311BF8_7232A8(arg0, arg1, arg2, arg3);
        break;
    case 2:
        func_80311AA8_723158(arg0, arg1, arg2, arg3);
        break;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_716900/func_80311AA8_723158.s")
// JUSTREG
// void func_80311AA8_723158(s16 arg0, s16 arg1, s16 *arg2, s16 *arg3) {
//     s16 temp_t7_2;
//     s16 temp_t9_2;
//
//     u8 temp_t0;
//     u8 temp_t1;
//     u8 temp_t2;
//     u8 temp_v1;
//
//     *arg3 = 0;
//     *arg2 = *arg3;
//
//     temp_t7_2 = arg0 >> 6;
//     temp_t9_2 = arg1 >> 6;
//
//     if ((temp_t7_2 >= 0) && (temp_t7_2 < 72)) {
//         if ((temp_t9_2 >= 0) && (temp_t9_2 < 128)) {
//             temp_v1 = D_803C0740_7D1DF0[arg0 >> 6][arg1 >> 6].unk1;
//             temp_t0 = D_803C0740_7D1DF0[arg0 >> 6][(arg1 >> 6)+1].unk1;
//             temp_t1 = D_803C0740_7D1DF0[(arg0 >> 6)+1][(arg1 >> 6)+1].unk1;
//             temp_t2 = D_803C0740_7D1DF0[(arg0 >> 6)+1][arg1 >> 6].unk1;
//
//             if ((D_803C0740_7D1DF0[arg0 >> 6][arg1 >> 6].unk4 & 2) != 0) {
//                 if ((s16)(arg0 & 0x3F) < (s16)(arg1 & 0x3F)) {
//                     *arg2 = (temp_t0 - temp_t1) * 2;
//                     *arg3 = (temp_v1 - temp_t0) * 2;
//                 } else {
//                     *arg2 = (temp_v1 - temp_t2) * 2;
//                     *arg3 = (temp_t2 - temp_t1) * 2;
//                 }
//             } else if (((s16)(arg0 & 0x3F) + (s16)(arg1 & 0x3F)) < 64) {
//                 *arg2 = (temp_v1 - temp_t2) * 2;
//                 *arg3 = (temp_v1 - temp_t0) * 2;
//             } else {
//                 *arg2 = (temp_t0 - temp_t1) * 2;
//                 *arg3 = (temp_t2 - temp_t1) * 2;
//             }
//         }
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_716900/func_80311BF8_7232A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_716900/func_80311D48_7233F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_716900/func_80312054_723704.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_716900/func_803123A4_723A54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_716900/func_803126F4_723DA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_716900/func_80312A44_7240F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_716900/func_80312D94_724444.s")

#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_716900/func_80313064_724714.s")

// some collision?
void func_80313334_7249E4(void) {
    if (D_803E4C94 == D_801DDD8C[gCurrentAnimalIndex].unk0) {
        if ((ABS(D_803E4C94->xVelocity.h) + ABS(D_803E4C94->zVelocity.h)) > 15) {
            func_801373CC(0, 25, 55, 5, 0);
        } else if ((ABS(D_803E4C94->xVelocity.h) + ABS(D_803E4C94->zVelocity.h)) > 5) {
            func_801373CC(0, 13, 25, 5, 0);
        }
    }
    D_803E4C94->xVelocity.h = 0;
    D_803E4C94->zVelocity.h = 0;
    D_803E4C94->unk54 |= 10;
}

#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_716900/func_80313448_724AF8.s")
// s32 func_80313448_724AF8(struct055 *arg0, s32 arg1, s32 arg2, s32 arg3) {
//     D_803E4C94 = arg0;
//
//     D_803E4C52 = *(s16*)&arg0->xPos; // er?
//     D_803E4C54 = *(s16*)&arg0->zPos;
//     D_803E4C5C = arg0->xPos + arg1;
//     D_803E4C60 = arg0->zPos + arg2;
//     D_803E4C64 = arg0->yPos + arg3;
//
//     D_803E4C56 = D_803E4C5C >> 16;
//     D_803E4C58 = D_803E4C60 >> 16;
//     D_803E4C68 = D_803E4C52 >> 6;
//     D_803E4C6A = D_803E4C54 >> 6;
//     D_803E4C6C = D_803E4C6A >> 6;
//     D_803E4C6E = (D_803E4C5C >> 16) >> 6;
//
//     D_803E4C70 = D_803E4C52 & 0x3F;
//     D_803E4C72 = D_803E4C54 & 0x3F;
//     D_803E4C74 = D_803E4C6A & 0x3F;
//     D_803E4C76 = D_803E4C58 & 0x3F;
//
//     D_803E4C7C = D_803D5530->xVelocity.w;
//     D_803E4C80 = D_803D5530->zVelocity.w;
//     D_803E4C78 = arg0->unk160;
//
//     if ((func_8030B494_71CB44() == 0) && (func_8030EA98_720148() == 0)) {
//         D_803E4C94->xPos = D_803E4C5C;
//         D_803E4C94->zPos = D_803E4C60;
//         D_803E4C94->yPos = D_803E4C64;
//         D_803E4C94->unk160 = D_803E4C78;
//         return 1;
//     } else {
//         return 0;
//     }
// }

#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_716900/func_803135FC_724CAC.s")
// JUSTREG
// void func_803135FC_724CAC(Animal *arg0) {
//     s32 temp_t1;
//     s32 temp_t2;
//     s32 temp_v0;
//     s32 phi_a2;
//     s32 phi_a3;
//
//     temp_v0 = arg0->xPos >> 6;
//     if (temp_v0 < 36) {
//         phi_a2 = D_803A5590_7B6C40[temp_v0 - 1];
//         phi_a3 = D_803A5590_7B6C40[temp_v0];
//     } else {
//         phi_a2 = D_803A5590_7B6C40[temp_v0];
//         phi_a3 = D_803A5590_7B6C40[temp_v0 + 1];
//     }
//     temp_t1 = arg0->yPos + arg0->unk42;
//     if ((phi_a2 < temp_t1) || (phi_a3 < temp_t1)) {
//         temp_t2 = phi_a2 + (((phi_a3 - phi_a2) * (arg0->xPos - (temp_v0 << 6))) >> 6);
//         if (temp_t2 < temp_t1) {
//             arg0->yPos = temp_t2 - arg0->unk42;
//             arg0->yVelocity.w = MIN(arg0->yVelocity.w, 0);
//         }
//     }
// }

void func_803136B0_724D60(Animal *arg0) {
    arg0->unk160 = func_803136FC_724DAC(arg0->xPos, arg0->zPos, (arg0->yPos + (arg0->unk42 >> 1)));
}

s32 func_803136FC_724DAC(s16 x, s16 z, s16 y) {
    if (D_803C0740_7D1DF0[x >> 6][z >> 6].unk3 == 0) {
        return 0;
    }
    if ((func_80310F58_722608(x, z) >> 16) < y) {
        return 2;
    } else {
        return 1;
    }
}