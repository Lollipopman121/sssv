#include <ultra64.h>
#include "common.h"


// ========================================================
// definitions
// ========================================================

s32 func_802983D0_6A9A80(void);

// ========================================================
// .data
// ========================================================

s16 D_803A04F0_7B1BA0 = 0;
s16 D_803A04F2_7B1BA2 = 0; // unused?
s16 D_803A04F8_7B1BA8 = 1; // unused?


// ========================================================
// .bss
// ========================================================

// FIXME: if these are defined in overlay2_6A6500 then it results in codegen changes
u64  D_803C0640;
u64  D_803C0648;
u64  D_803C0650;
u16  D_803C0658; // matrix normalise

// ========================================================
// .text
// ========================================================

#if 0
// CURRENT (2379)
void func_802963D0_6A7A80(DisplayList *arg0) {
    s16 i;
    s16 j;
    s16 k;

    u16 a;
    u16 b;
    s16 c;
    s16 d;
    s32 c2;

    D_803C0430.unk20A = 8;

    a = D_803F2D50.unk10;
    b = D_803F2D50.unk12;
    c = D_803F2D50.unk14;
    d = D_803F2D50.unk16;

    if ((c != 0) && (d != 0)) {
        for (i = 0; i < 2; i++) {
            c2 = c + 1;
            for (j = 0; j < (c + 1); j++) {

                for (k = 0; k < d; k++) {

                    arg0[i].unk28BC0[(k * c2) + j].v.ob[0] = (j + a) << 6;
                    arg0[i].unk28BC0[(k * c2) + j].v.ob[1] = (k + b) << 6;

                    arg0[i].unk28BC0[(k * c2) + j].v.tc[0] = j << 9;
                    arg0[i].unk28BC0[(k * c2) + j].v.tc[1] = k << 9;

                    arg0[i].unk28BC0[(k * c2) + j].v.cn[0] = 0;
                    arg0[i].unk28BC0[(k * c2) + j].v.cn[1] = 0;
                    arg0[i].unk28BC0[(k * c2) + j].v.cn[2] = 0x7F;
                    arg0[i].unk28BC0[(k * c2) + j].v.cn[3] = 0x80;
                }
            }
        }
    }
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_6A7A80/func_802963D0_6A7A80.s")
#endif

void func_80296544_6A7BF4(void) {
    f64 temp_f20;
    f64 temp_f22;
    f64 temp_f24;

    u8 i;

    D_803C0430.unk202 = 0;
    D_803C0430.unk204 = 0;

    if (D_803F2D50.unk22 == 0) {
        temp_f20 = SSSV_PI / 180;
        temp_f22 = 360.0 / 64;
        temp_f24 = 11.612;
        for (i = 0; i < 64; i++) {
            D_803C0430.unk0[0][i] = cosf(temp_f20 * (f32)(i * temp_f22)) * 2;
        }
        for (i = 0; i < 64; i++) {
            D_803C0430.unk0[1][i] = cosf(temp_f20 * (f32)(i * temp_f24)) * 4;
        }
        for (i = 0; i < 64; i++) {
            D_803C0430.unk0[2][i] = cosf(temp_f20 * (f32)(i * temp_f22)) * 2;
        }
        for (i = 0; i < 64; i++) {
            D_803C0430.unk0[3][i] = cosf(temp_f20 * (f32)(i * temp_f22)) * 3;
        }
        for (i = 0; i < 64; i++) {
            D_803C0430.unk0[4][i] = cosf(temp_f20 * (f32)(i * temp_f24)) * 1;
        }
        for (i = 0; i < 64; i++) {
            D_803C0430.unk0[5][i] = cosf(temp_f20 * (f32)(i * temp_f22)) * 2;
        }
        for (i = 0; i < 64; i++) {
            D_803C0430.unk0[6][i] = cosf(temp_f20 * (f32)(i * temp_f22)) * 2;
        }
        for (i = 0; i < 64; i++) {
            D_803C0430.unk0[7][i] = cosf(temp_f20 * (f32)(i * temp_f24)) * 3;
        }
    }
    if ((D_803F2D50.unk22 == 1) || (D_803F2D50.unk22 == 2)) {
        temp_f20 = SSSV_PI / 180;
        temp_f22 = 360.0 / 64;
        temp_f24 = 11.612;
        for (i = 0; i < 64; i++) {
            D_803C0430.unk0[0][i] = cosf(temp_f20 * (f32)(i * temp_f22)) * 8;
        }
        for (i = 0; i < 64; i++) {
            D_803C0430.unk0[1][i] = cosf(temp_f20 * (f32)(i * temp_f24)) * 4;
        }
        for (i = 0; i < 64; i++) {
            D_803C0430.unk0[2][i] = cosf(temp_f20 * (f32)(i * temp_f22)) * 8;
        }
        for (i = 0; i < 64; i++) {
            D_803C0430.unk0[3][i] = cosf(temp_f20 * (f32)(i * temp_f22)) * 3;
        }
        for (i = 0; i < 64; i++) {
            D_803C0430.unk0[4][i] = cosf(temp_f20 * (f32)(i * temp_f24)) * 7;
        }
        for (i = 0; i < 64; i++) {
            D_803C0430.unk0[5][i] = cosf(temp_f20 * (f32)(i * temp_f22)) * 2;
        }
        for (i = 0; i < 64; i++) {
            D_803C0430.unk0[6][i] = cosf(temp_f20 * (f32)(i * temp_f22)) * 8;
        }
        for (i = 0; i < 64; i++) {
            D_803C0430.unk0[7][i] = cosf(temp_f20 * (f32)(i * temp_f24)) * 4;
        }
    }
}

#ifdef NON_MATCHING
// CURRENT (2199)
void func_80296C8C_6A833C(struct063 arg0[73][129]) {
    s16 xPos;
    s16 nextWater;
    s16 curWater;
    s16 zPos;
    s32 pad[2];

    u32 sp96;
    u32 sp84;
    u32 sp80;
    u32 sp78;

    s16 temp_a0;
    s16 temp_s4;
    s32 pad3;
    s16 temp_v1;

    sp96 = D_803F2D50.unk14 + D_803F2D50.unk10;
    sp78 = D_803F2D50.unk16 + D_803F2D50.unk12;

    sp84 = D_803F2D50.unk10;
    sp80 = D_803F2D50.unk12;

    D_803C0430.unk20D = (D_803C0430.unk20D + 1) & 3;

    for (xPos = sp96; xPos > sp84; xPos--) {
        for (zPos = sp78; zPos > sp80; zPos--) {
            arg0[xPos][zPos].unk7 = 0; // clear terrain flags?

            if (arg0[xPos][zPos].unk6 != 0) {
                curWater = arg0[xPos][zPos].unk6;
                nextWater = arg0[xPos+1][zPos].unk6; //.unk40E; (408 + 6)
                if (SSSV_RAND(128) == 20) {
                    func_802D7AD4_6E9184(
                        (SSSV_RAND(64) + (xPos << 6)),
                        (SSSV_RAND(64) + (s16)(zPos << 6)),
                        D_803C0740[xPos][zPos].unk0 << 3,
                        0);
                }
                if (nextWater < curWater) {
                    temp_v1 = arg0[xPos+1][zPos].unk0; //unk408; (408 + 0)
                    if ((temp_v1 << 1) < curWater) {
                        if ((nextWater == 0) && (D_803C0430.unk20F == 0)) {
                            nextWater = (temp_v1 << 1);
                        }
                        if ((temp_v1 < (arg0[xPos][zPos].unk0 - 0x10)) && (nextWater < (arg0[xPos][zPos].unk0 << 1))) {
                            temp_v1 = 0;
                        } else {
                            temp_v1 = (curWater - nextWater) / 2;
                            if (temp_v1 > 1) {
                                temp_v1 += SSSV_RAND(2);
                            }
                        }
                        if (temp_v1 < 0) {
                            temp_v1 = 0;
                        }
                        curWater = curWater - temp_v1;
                        nextWater = nextWater + temp_v1;
                        arg0[xPos][zPos].unk7 = (s16)(arg0[xPos][zPos].unk7 & 0xF) + ((temp_v1 & 7) << 4);

                        if ((arg0[xPos][zPos].unk0 << 1) >= curWater) {
                            curWater = 0;
                        }
                        if ((arg0[xPos+1][zPos].unk6 == 0) && (nextWater != 0)) { // unk40E (408 + 6)
                            arg0[xPos+1][zPos].unk4 |= 2; // unk40C (408 + 4)
                        } else {
                            arg0[xPos+1][zPos].unk4 &= ~2; // unk40C (408 + 4)
                        }
                        if ((arg0[xPos][zPos].unk6 != 0) && (curWater == 0)) {
                            arg0[xPos][zPos].unk4 |= 4;
                        } else {
                            arg0[xPos][zPos].unk4 &= ~4;
                        }
                        arg0[xPos][zPos].unk6 = curWater;
                        arg0[xPos+1][zPos].unk6 = nextWater; // unk40E
                    }
                }

                curWater = arg0[xPos][zPos].unk6;
                nextWater = arg0[xPos][zPos+1].unk6; // unkE
                if (nextWater < curWater) {
                    temp_v1 = arg0[xPos][zPos+1].unk0; // unk8
                    if (((temp_v1 + 1) << 1) < curWater) {
                        if ((nextWater == 0) && (D_803C0430.unk20F == 0)) {
                            nextWater = (temp_v1 << 1);
                        }
                        if ((temp_v1 < arg0[xPos][zPos].unk0) && (nextWater < (arg0[xPos][zPos].unk0 << 1))) {
                            temp_v1 = (curWater - (arg0[xPos][zPos].unk0 << 1));
                        } else {
                            temp_v1 = (curWater - nextWater) / 2;
                            if (temp_v1 > 1) {
                                temp_v1 += SSSV_RAND(2);
                            }
                        }
                        if (temp_v1 <= 0) {
                            temp_v1 = 0;
                        }
                        curWater = curWater - temp_v1;
                        nextWater = nextWater + temp_v1;
                        arg0[xPos][zPos].unk7 = (arg0[xPos][zPos].unk7 & 0xF0) + (temp_v1 & 7);
                        if (curWater <= (arg0[xPos][zPos].unk0 << 1)) {
                            curWater = 0;
                        }
                        arg0[xPos][zPos+1].unk6 = nextWater; // unkE
                        arg0[xPos][zPos].unk6 = curWater;
                    }
                }

                if (((guRandom() % 31) == 4)) {

                    temp_s4 = ((guRandom() % 63) + (xPos << 6));
                    temp_a0 = ((guRandom() % 63) + (zPos << 6));

                    temp_v1 = 6; // permuter hacks

                    if (((1 - (((D_803C0740[temp_s4 >> temp_v1][temp_a0 >> 6].unk7 >> 4) & 8) >> 2)) * (((D_803C0740[temp_s4 >> 6][temp_a0 >> 6].unk7 & 0xF0) >> 4) & 7)) ||
                        ((1 -  ((D_803C0740[temp_s4 >> 6][temp_a0 >> 6].unk7       & 8) >> 2)) * (  D_803C0740[temp_s4 >> 6][temp_a0 >> 6].unk7               & 7))) {

                        create_particle_effect(
                            temp_s4,
                            temp_a0,
                            0,
                            13,
                            (s16)((1 - (((D_803C0740[temp_s4 >> 6][temp_a0 >> 6].unk7 >> 4) & 8) >> 2)) * (((D_803C0740[temp_s4 >> 6][temp_a0 >> 6].unk7 & 0xF0) >> 4) & 7)) << 0x10,
                            (s16)((1 -  ((D_803C0740[temp_s4 >> 6][temp_a0 >> 6].unk7       & 8) >> 2)) * (  D_803C0740[temp_s4 >> 6][temp_a0 >> 6].unk7               & 7)) << 0x10,
                            0,
                            SSSV_RAND(4) + 4,
                            0,
                            0,
                            0);
                    }
                }
            }
            if ((arg0[xPos][zPos].unk0 * 2) >= arg0[xPos][zPos].unk6) {
                arg0[xPos][zPos].unk6 = 0;
            }
        }
    }
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_6A7A80/func_80296C8C_6A833C.s")
#endif

#if 0
// CURRENT (4186), something needs to change...
void func_8029726C_6A891C(struct063 arg0[73][129]) {
    u32 sp58;
    u32 sp54;
    volatile u32 sp50;
    u32 sp4C;

    s16 xPos;
    s16 zPos;

    s16 temp_v1;

    s16 curWater;
    s16 prevWater;

    sp50 = D_803F2D50.unk14 + D_803F2D50.unk10;
    sp4C = D_803F2D50.unk16 + D_803F2D50.unk12;

    sp58 = D_803F2D50.unk10;
    sp54 = D_803F2D50.unk12;

    for (xPos = sp58; xPos < sp50; xPos++) {
        for (zPos = sp54; zPos <= sp4C; zPos++) {

            if (arg0[xPos][zPos].unk6 != 0) {
                curWater = arg0[xPos][zPos].unk6;
                prevWater = arg0[xPos - 1][zPos].unk6; // unk-402

                if (prevWater < curWater) {
                    if ((arg0[xPos - 1][zPos].unk0 << 1) < curWater) {
                        if ((prevWater == 0) && (D_803C0430.unk20F == 0)) {
                            prevWater = (arg0[xPos - 1][zPos].unk0 << 1);
                        }

                        if ((arg0[xPos - 1][zPos].unk0 < (arg0[xPos][zPos].unk0 - 16)) && (prevWater < (arg0[xPos][zPos].unk0 << 1))) {
                            temp_v1 = (curWater - (arg0[xPos][zPos].unk0 << 1)) / 2;
                            if (temp_v1 < 1) {
                                temp_v1 = 0;
                            }
                        } else {
                            temp_v1 = ((curWater - prevWater) + (xPos & 1)) / 2;
                            if (temp_v1 > 1) {
                                temp_v1 += SSSV_RAND(2);
                            }
                        }

                        prevWater += temp_v1;
                        curWater -= temp_v1;
                        // 1xxx____
                        arg0[xPos][zPos].unk7 = ((arg0[xPos][zPos].unk7 & 0xF) + ((temp_v1 & 7) << 4)) | 0x80;
                        if (curWater <= (arg0[xPos][zPos].unk0 << 1)) {
                            curWater = 0;
                        }
                        arg0[xPos][zPos].unk6 = curWater;
                        arg0[xPos - 1][zPos].unk6 = prevWater;
                    }
                }

                curWater = arg0[xPos][zPos].unk6;
                prevWater = arg0[xPos][zPos - 1].unk6; // unk-2
                if (prevWater < curWater) {
                    if ((arg0[xPos][zPos - 1].unk0 << 1) < curWater) {
                        if ((prevWater == 0) && (D_803C0430.unk20F == 0)) {
                            prevWater = (arg0[xPos][zPos - 1].unk0 << 1);
                        }

                        if (((arg0[xPos][zPos - 1].unk0 + 4) < arg0[xPos][zPos].unk0) && (prevWater <= (arg0[xPos][zPos].unk0 << 1))) {
                            temp_v1 = (curWater - (arg0[xPos][zPos].unk0 << 1)) / 2;
                            if (temp_v1 < 2) {
                                temp_v1 = 2;
                            }
                            curWater -= temp_v1;
                            temp_v1 = 0;
                        } else {
                            temp_v1 = ((curWater + (zPos & 1)) - prevWater) / 2;
                            if (temp_v1 > 1) {
                                temp_v1 += SSSV_RAND(2);
                            }
                        }
                        if (temp_v1 < 0) {
                            temp_v1 = 0;
                        }

                        curWater -= temp_v1;
                        prevWater += temp_v1;
                        // ____1xxx
                        arg0[xPos][zPos].unk7 = ((s16)(arg0[xPos][zPos].unk7 & 0xF0) + (temp_v1 & 7)) | 8;
                        if (curWater <= (arg0[xPos][zPos].unk0 << 1)) {
                            curWater = 0;
                        }

                        arg0[xPos][zPos].unk6 = curWater;
                        arg0[xPos][zPos - 1].unk6 = prevWater;
                    }
                }
            }
        }
    }
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_6A7A80/func_8029726C_6A891C.s")
#endif

#if 0
extern Gfx D_010045A0_3DE70[];

// CURRENT (42671)
void func_80297628_6A8CD8(struct063 arg0[73][129], DisplayList *arg1) {
    u16 sp190;
    u16 sp17A;
    u16 sp178;
    u16 sp176;
    u16 sp174;
    s32 sp164;
    s32 sp160;
    s16 sp142;
    s16 sp140;
    s16 sp13C;
    s16 sp136;
    s16 sp134;
    s16 sp132;
    s16 sp12C;
    s16 sp126;
    s32 spB8;
    s32 spB4;
    s32 spB0;
    s32 spA8;
    u32 spA4;
    s32 spA0;
    s32 sp98;
    s32 sp88;
    s32 sp70;
    s32 sp6C;

    Gfx *temp_a3_11;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f2;
    s16 temp_a1_3;
    s16 temp_a1_4;
    s16 temp_a1_5;
    s16 temp_a1_6;
    s16 temp_a1_7;
    s16 temp_a1_8;
    s16 temp_a1_9;
    s16 temp_t7;
    s16 temp_t9;
    s16 var_a2;
    s16 var_t1;
    s16 var_t5;
    s16 var_v0_2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a1_10;
    s32 temp_a1_2;
    s32 temp_at;
    s32 temp_f4;
    s32 temp_f6;
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_s7;
    s32 temp_t1;
    s32 temp_t2;
    s32 temp_t6_6;
    s32 temp_t6_7;
    s32 temp_t7_2;
    s32 temp_t7_5;
    s32 temp_t7_6;
    s32 temp_t7_7;
    s32 temp_t8;
    s32 temp_t8_8;
    s32 temp_t9_2;
    s32 temp_t9_3;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    // s32 temp_v1_4;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s2;
    s32 var_s5;
    s32 var_s7;
    u16 var_t0;
    s32 var_t4;
    s32 var_v1;
    s8 temp_a2_2;
    s16 var_a0;
    u16 temp_a2;
    u16 temp_v1_3;

    s32 *var_ra;

    if (D_803F2D50.unk14 != 0) {

        sp126 = 0;
        sp134 = 10000;
        sp132 = -10000;

        gSPDisplayList(D_801D9E94++, D_01004270_3DB40);
        gSPDisplayList(D_801D9E94++, D_010045A0_3DE70);

        func_802985AC_6A9C5C(&D_801D9E94);

        gSPTexture(D_801D9E94++, 0x8000, 0x8000, 0, G_TX_RENDERTILE, G_ON); // 0x10000
        gDPSetTextureLOD(D_801D9E94++, G_TL_TILE);
        gDPSetRenderMode(D_801D9E94++, G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2);
        gDPSetCombineLERP(D_801D9E94++, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, 0, 0, 0, PRIMITIVE, PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, 0, 0, 0, PRIMITIVE);

        temp_a2 = D_803F2D50.unk14; // D_803F2D50.unk14
        // var_a0 = D_803F2D50.unk16; //&D_803F2D66; // D_803F2D50.unk16

        var_a0 = D_803F2D50.unk16; //(u16 *) D_803F2D66;
        if (temp_a2 != 0) {
            if (var_a0 != 0) {
                if (*D_803F28D0 & 0x20) {
                    var_v1 = 0;

                    D_803A04F0_7B1BA0 += 2;
                    if (D_803A04F0_7B1BA0 >= 128) {
                        D_803A04F0_7B1BA0 = 0;
                    }

                    sp142 = temp_a2;
                    temp_t7_2 = (s16) sp142 + 1;
                    sp140 = (u16) var_a0;
                    spA8 = temp_t7_2;
                    sp13C = (s16) temp_t7_2;
                    sp164 = (s32) D_803F2D50.unk10; //D_803F2D60;
                    sp160 = (s32) D_803F2D50.unk12; //D_803F2D62;
                    // var_v0 = &arg1->pad267A4[0x1F3C];
                    // var_v0 = &arg1->unk286E0; //[]

                    for (var_v1 = 0; var_v1 < 961; var_v1++) {
                        arg1->unk286E0[var_v1].v.ob[2] = 0; // reset y?
                    }

                    D_803C0430.unk20E += 1;

                    for (sp190 = 0; sp190 <= sp140; sp190++) {
                        for (var_t0 = 0; var_t0 <= sp142; var_t0++) {

                            // spB0 = (s32) sp190;
                            // spA0 = (s32) sp190;
                            // do {
                            // temp_v1 = (var_t0 * 0x408) + (sp164 * 0x408) + (sp190 * 8) + (sp160 * 8) + D_803C0740;
                            // D_803C0740[var_t0 + sp164][sp190 + sp160]
                            temp_t9 = (D_803C0740[var_t0 + sp164][sp190 + sp160].unk6 * 4) & 0xFFFF;
                            if (sp134 >= temp_t9) {
                                sp134 = temp_t9;
                            }
                            if (temp_t9 >= sp132) {
                                sp132 = temp_t9;
                            }
                            // sp98 = temp_v1;
                            if (temp_t9 != 0) {
                                temp_t1 = var_t0 + sp164;
                                temp_a0 = sp190 + sp160;
                                // temp_v1 = D_803C0740[temp_t1 - 1] ; // D_803C0740[temp_t1] - 0x408;
                                // temp_a1 = (temp_a0 * 8) - 8;
                                // temp_s7 = var_t0 * 0x10;
                                // temp_t7_4 = (temp_v1 + temp_a1)->unk6 * 4;
                                sp17A = D_803C0740[temp_t1 - 1][temp_a0 - 1].unk6 * 4;
                                temp_f24 = 64.0f / 64.0f;
                                // sp178 = temp_v1[temp_a0].unkE * 4;
                                sp178 = D_803C0740[temp_t1 - 1][temp_a0 + 1].unk6 * 4;
                                // temp_v0 = D_803C0740[temp_t1];
                                // sp176 = temp_v0[temp_a0].unk416 * 4;
                                sp176 = D_803C0740[temp_t1 + 1][temp_a0 + 1].unk6 * 4;
                                // sp174 = (temp_v0 + temp_a1)->unk40E * 4;
                                sp174 = D_803C0740[temp_t1 + 1][temp_a0 - 1].unk6 * 4;

                                // temp_t6 = arg1 + (sp190 * sp13C * 0x10) + (var_t0 * 0x10);
                                temp_t2 = sp164 + (var_t0 * sp160) + sp190;
                                // temp_s5 = &D_803C0430 + ((temp_t2 & 7) << 6);

                                // [8][64]
                                // temp_s5 = D_803C0430.unk0[(temp_t2 & 7)][];

                                temp_t7_5 = (temp_t2 + sp164 + (var_t0 * sp164) + var_t0) * 8;
                                // temp_t6->unk286E4 = (s16) (*(temp_s5 + ((D_803C0430.unk204 + temp_t7_5) & 0x3F)) + temp_t9);
                                // arg1->unk286E0[(sp190 * sp13C) + var_t0].v.ob[2] = (s16) (*(temp_s5 + ((D_803C0430.unk204 + temp_t7_5) & 0x3F)) + temp_t9);
                                arg1->unk286E0[(sp190 * sp13C) + var_t0].v.ob[2] = D_803C0430.unk0[(temp_t2 & 7)][((D_803C0430.unk204 + temp_t7_5) & 0x3F)] + temp_t9;
                                temp_v1_3 = D_803C0430.unk204;
                                // sp6C = sp164;
                                temp_a0_2 = temp_t1 + sp160 + sp190;
                                temp_a1_2 = temp_v1_3 + temp_t7_5;
                                // temp_a2_2 = *(temp_s5 + (temp_a1_2 & 0x3F));
                                temp_a2_2 = D_803C0430.unk0[(temp_t2 & 7)][(temp_a1_2 & 0x3F)];
                                sp70 = sp160;
                                // sp17A = temp_t7_4;
                                // temp_f20 = (f32) ((*(&D_803C0430 + ((temp_a0_2 & 7) << 6) + ((temp_v1_3 + ((temp_a0_2 + sp164 + var_t0 + sp164 + var_t0) * 8) + 8) & 0x3F)) + temp_t9 + temp_a2_2) - (((&temp_v0[sp190])[sp160].unk40E * 4) & 0xFFFF)) / 64.0f;
                                temp_f20 = ((D_803C0430.unk0[(temp_a0_2 & 7)][((temp_v1_3 + ((temp_a0_2 + sp164 + var_t0 + sp164 + var_t0) * 8) + 8) & 0x3F)] + temp_t9 + temp_a2_2) - ((D_803C0740[var_t0 + sp164][sp190 + sp160 + 0].unk6 * 4) & 0xFFFF)) / 64.0f;
                                // temp_f22 = (f32) ((*(&D_803C0430 + (((temp_t2 + 1) & 7) << 6) + ((temp_a1_2 + 8) & 0x3F)) + temp_t9 + temp_a2_2) - ((D_803C0740[var_t0 + sp164][sp190 + sp160 + 1].unk6 * 4) & 0xFFFF)) / 64.0f;
                                temp_f22 = (((D_803C0430.unk0[((temp_t2 + 1) & 7)][((temp_a1_2 + 8) & 0x3F)]) + temp_t9 + temp_a2_2) - ((D_803C0740[var_t0 + sp164][sp190 + sp160 + 1].unk6 * 4) & 0xFFFF)) / 64.0f;


                                temp_f2 = 128.0f / sqrtf((temp_f20 * temp_f20) + (temp_f22 * temp_f22) + (temp_f24 * temp_f24));
                                temp_f4 = (s32) (temp_f22 * temp_f2);
                                temp_f6 = (s32) (temp_f24 * temp_f2);
                                // temp_t6->unk286EC = (s8) (s32) (temp_f20 * temp_f2);
                                arg1->unk286E0[(sp190 * sp13C) + var_t0].v.cn[0] = (s8) (s32) (temp_f20 * temp_f2);
                                // temp_t6->unk286ED = (s8) temp_f4;
                                arg1->unk286E0[(sp190 * sp13C) + var_t0].v.cn[1] = (s8) temp_f4;
                                // temp_t6->unk286EE = (s8) temp_f6;
                                arg1->unk286E0[(sp190 * sp13C) + var_t0].v.cn[2] = (s8) temp_f6;

                                if (sp17A == 0) {
                                    // (arg1 + ((sp190 - 1) * sp13C * 0x10) + temp_s7)->unk286D4 = (s16) (temp_t9 - *(temp_s5 + ((D_803C0430.unk204 + temp_t7_5) & 0x3F)));
                                    // arg1->unk286E0[(((sp190 - 1) * sp13C) + var_t0)- 1].v.ob[2] = (s16) (temp_t9 - *(temp_s5 + ((D_803C0430.unk204 + temp_t7_5) & 0x3F)));
                                    arg1->unk286E0[(((sp190 - 1) * sp13C) + var_t0)- 1].v.ob[2] = (s16) (temp_t9 - D_803C0430.unk0[(temp_t2 & 7)][((D_803C0430.unk204 + temp_t7_5) & 0x3F)]);
                                }
                                // var_a0 = (u16 *) sp13C;
                                if (sp178 == 0) {
                                    // (arg1 + ((sp190 + 1) * (s32) var_a0 * 0x10) + temp_s7)->unk286D4 = (s16) (temp_t9 - *(temp_s5 + ((D_803C0430.unk204 + temp_t7_5) & 0x3F)));
                                    // unk286D4
                                    arg1->unk286E0[(((sp190 + 1) * sp13C) + var_t0)- 1].v.ob[2] = (s16) (temp_t9 - D_803C0430.unk0[(temp_t2 & 7)][((D_803C0430.unk204 + temp_t7_5) & 0x3F)]);
                                }
                                if (sp176 == 0) {
                                    // (arg1 + ((sp190 + 1) * (s32) var_a0 * 0x10) + temp_s7)->unk286F4 = (s16) (temp_t9 - *(temp_s5 + ((D_803C0430.unk204 + temp_t7_5) & 0x3F)));
                                    // unk286F4
                                    arg1->unk286E0[(((sp190 + 1) * sp13C) + var_t0) + 1].v.ob[2] = (s16) (temp_t9 - D_803C0430.unk0[(temp_t2 & 7)][((D_803C0430.unk204 + temp_t7_5) & 0x3F)]);
                                }
                                if (sp174 == 0) {
                                    // (arg1 + ((sp190 - 1) * (s32) var_a0 * 0x10) + temp_s7)->unk286F4 = (s16) (temp_t9 - *(temp_s5 + ((D_803C0430.unk204 + temp_t7_5) & 0x3F)));
                                    // unk286F4
                                    arg1->unk286E0[(((sp190 - 1) * sp13C) + var_t0) + 1].v.ob[2] = (s16) (temp_t9 - D_803C0430.unk0[(temp_t2 & 7)][((D_803C0430.unk204 + temp_t7_5) & 0x3F)]);
                                }
                            }
                                // var_t0 = (var_t0 + 1) & 0xFFFF;
                                // var_t0 = var_t0;
                            // } while ((s16) sp142 >= var_t0);
                        }
                    }

                    var_s5 = 0;
                    sp12C = 0;
                    if ((s16) sp142 > 0) {
                        sp98 = (s16) sp140 - 1;
                        spA4 = (s32)&arg1->unk2C2F0 & 0x1FFFFFFF; // (s32) &arg1->pad28BD0[0x3720] & 0x1FFFFFFF;
                        sp136 = 0;
                        do {
                            var_s2 = 1;
                            var_t4 = 0;
                            if ((s16) sp142 < (var_s5 + 0x10)) {
                                var_t1 = ((s16) sp142 - var_s5) + 1;
                            } else {
                                var_t1 = 0x10;
                            }
                            // var_a0 = (u16 *) arg1;

                            // temp_t8_2 = var_a0 + (sp136 * 0x10);
                            // temp_t8_2->unk2C2F0 = (s16) (D_803F2D50.unk10 << 6);
                            // temp_t8_2->unk2C2F2 = (s16) (D_803F2D50.unk12 << 6);
                            // temp_t8_2->unk2C2F4 = sp134;
                            arg1->unk2C2F0[sp136].v.ob[0] = (D_803F2D50.unk10 << 6);
                            arg1->unk2C2F0[sp136].v.ob[1] = (D_803F2D50.unk12 << 6);
                            arg1->unk2C2F0[sp136].v.ob[2] = sp134;
                            sp136++;

                            // temp_a1_3 = sp136 + 1;
                            // temp_t8_3 = var_a0 + (temp_a1_3 * 0x10);
                            // temp_t8_3->unk2C2F0 = (s16) (D_803F2D50.unk10 << 6);
                            // temp_t8_3->unk2C2F4 = sp134;
                            // temp_t8_3->unk2C2F2 = (s16) ((D_803F2D50.unk12 + D_803F2D50.unk16) << 6);
                            arg1->unk2C2F0[sp136].v.ob[0] = (D_803F2D50.unk10 << 6);
                            arg1->unk2C2F0[sp136].v.ob[1] = sp134;
                            arg1->unk2C2F0[sp136].v.ob[2] = ((D_803F2D50.unk12 + D_803F2D50.unk16) << 6);
                            sp136++;

                            // temp_a1_4 = temp_a1_3 + 1;
                            // temp_t6_2 = var_a0 + (temp_a1_4 * 0x10);
                            // temp_t6_2->unk2C2F0 = (s16) ((D_803F2D50.unk10 + D_803F2D50.unk14) << 6);
                            // temp_t6_2->unk2C2F2 = (s16) ((D_803F2D50.unk12 + D_803F2D50.unk16) << 6);
                            // temp_t6_2->unk2C2F4 = sp134;
                            arg1->unk2C2F0[sp136].v.ob[0] = ((D_803F2D50.unk10 + D_803F2D50.unk14) << 6);
                            arg1->unk2C2F0[sp136].v.ob[1] = ((D_803F2D50.unk12 + D_803F2D50.unk16) << 6);
                            arg1->unk2C2F0[sp136].v.ob[2] = sp134;
                            sp136++;

                            // temp_a1_5 = temp_a1_4 + 1;
                            // temp_t6_3 = var_a0 + (temp_a1_5 * 0x10);
                            // temp_t6_3->unk2C2F0 = (s16) ((D_803F2D50.unk10 + D_803F2D50.unk14) << 6);
                            // temp_t6_3->unk2C2F2 = (s16) (D_803F2D50.unk12 << 6);
                            // temp_t6_3->unk2C2F4 = sp134;

                            arg1->unk2C2F0[sp136].v.ob[0] = ((D_803F2D50.unk10 + D_803F2D50.unk14) << 6);
                            arg1->unk2C2F0[sp136].v.ob[1] = (D_803F2D50.unk12 << 6);
                            arg1->unk2C2F0[sp136].v.ob[2] = sp134;
                            sp136++;

                            // temp_a1_6 = temp_a1_5 + 1;
                            // temp_t8_4 = var_a0 + (temp_a1_6 * 0x10);
                            // temp_t8_4->unk2C2F0 = (s16) (D_803F2D50.unk10 << 6);
                            // temp_t8_4->unk2C2F2 = (s16) (D_803F2D50.unk12 << 6);
                            // temp_t8_4->unk2C2F4 = sp132;

                            arg1->unk2C2F0[sp136].v.ob[0] = (D_803F2D50.unk10 << 6);
                            arg1->unk2C2F0[sp136].v.ob[1] = (D_803F2D50.unk12 << 6);
                            arg1->unk2C2F0[sp136].v.ob[2] = sp132;
                            sp136++;

                            // temp_a1_7 = temp_a1_6 + 1;
                            // temp_t8_5 = var_a0 + (temp_a1_7 * 0x10);
                            // temp_t8_5->unk2C2F0 = (s16) (D_803F2D50.unk10 << 6);
                            // temp_t8_5->unk2C2F2 = (s16) ((D_803F2D50.unk12 + D_803F2D50.unk16) << 6);
                            // temp_t8_5->unk2C2F4 = sp132;

                            arg1->unk2C2F0[sp136].v.ob[0] = (D_803F2D50.unk10 << 6);
                            arg1->unk2C2F0[sp136].v.ob[1] = ((D_803F2D50.unk12 + D_803F2D50.unk16) << 6);
                            arg1->unk2C2F0[sp136].v.ob[2] = sp132;
                            sp136++;

                            // temp_a1_8 = temp_a1_7 + 1;
                            // temp_t6_4 = var_a0 + (temp_a1_8 * 0x10);
                            // temp_t6_4->unk2C2F0 = (s16) ((D_803F2D50.unk10 + D_803F2D50.unk14) << 6);
                            // temp_t6_4->unk2C2F2 = (s16) ((D_803F2D50.unk12 + D_803F2D50.unk16) << 6);
                            // temp_t6_4->unk2C2F4 = sp132;

                            arg1->unk2C2F0[sp136].v.ob[0] = ((D_803F2D50.unk10 + D_803F2D50.unk14) << 6);
                            arg1->unk2C2F0[sp136].v.ob[1] = ((D_803F2D50.unk12 + D_803F2D50.unk16) << 6);
                            arg1->unk2C2F0[sp136].v.ob[2] = sp132;
                            sp136++;

                            // temp_a1_9 = temp_a1_8 + 1;
                            // temp_t6_5 = var_a0 + (temp_a1_9 * 0x10);
                            // temp_t6_5->unk2C2F0 = (s16) ((D_803F2D50.unk10 + D_803F2D50.unk14) << 6);
                            // temp_t6_5->unk2C2F2 = (s16) (D_803F2D50.unk12 << 6);
                            // temp_t6_5->unk2C2F4 = sp132;
                            arg1->unk2C2F0[sp136].v.ob[0] = ((D_803F2D50.unk10 + D_803F2D50.unk14) << 6);
                            arg1->unk2C2F0[sp136].v.ob[1] = (D_803F2D50.unk12 << 6);
                            arg1->unk2C2F0[sp136].v.ob[2] = sp132;
                            sp136++;


                            var_s7 = 1;
                            temp_s4 = var_t1 - 1;
                            // sp136 = temp_a1_9;
                            // sp136 += 1;

                            // temp_a3_7 = D_801D9E94;
                            // D_801D9E94 = temp_a3_7 + 8;
                            // temp_a3_7->words.w0 = 0x0400207F;
                            // temp_a3_7->words.w1 = spA4;
                            gSPVertex(D_801D9E94++, spA4, 8, 0);
                            // temp_a3_8 = D_801D9E94;
                            // D_801D9E94 = temp_a3_8 + 8;
                            // temp_a3_8->words.w1 = 0xE;
                            // temp_a3_8->words.w0 = 0xBE000000;
                            gSPCullDisplayList(D_801D9E94++, 0, 7);

                            #if 0
                            temp_a3_9 = D_801D9E94;
                            D_801D9E94 = temp_a3_9 + 8;
                            temp_a3_9->words.w0 = (((var_t1 << 0xA) | ((var_t1 * 0x10) - 1)) & 0xFFFF) | 0x04000000;
                            temp_a3_9->words.w1 = (s32) (arg1 + (var_s5 * 0x10) + 0x286E0) & 0x1FFFFFFF;
                            #endif

                            gSPVertex(D_801D9E94++,
                                (s32)&arg1->unk286E0[var_s5] & 0x1FFFFFFF,
                                var_t1,
                                0
                              );

                            var_t5 = sp13C;
                            spA0 = (s32) var_t1;
                            if ((s32) sp98 > 0) {
                                temp_t7_6 = var_t5 * 0x10;
                                var_ra = arg1 + temp_t7_6;
                                spB8 = var_t5 * 0x10;
                                sp88 = var_ra + (var_s5 * 0x10);
                                spB4 = temp_t7_6;
                                do {
                                    // temp_a3_10 = D_801D9E94;
                                    // D_801D9E94 = temp_a3_10 + 8;
                                    var_a0 = -100;
                                    var_a2 = var_t1;
                                    var_v0_2 = 0;
                                    var_s0_2 = 0;
                                    // temp_a3_10->words.w0 = 0xE7000000;
                                    // temp_a3_10->words.w1 = 0;
                                    gDPPipeSync(D_801D9E94++);

                                    if (var_t1 > var_v0_2) {
                                        do {
                                            // temp_v1_4 = var_v0_2 * 0x10;
                                            if ((arg1->unk286E0[var_t4*spA8 + var_v0_2].v.ob[2] != 0) ||  // ((arg1 + (var_t4 * spA8 * 0x10) + temp_v1_4)->unk286E4 != 0) ||
                                                (arg1->unk286E0[var_t5 + var_v0_2].v.ob[2] != 0)) {  //((var_ra + temp_v1_4)->unk286E4 != 0)) {
                                                if (var_a0 == -100) {
                                                    var_a0 = var_v0_2;
                                                }
                                                var_a2 = var_v0_2;
                                            }
                                            var_v0_2 += 1;
                                        } while (var_v0_2 < var_t1);
                                    }

                                    if ((s32) var_a0 < 0) {
                                        var_a0 = 0;
                                    }
                                    temp_v0_2 = var_a2 - var_a0;
                                    temp_a3_11 = D_801D9E94;
                                    sp12C += 1;
                                    temp_a1_10 = temp_v0_2 + 1;
                                    sp126 = sp126 + temp_v0_2 + 1;
                                    #if 0
                                    D_801D9E94 = temp_a3_11 + 8;
                                    temp_a3_11->words.w0 = ((((s32) ((spA0 * var_s2) + var_a0) * 2) & 0xFF) << 0x10) | 0x04000000 | (((temp_a1_10 << 0xA) | ((temp_a1_10 * 0x10) - 1)) & 0xFFFF);
                                    temp_a3_11->words.w1 = (s32) (sp88 + ((s32) var_a0 * 0x10) + 0x286E0) & 0x1FFFFFFF;
                                    #endif

                                    gSPVertex(D_801D9E94++,
                                        (s32)&arg1->unk286E0[var_s5] & 0x1FFFFFFF,
                                        temp_a1_10,
                                        (spA0 * var_s2) + var_a0
                                      );


                                    for (var_t0 = 0;var_t0 < temp_s4; var_t0++) {
                                        temp_v0_3 = var_s5 + var_t0;
                                        // temp_v1_5 = (temp_v0_3 * 0x408) + (sp164 * 0x408) + (var_t4 * 8) + (sp160 * 8) + D_803C0740;
                                        // D_803C0740[temp_v0_3 + sp164][var_t4 + sp160]
                                        var_a0 = arg1 + (temp_v0_3 * 0x10);
                                        // temp_t8_6 = var_a0 + (var_t4 * spA8 * 0x10);
                                        // temp_t8_6 ---> arg1->unk286E0[temp_v0_3 + (var_t4 * spA8)].v.ob[2];
                                        // temp_t8_7 = var_a0 + (var_t5 * 0x10);
                                        // temp_t8_7 ---> arg1->unk286E0[temp_v0_3 + var_t5].v.ob[2];

                                        if (((D_803C0740[temp_v0_3 + sp164 + 0][var_t4 + sp160 + 0].unk0 * 8) < arg1->unk286E0[temp_v0_3 + (var_t4 * (s16)spA8) + 0].v.ob[2]) ||
                                            ((D_803C0740[temp_v0_3 + sp164 + 1][var_t4 + sp160 + 0].unk0 * 8) < arg1->unk286E0[temp_v0_3 + (var_t4 * (s16)spA8) + 1].v.ob[2]) ||
                                            ((D_803C0740[temp_v0_3 + sp164 + 1][var_t4 + sp160 + 1].unk0 * 8) < arg1->unk286E0[temp_v0_3 + var_t5 + 1].v.ob[2]) ||
                                            ((D_803C0740[temp_v0_3 + sp164 + 0][var_t4 + sp160 + 1].unk0 * 8) < arg1->unk286E0[temp_v0_3 + var_t5 + 0].v.ob[2])) {

                                            temp_v0_4 = var_t0 * 2;
                                            if (var_s2 != 0) {
                                                temp_t8_8 = (var_t0 + var_t1) * 2;
                                                temp_v0_5 = var_t0 * 2;
                                                temp_t9_2 = (temp_t8_8 & 0xFF) << 0x10;
                                                temp_t6_6 = (temp_v0_5 + 2) & 0xFF;
                                                var_a0 = temp_t8_8;
                                                #if 0
                                                temp_a3_12 = D_801D9E94;
                                                D_801D9E94 = temp_a3_12 + 8;
                                                temp_a3_12->words.w0 = temp_t9_2 | (temp_t6_6 << 8) | ((s32) (var_a0 + 2) & 0xFF) | 0xB1000000;
                                                temp_a3_12->words.w1 = temp_t9_2 | ((temp_t9_2 & 0xFF) << 8) | temp_t6_6;
                                                #endif
                                                gSP1Quadrangle(
                                                /* pkt  */  D_801D9E94++,
                                                /* v2   */  (var_a0 + 2),
                                                /* v3   */  (var_t0 + var_t1) * 2,
                                                /* v0   */  temp_t9_2,
                                                /* v1   */  temp_t6_6,
                                                /* flag */  0);
                                            } else {
                                                temp_t7_7 = (var_t1 + var_t0) * 2;
                                                temp_t9_3 = (temp_t7_7 + 2) & 0xFF;
                                                temp_t6_7 = (temp_v0_4 & 0xFF) << 0x10;
                                                var_a0 = temp_t7_7;
                                                #if 0
                                                temp_a3_13 = D_801D9E94;
                                                D_801D9E94 = temp_a3_13 + 8;
                                                temp_a3_13->words.w0 = temp_t6_7 | (temp_t9_3 << 8) | ((temp_v0_4 + 2) & 0xFF) | 0xB1000000;
                                                temp_a3_13->words.w1 = temp_t6_7 | (((s32) var_a0 & 0xFF) << 8) | temp_t9_3;
                                                #endif
                                                // TBD
                                                gSP1Quadrangle(D_801D9E94++,
                                                    (temp_t7_7 + 2),
                                                    (var_t1 + var_t0) * 2,
                                                    temp_t7_7,
                                                    temp_v0_4,
                                                    0);
                                            }
                                        }
                                    }

                                    var_s2 = 1 - var_s2;
                                    var_ra += spB8;
                                    var_t5 += sp13C;
                                    var_t4 = var_s7;
                                    sp88 += spB4;
                                    var_s7 += 1;

                                } while (var_t4 != sp98);
                            }
                            var_s5 = (var_s5 + var_t1) - 1;
                        } while (var_s5 < (s16) sp142);
                    }
                    // temp_a3_14 = D_801D9E94;
                    // D_801D9E94 = temp_a3_14 + 8;
                    // temp_a3_14->words.w1 = 0x2000;
                    // temp_a3_14->words.w0 = 0xB7000000;
                    gSPSetGeometryMode(D_801D9E94++, G_CULL_BACK);
                    // temp_a3_15 = D_801D9E94;
                    // D_801D9E94 = temp_a3_15 + 8;
                    // temp_a3_15->words.w1 = 0;
                    // temp_a3_15->words.w0 = 0xBB000000;
                    gSPTexture(D_801D9E94++, 0, 0, 0, G_TX_RENDERTILE, G_OFF);
                }
            }
        }
        func_802983D0_6A9A80();
    }
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_6A7A80/func_80297628_6A8CD8.s")
#endif

s32 func_802983D0_6A9A80(void) {
    s32 new_var;
    s32 water_level = GET_WATER_LEVEL(D_803C0740, ((u16)D_803F28E0[D_803F2A98].unk74), ((u16)D_803F28E0[D_803F2A98].unk78));
    // needed!
    new_var = water_level;
    return 0;
}

// draw_water
void func_802985AC_6A9C5C(Gfx **dl) {
    gDPSetTextureImage((*dl)++, G_IM_FMT_I, G_IM_SIZ_16b, 1, &D_800DCC20[D_803C0430.unk202]);
    gDPSetTile((*dl)++, G_IM_FMT_I, G_IM_SIZ_16b, 0, 0x0000, G_TX_LOADTILE, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);
    gDPLoadSync((*dl)++);
    gDPLoadBlock((*dl)++, G_TX_LOADTILE, 0, 0, 511, 1024);
    gDPPipeSync((*dl)++);
    gDPSetTile((*dl)++, G_IM_FMT_I, G_IM_SIZ_4b, 2, 0x0000, G_TX_RENDERTILE, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);
    gDPSetTileSize((*dl)++, G_TX_RENDERTILE, 0, 0, 4*(31), 4*(63));
    gDPSetTile((*dl)++, G_IM_FMT_I, G_IM_SIZ_4b, 2, 0x0000, G_TX_RENDERTILE, 0, G_TX_NOMIRROR | G_TX_WRAP, 5, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, 5, G_TX_NOLOD);
    gDPSetTile((*dl)++, G_IM_FMT_I, G_IM_SIZ_4b, 2, 0x0040, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 5, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, 5, G_TX_NOLOD);

    gDPSetEnvColor((*dl)++, D_803E1BBD, D_803E1BBE, D_803E1BBF, D_803F2D50.unk5B);

    gDPSetPrimColor((*dl)++, 128, D_803C0430.unk200, D_803E1BBA, D_803E1BBB, D_803E1BBC, D_803F2D50.unk57);
}

void func_8029877C_6A9E2C(void) {
    // maximum 64
    D_803C0430.unk204 += 1;
    D_803C0430.unk204 &= 0x3F;

    // maximum 255
    D_803C0430.unk200 += 64;
    if (D_803C0430.unk200 >= 256) {
        D_803C0430.unk200 &= 0xFF;
        D_803C0430.unk202 += 1;
        D_803C0430.unk202 &= 0xF;
    }

    D_803C0430.unk208 = 0;

    D_803C0430.unk206 += D_803C0430.unk20A;

    if (D_803C0430.unk206 == 240) {
        D_803C0430.unk20A = -8;
    }
    if (D_803C0430.unk206 == 0) {
        D_803C0430.unk20A = 8;
    }
    // maximum 31
    D_803C0430.unk20C += 1;
    D_803C0430.unk20C &= 0x1F;
}

// ESA: func_8002082C
s16 func_80298818_6A9EC8(s16 arg0, s16 arg1) {
    s16 phi_v1;
    s16 phi_t3;
    s16 phi_t4;
    s16 phi_a2;

    s16 a0;
    s16 a1;

    phi_v1 = (D_803C0740[(arg0 >> 6) + 0][(arg1 >> 6) + 0].unk6 << 2) + D_803C0430.unk0[(((arg0 >> 6) * (arg1 >> 6)) + 0) & 7][(u16)((D_803C0430.unk204 + ((((arg0 >> 6) * (arg1 >> 6)) + ((arg0 >> 6) * (arg0 >> 6))) * 8)) +  0) & 0x3F];
    phi_t3 = (D_803C0740[(arg0 >> 6) + 0][(arg1 >> 6) + 1].unk6 << 2) + D_803C0430.unk0[(((arg0 >> 6) * (arg1 >> 6)) + 1) & 7][(u16)((D_803C0430.unk204 + ((((arg0 >> 6) * (arg1 >> 6)) + ((arg0 >> 6) * (arg0 >> 6))) * 8)) +  8) & 0x3F];

    phi_t4 = (D_803C0740[(arg0 >> 6) + 1][(arg1 >> 6) + 1].unk6 << 2) + D_803C0430.unk0[(((arg0 >> 6) + (arg1 >> 6)) + 1) & 7][(u16)((D_803C0430.unk204 + ((((arg0 >> 6) + (arg1 >> 6)) + ((arg0 >> 6) + (arg0 >> 6))) * 8)) + 16) & 0x3F];
    phi_a2 = (D_803C0740[(arg0 >> 6) + 1][(arg1 >> 6) + 0].unk6 << 2) + D_803C0430.unk0[(((arg0 >> 6) + (arg1 >> 6)) + 0) & 7][(u16)((D_803C0430.unk204 + ((((arg0 >> 6) + (arg1 >> 6)) + ((arg0 >> 6) + (arg0 >> 6))) * 8)) +  8) & 0x3F];

    if (phi_v1 < 16) {
        phi_v1 = MAX(phi_a2, MAX(phi_t3, phi_t4));
    }
    if (phi_t3 < 16) {
        phi_t3 = MAX(phi_v1, MAX(phi_t4, phi_a2));
    }
    if (phi_t4 < 16) {
        phi_t4 = MAX(phi_v1, MAX(phi_t3, phi_a2));
    }
    if (phi_a2 < 16) {
        phi_a2 = MAX(phi_v1, MAX(phi_t3, phi_t4));
    }

    a0 = arg0 & 0x3F;
    a1 = arg1 & 0x3F;

    if (a0 < a1) {
        return (phi_v1 + ((((phi_t4 - phi_t3) * a0) + ((phi_t3 - phi_v1) * a1)) >> 6));
    } else {
        return (phi_v1 + ((((phi_a2 - phi_v1) * a0) + ((phi_t4 - phi_a2) * a1)) >> 6));
    }
}

s16 func_80298B70_6AA220(s16 arg0, s16 arg1) {
    s16 temp_t3;
    s16 temp_v0;

    s16 temp_a2;
    s16 temp_a3;
    s16 temp_t0;
    s16 temp_v1;

    temp_v1 = D_803C0740[(arg0 >> 6) + 0][(arg1 >> 6) + 0].unk6 << 2;
    temp_a2 = D_803C0740[(arg0 >> 6) + 0][(arg1 >> 6) + 1].unk6 << 2;
    temp_a3 = D_803C0740[(arg0 >> 6) + 1][(arg1 >> 6) + 1].unk6 << 2;
    temp_t0 = D_803C0740[(arg0 >> 6) + 1][(arg1 >> 6) + 0].unk6 << 2;

    if ((temp_v1 + temp_a2 + temp_a3 + temp_t0) == 0) {
        return 0;
    }

    temp_v0 = arg0 & 0x3F;
    temp_t3 = arg1 & 0x3F;
    if (temp_v0 < temp_t3) {
        return (D_803C0430.unk0[(arg0 * arg1) & 7][(u16)(D_803C0430.unk204 + (((arg0 * arg1) + (arg0 * arg0)) * 8)) & 0x3F] >> 1) + temp_v1 + ((((temp_a3 - temp_a2) * temp_v0) + ((temp_a2 - temp_v1) * temp_t3)) >> 6);
    } else {
        return (D_803C0430.unk0[(arg0 * arg1) & 7][(u16)(D_803C0430.unk204 + (((arg0 * arg1) + (arg0 * arg0)) * 8)) & 0x3F] >> 1) + temp_v1 + ((((temp_t0 - temp_v1) * temp_v0) + ((temp_a3 - temp_t0) * temp_t3)) >> 6);
    }
}

void func_80298D44_6AA3F4(Animal *arg0) {
    s16 x;
    s16 z;
    s32 tmp;
    s32 tmp2;

    x = (((D_803C0740[arg0->position.xPos.h >> 6][arg0->position.zPos.h >> 6].unk7 & 0xF0) >> 4) & 7) * (1 - (((D_803C0740[arg0->position.xPos.h >> 6][arg0->position.zPos.h >> 6].unk7 >> 4) & 8) >> 2));
    z = (u16)(((D_803C0740[arg0->position.xPos.h >> 6][arg0->position.zPos.h >> 6].unk7       )     ) & 7) * (1 - (((D_803C0740[arg0->position.xPos.h >> 6][arg0->position.zPos.h >> 6].unk7     ) & 8) >> 2));

    if (x != 0) {
        tmp = (arg0->xVelocity.w - (x << 17));
        arg0->xVelocity.w -= tmp >> 1;
    }
    if (z != 0) {
        tmp2 = (arg0->zVelocity.w - (z << 17));
        tmp = tmp2; // regalloc fix
        arg0->zVelocity.w -= tmp >> 1;
    }
}

// ESA: func_80020B38
s32 func_80298E08_6AA4B8(s16 arg0, s16 arg1) {
    // equivalent to dividing by 64
    arg0 >>= 6;
    arg1 >>= 6;

    if ((arg0 < D_803F2D50.unk10) ||
        (arg1 < D_803F2D50.unk12) ||
        ((D_803F2D50.unk10 + D_803F2D50.unk14) < arg0) ||
        ((D_803F2D50.unk12 + D_803F2D50.unk16) < arg1)) {
        return 0;
    }

    return 1;
}

// ESA: func_80020BB4
s16 func_80298E98_6AA548(s16 arg0, s16 arg1) {
    s16 tmp;
    s16 res;

    res = D_803C0740[arg0 >> 6][arg1 >> 6].unk6 << 2;

    if (func_80298E08_6AA4B8(arg0, arg1)) {
        tmp = D_803C0430.unk0[(arg0 * arg1) & 7][(u16)(D_803C0430.unk204 + (((arg0 * arg1) + (arg0 * arg0)) << 3)) & 63];
        return res + tmp;
    } else {
        return res;
    }
}

// ESA: func_80020C8C
s16 func_80298F78_6AA628(s16 arg0, s16 arg1) {
    s16 sp36;
    s16 sp34;
    s16 sp32;
    s16 sp30;
    s16 temp_t4;
    s16 temp_t6;

    func_80299640_6AACF0(arg0 >> 6, arg1 >> 6, &sp36, &sp34, &sp32, &sp30);
    temp_t4 = arg0 & 0x3F;
    temp_t6 = arg1 & 0x3F;
    if ((temp_t4 + temp_t6) < 64) {
        return sp36 + ((((sp32 - sp36) * temp_t4) + ((sp34 - sp36) * temp_t6)) >> 6);
    } else {
        return sp30 + ((((sp34 - sp30) * (64 - temp_t4)) + ((sp32 - sp30) * (64 - temp_t6))) >> 6);
    }
}

s16 func_802990A4_6AA754(s16 arg0, s16 arg1) {
    s16 tmp0;
    s16 tmp1;

    tmp0 = D_803C0740[arg0 >> 6][arg1 >> 6].unk6 << 2;
    tmp1 = D_803C0430.unk0[(arg0 * arg1) & 7][(u16)(D_803C0430.unk204 + (((arg0 * arg1) + (arg0 * arg0)) << 3)) & 63] >> 1;

    return tmp0 + tmp1;
}

#ifdef NON_MATCHING
// CURRENT (110)
void func_80299140_6AA7F0(void) {
    s32 pad[2];
    s32 xPos; //sp5C;
    s32 zPos; //sp58;
    s32 yPos; //sp54;
    s16 i, j;
    s32 maxPoint;
    s16 temp_a3;
    s16 maxX;
    s16 maxZ;
    s16 minX;
    s16 minZ;

    s32 yDistance;
    s32 xDistance;
    s32 zDistance;

    s32 new_var;
    s16 water_level;
    s32 phi_v0;

    maxPoint = 100000;

    minX = ((s32)D_803F28E0[D_803F2A98].unk74 >> 6) - 25;
    minZ = ((s32)D_803F28E0[D_803F2A98].unk78 >> 6) - 25;
    maxX = ((s32)D_803F28E0[D_803F2A98].unk74 >> 6) + 25;
    maxZ = ((s32)D_803F28E0[D_803F2A98].unk78 >> 6) + 25;

    if (1) { }

    if (minX < 4) {
        minX = 4;
    }
    if (minZ < 8) {
        minZ = 8;
    }
    if (maxX > 68) {
        maxX = 68;
    }
    if (maxZ > 104) {
        maxZ = 104;
    }

    for (i = minX; i <= maxX; i += 3) {
        for (j = minZ; j <= maxZ; j += 3) {
            temp_a3 = D_803C0740[i][j].unk6 << 2;
            if (temp_a3 != 0) {
                zDistance = ABS((j << 6) - (s16) D_803F28E0[D_803F2A98].unk78);
                new_var = ABS((i << 6) - ((s16) D_803F28E0[D_803F2A98].unk74));
                xDistance = new_var;
                yDistance = ABS(temp_a3 - (s16) D_803F28E0[D_803F2A98].unk7C) ^ 0;

                if (0) {};

                // why is this not just ABS...
                phi_v0 = (yDistance + xDistance + zDistance);
                if (phi_v0 < 0) {
                    phi_v0 = -phi_v0;
                }

                if (phi_v0 < maxPoint) {
                    maxPoint = phi_v0;
                    xPos = (i << 6);
                    zPos = (j << 6);
                    yPos = temp_a3;
                }
            }
        }
    }

    if (maxPoint != 100000) {
        if ((D_803F2D50.unk4C == 0) || (D_803F2D50.unk4C == 2)) {
            new_var = (GET_WATER_LEVEL(D_803C0740, (u16)D_803F28E0[D_803F2A98].unk74, (u16)D_803F28E0[D_803F2A98].unk78));
            water_level = (new_var << 2);
            if ((D_803F28E0[D_803F2A98].unk7C - 12.0f) < water_level) {
                func_8032CD70_73E420((void*)&D_803C0430.unk204, SFX_UNKNOWN_12, 0x4718, 0, 0.28f, xPos, zPos, yPos); // D_803BAD00_7CC3B0
            } else {
                func_8032CD70_73E420((void*)&D_803C0430.unk204, SFX_UNKNOWN_12, 0x2800, 0, 1.0f, xPos, zPos, yPos);
            }
        }
        if (D_803F2D50.unk4C == 1) {
            func_8032CD70_73E420((void*)&D_803C0430.unk204, SFX_UNKNOWN_64, 0x7FFF, 0, 0.25f, xPos, zPos, yPos);
        }
    }
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/overlay2_6A7A80/func_80299140_6AA7F0.s")
#endif

// ESA: func_80020D84
void func_80299640_6AACF0(s16 arg0, s16 arg1, s16 *arg2, s16 *arg3, s16 *arg4, s16 *arg5) {
    s16 temp_a0;
    s16 temp_a1;
    s16 temp_a2;
    s16 temp_t7;

    if (func_80298E08_6AA4B8(arg0 << 6, arg1 << 6) == 0) {
        temp_a0 = D_803C0740[arg0 + 0][arg1 + 0].unk6 << 2;
        temp_a1 = D_803C0740[arg0 + 0][arg1 + 1].unk6 << 2;
        temp_a2 = D_803C0740[arg0 + 1][arg1 + 0].unk6 << 2;
        temp_t7 = D_803C0740[arg0 + 1][arg1 + 1].unk6 << 2;

        *arg2 = temp_a0;
        if (*arg2 == 0) {
            *arg2 = temp_a1;
            if (*arg2 == 0) {
                *arg2 = temp_a2;
                if (*arg2 == 0) {
                    *arg2 = temp_t7;
                }
            }
        }
        *arg4 = temp_a2;
        if (*arg4 == 0) {
            *arg4 = temp_a0;
            if (*arg4 == 0) {
                *arg4 = temp_t7;
                if (*arg4 == 0) {
                    *arg4 = temp_a1;
                }
            }
        }
        *arg3 = temp_a1;
        if (*arg3 == 0) {
            *arg3 = temp_t7;
            if (*arg3 == 0) {
                *arg3 = temp_a0;
                if (*arg3 == 0) {
                    *arg3 = temp_a2;
                }
            }
        }
        *arg5 = temp_t7;
        if (*arg5 == 0) {
            *arg5 = temp_a1;
            if (*arg5 == 0) {
                *arg5 = temp_a2;
                if (*arg5 == 0) {
                    *arg5 = temp_a0;
                }
            }
        }

        *arg2 += D_803C0430.unk0[((arg0 + 0) * (arg1 + 0)) & 7][(u16)(D_803C0430.unk204 + ((((arg0 + 0) * (arg1 + 0)) + ((arg0 + 0) * (arg0 + 0))) << 3)) & 63] << 1;
        *arg4 += D_803C0430.unk0[((arg0 + 1) * (arg1 + 0)) & 7][(u16)(D_803C0430.unk204 + ((((arg0 + 1) * (arg1 + 0)) + ((arg0 + 1) * (arg0 + 1))) << 3)) & 63] << 1;
        *arg3 += D_803C0430.unk0[((arg0 + 0) * (arg1 + 1)) & 7][(u16)(D_803C0430.unk204 + ((((arg0 + 0) * (arg1 + 1)) + ((arg0 + 0) * (arg0 + 0))) << 3)) & 63] << 1;
        *arg5 += D_803C0430.unk0[((arg0 + 1) * (arg1 + 1)) & 7][(u16)(D_803C0430.unk204 + ((((arg0 + 1) * (arg1 + 1)) + ((arg0 + 1) * (arg0 + 1))) << 3)) & 63] << 1;
    } else {
        s32 idx1;
        s32 idx2;
        u16 a;
        s16 b; // fuuuu
        u16 c;

        c = D_803F2D50.unk10;
        a = D_803F2D50.unk12;
        b = D_803F2D50.unk14 + 1;

        idx1 = ((((s16)(arg1 - a) + 0) * b) + (s16)(arg0 - c));
        idx2 = ((((s16)(arg1 - a) + 1) * b) + (s16)(arg0 - c));

        *arg2 = D_80204278->unk286E0[idx1 + 0].v.ob[2];
        *arg3 = D_80204278->unk286E0[idx2 + 0].v.ob[2];
        *arg5 = D_80204278->unk286E0[idx2 + 1].v.ob[2];
        *arg4 = D_80204278->unk286E0[idx1 + 1].v.ob[2];
    }
}
