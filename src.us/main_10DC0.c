#include <ultra64.h>

#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main_10DC0/func_801356C0.s")
// void func_801356C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, Gfx **arg4, u8 *arg5, f32 sizeX, f32 sizeY, u8 arg8) {
//
//     gDPPipeSync((*arg4)++);
//
//     switch (arg8) {
//     case 16:
//         gDPSetTextureImage((*arg4)++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, arg5);
//         gDPLoadSync((*arg4)++);
//
//         gDPLoadTextureBlock((*arg4)++, arg5, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0,
//             G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP,
//             G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
//         break;
//     case 8:
//         gDPLoadSync((*arg4)++);
//         gDPSetTextureImage((*arg4)++, G_IM_FMT_I, G_IM_SIZ_8b, 1, arg5);
//
//         gDPLoadTextureBlock((*arg4)++, arg5, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0,
//             G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP,
//             G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
//         break;
//     default:
//         rmonPrintf("Wrong texture size"); //D_8015B050);
//     }
//
// #if 1
//     // this is completely wrong
//     gSPTextureRectangle(
//         (*arg4)++,
//         MAX(0, arg0),
//         MAX(0, arg1),
//         MAX(0, arg0 + arg2),
//         MAX(0, arg1 + arg3),
//         G_TX_RENDERTILE,
//         0,
//         0,
//         MAX(MAX(0, ((arg0 + arg2) << 18) >> 16), (16384.0f / (sizeX / 2.0f))),
//         MAX(MAX(0, ((arg1 + arg3) << 18) >> 16), (16384.0f / (sizeY / 2.0f)))
//         );
// #endif
//
//     gDPPipeSync((*arg4)++);
//     gDPSetCycleType((*arg4)++, G_CYC_1CYCLE);
// }

#pragma GLOBAL_ASM("asm/nonmatchings/main_10DC0/func_80135CD8.s")
#pragma GLOBAL_ASM("asm/nonmatchings/main_10DC0/func_801360C8.s")
// miles away.
// void *func_801360C8(Gfx **arg0, u16 arg2, u16 arg3, u16 arg4, u16 arg5, u8 arg6, u8 arg7, u16 arg8, u16 arg9, u16 argA) {
//
//     gDPPipeSync((*arg0)++);
//     gDPSetPrimDepth((*arg0)++, argA, 0);
//
//     guSprite2DInit(arg0, &D_80204278->unk32870[D_80204278->unk38914], 0, arg2, arg2, arg3, 0, 2, 0, 0);
//     gSPBgRect1Cyc((*arg0)++, D_80032870 + D_80204278->unk38914);
//
//     gSPCullDisplayList((*arg0)++, (arg6 << 8) | arg7, (s32) (((u32) (((f32) (u32) arg2 / (f32) (u32) arg4) * 1024.0f) << 0x10) | ((u32) (((f32) (u32) arg3 / (f32) arg5) * 1024.0f) & 0xFFFF)));
//     gSPPopMatrix((*arg0)++, ((arg8 << 0x12) | ((arg9 * 4) & 0xFFFF)));
//
//     D_80204278->unk38914 += 1;
//     gDPPipeSync((*arg0)++);
// }

void func_80136418(Gfx **dl, u8 color) {
    gSPLoadUcodeEx((*dl)++, &D_8014E300, &D_8015C750, 2048);
    gDPPipeSync((*dl)++);
    gDPSetColorImage((*dl)++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 320, osVirtualToPhysical(D_80204274->unk3BBE8));

    gSPViewport((*dl)++, &D_80152EA8);
    gSPSetGeometryMode((*dl)++, G_ZBUFFER);
    gSPClipRatio((*dl)++, FRUSTRATIO_4);

    gSPDisplayList((*dl)++, &D_801584A0);

    gDPSetPrimColor((*dl)++, 0, 0, color, color, color, color);
    gDPSetDepthSource((*dl)++, G_ZS_PRIM);
    gDPSetRenderMode((*dl)++, G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2);
    gDPSetTextureFilter((*dl)++, G_TF_AVERAGE);

    gDPSetScissor((*dl)++, G_SC_NON_INTERLACE, 8, 8, gScreenWidth - 8, gScreenHeight - 8);
}

void func_801366BC(Gfx **dl, u8 r, u8 g, u8 b, u8 a) {
    gDPPipeSync((*dl)++);

    gSPLoadUcodeEx((*dl)++, &D_8014E300, &D_8015C750, 2048);
    gDPPipeSync((*dl)++);

    load_segments(dl, D_80204278);

    gDPSetColorImage((*dl)++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 320, osVirtualToPhysical(D_80204274->unk3BBE8));
    gSPViewport((*dl)++, &D_80152EA8);
    gSPClipRatio((*dl)++, FRUSTRATIO_4);

    gSPDisplayList((*dl)++, &D_801584A0);
    gDPSetPrimColor((*dl)++, 0, 0, r, g, b, a);
    gDPSetTextureFilter((*dl)++, G_TF_AVERAGE);

    gDPSetScissor((*dl)++, G_SC_NON_INTERLACE, 8, 8, gScreenWidth - 8, gScreenHeight - 8);
}

// calls guSprite2DInit
#pragma GLOBAL_ASM("asm/nonmatchings/main_10DC0/func_80136938.s")
