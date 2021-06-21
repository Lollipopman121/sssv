#include <ultra64.h>

Gfx D_8004E8C0[] = {
    gsDPPipeSync(),
    gsDPSetTexturePersp(G_TP_PERSP),
    gsDPSetCycleType(G_CYC_2CYCLE),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_RA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(-1),
    gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH | G_CLIPPING),
    gsDPSetCombineMode(G_CC_MODULATEIA, G_CC_PASS2),
    gsSPTexture(32768, 32768, 0, G_TX_RENDERTILE, G_ON),
    gsSPEndDisplayList(),
};