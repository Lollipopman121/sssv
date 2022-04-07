#include <ultra64.h>

Vtx D_050018E0_BEB90[8] = {
#include "data/inc/D_050018E0_BEB90.inc.c"
};
Vtx D_05001960_BEC10[31] = {
#include "data/inc/D_05001960_BEC10.inc.c"
};
Vtx D_05001B50_BEE00[32] = {
#include "data/inc/D_05001B50_BEE00.inc.c"
};
Vtx D_05001D50_BF000[30] = {
#include "data/inc/D_05001D50_BF000.inc.c"
};
Vtx D_05001F30_BF1E0[31] = {
#include "data/inc/D_05001F30_BF1E0.inc.c"
};
Vtx D_05002120_BF3D0[31] = {
#include "data/inc/D_05002120_BF3D0.inc.c"
};
Vtx D_05002310_BF5C0[23] = {
#include "data/inc/D_05002310_BF5C0.inc.c"
};
Vtx D_05002480_BF730[15] = {
#include "data/inc/D_05002480_BF730.inc.c"
};

Gfx D_05002570_BF820[] = {
    gsSPClearGeometryMode(G_LIGHTING),
    gsSPVertex(D_050018E0_BEB90, 8, 0),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPCullDisplayList(0, 8),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(D_05001960_BEC10, 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(3, 0, 5, 0, 2, 5, 0, 0),
    gsSP2Triangles(4, 2, 1, 0, 5, 4, 3, 0),
    gsSP2Triangles(1, 0, 6, 0, 3, 1, 7, 0),
    gsSP2Triangles(0, 3, 8, 0, 6, 7, 1, 0),
    gsSP2Triangles(7, 8, 3, 0, 8, 6, 0, 0),
    gsSP2Triangles(8, 6, 7, 0, 9, 10, 11, 0),
    gsSP2Triangles(10, 12, 13, 0, 12, 9, 14, 0),
    gsSP2Triangles(11, 14, 9, 0, 13, 11, 10, 0),
    gsSP2Triangles(14, 13, 12, 0, 10, 9, 15, 0),
    gsSP2Triangles(12, 10, 16, 0, 9, 12, 17, 0),
    gsSP2Triangles(15, 16, 10, 0, 16, 17, 12, 0),
    gsSP2Triangles(17, 15, 9, 0, 17, 15, 16, 0),
    gsSP2Triangles(18, 19, 20, 0, 19, 21, 22, 0),
    gsSP1Quadrangle(20, 19, 22, 23, 0),
    gsSP2Triangles(19, 24, 21, 0, 24, 25, 22, 0),
    gsSP2Triangles(24, 22, 21, 0, 25, 23, 22, 0),
    gsSP2Triangles(19, 26, 24, 0, 26, 27, 25, 0),
    gsSP2Triangles(26, 25, 24, 0, 27, 23, 25, 0),
    gsSP2Triangles(19, 18, 26, 0, 18, 20, 27, 0),
    gsSP2Triangles(18, 27, 26, 0, 20, 23, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(D_05001B50_BEE00, 32, 0),
    gsSP1Quadrangle(0, 1, 2, 3, 0),
    gsSP1Quadrangle(4, 5, 1, 0, 0),
    gsSP1Quadrangle(3, 2, 5, 4, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 10, 0),
    gsSP1Quadrangle(8, 7, 10, 11, 0),
    gsSP2Triangles(7, 12, 9, 0, 12, 13, 10, 0),
    gsSP2Triangles(12, 10, 9, 0, 13, 11, 10, 0),
    gsSP2Triangles(7, 14, 12, 0, 14, 15, 13, 0),
    gsSP2Triangles(14, 13, 12, 0, 15, 11, 13, 0),
    gsSP2Triangles(7, 6, 14, 0, 6, 8, 15, 0),
    gsSP2Triangles(6, 15, 14, 0, 8, 11, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 20, 0),
    gsSP2Triangles(19, 16, 21, 0, 18, 21, 16, 0),
    gsSP2Triangles(20, 18, 17, 0, 21, 20, 19, 0),
    gsSP2Triangles(17, 16, 22, 0, 19, 17, 23, 0),
    gsSP2Triangles(16, 19, 24, 0, 22, 23, 17, 0),
    gsSP2Triangles(23, 24, 19, 0, 24, 22, 16, 0),
    gsSP2Triangles(24, 22, 23, 0, 25, 26, 27, 0),
    gsSP2Triangles(26, 28, 29, 0, 28, 25, 30, 0),
    gsSP2Triangles(27, 30, 25, 0, 29, 27, 26, 0),
    gsSP2Triangles(30, 29, 28, 0, 26, 25, 31, 0),
    gsSPVertex(D_05001D50_BF000, 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 8, 0),
    gsSP2Triangles(7, 4, 9, 0, 6, 9, 4, 0),
    gsSP2Triangles(8, 6, 5, 0, 9, 8, 7, 0),
    gsSP2Triangles(5, 4, 10, 0, 7, 5, 11, 0),
    gsSP2Triangles(4, 7, 12, 0, 10, 11, 5, 0),
    gsSP2Triangles(11, 12, 7, 0, 12, 10, 4, 0),
    gsSP2Triangles(12, 10, 11, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 18, 20, 0),
    gsSP2Triangles(21, 17, 16, 0, 22, 23, 24, 0),
    gsSP2Triangles(17, 21, 25, 0, 18, 25, 26, 0),
    gsSP2Triangles(27, 20, 26, 0, 28, 13, 23, 0),
    gsSP2Triangles(21, 29, 15, 0, 25, 15, 14, 0),
    gsSP2Triangles(27, 26, 14, 0, 15, 25, 21, 0),
    gsSP2Triangles(29, 24, 23, 0, 15, 23, 13, 0),
    gsSP1Triangle(27, 14, 13, 0),
    gsSPVertex(D_05001F30_BF1E0, 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(5, 4, 6, 0, 7, 8, 6, 0),
    gsSP2Triangles(9, 4, 2, 0, 2, 1, 9, 0),
    gsSP2Triangles(4, 9, 10, 0, 7, 6, 10, 0),
    gsSP2Triangles(10, 6, 4, 0, 1, 0, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 5, 15, 16, 0),
    gsSP2Triangles(17, 11, 0, 0, 0, 18, 17, 0),
    gsSP2Triangles(11, 17, 19, 0, 18, 16, 20, 0),
    gsSP2Triangles(0, 2, 18, 0, 21, 17, 18, 0),
    gsSP2Triangles(22, 19, 17, 0, 14, 21, 23, 0),
    gsSP2Triangles(13, 22, 21, 0, 11, 9, 1, 0),
    gsSP2Triangles(24, 10, 9, 0, 7, 10, 24, 0),
    gsSP2Triangles(11, 24, 9, 0, 19, 24, 11, 0),
    gsSP2Triangles(25, 26, 27, 0, 25, 28, 29, 0),
    gsSP2Triangles(25, 29, 26, 0, 27, 30, 28, 0),
    gsSP2Triangles(27, 28, 25, 0, 26, 29, 30, 0),
    gsSP1Triangle(26, 30, 27, 0),
    gsSPVertex(D_05002120_BF3D0, 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP1Quadrangle(2, 1, 4, 5, 0),
    gsSP2Triangles(1, 6, 3, 0, 6, 7, 4, 0),
    gsSP2Triangles(6, 4, 3, 0, 7, 5, 4, 0),
    gsSP2Triangles(1, 8, 6, 0, 8, 9, 7, 0),
    gsSP2Triangles(8, 7, 6, 0, 9, 5, 7, 0),
    gsSP2Triangles(1, 0, 8, 0, 0, 2, 9, 0),
    gsSP2Triangles(0, 9, 8, 0, 2, 5, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 13, 14, 0),
    gsSP1Quadrangle(12, 11, 14, 15, 0),
    gsSP2Triangles(11, 16, 13, 0, 16, 17, 14, 0),
    gsSP2Triangles(16, 14, 13, 0, 17, 15, 14, 0),
    gsSP2Triangles(11, 18, 16, 0, 18, 19, 17, 0),
    gsSP2Triangles(18, 17, 16, 0, 19, 15, 17, 0),
    gsSP2Triangles(11, 10, 18, 0, 10, 12, 19, 0),
    gsSP2Triangles(10, 19, 18, 0, 12, 15, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
    gsSP2Triangles(24, 20, 22, 0, 24, 23, 20, 0),
    gsSP2Triangles(25, 24, 22, 0, 25, 23, 24, 0),
    gsSP2Triangles(21, 25, 22, 0, 21, 23, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 29, 27, 0),
    gsSP2Triangles(30, 26, 28, 0, 30, 29, 26, 0),
    gsSPVertex(D_05002310_BF5C0, 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 0, 2, 0, 4, 3, 0, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 8, 6, 0),
    gsSP2Triangles(9, 5, 7, 0, 9, 8, 5, 0),
    gsSP2Triangles(10, 9, 7, 0, 10, 8, 9, 0),
    gsSP2Triangles(6, 10, 7, 0, 6, 8, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 14, 12, 0),
    gsSP2Triangles(15, 11, 13, 0, 15, 14, 11, 0),
    gsSP2Triangles(16, 15, 13, 0, 16, 14, 15, 0),
    gsSP2Triangles(12, 16, 13, 0, 12, 14, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 20, 18, 0),
    gsSP2Triangles(21, 17, 19, 0, 21, 20, 17, 0),
    gsSP2Triangles(22, 21, 19, 0, 22, 20, 21, 0),
    gsSP2Triangles(18, 22, 19, 0, 18, 20, 22, 0),
    gsSPVertex(D_05002480_BF730, 15, 0),
    gsSP1Quadrangle(0, 1, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 6, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 9, 11, 0),
    gsSP2Triangles(13, 12, 14, 0, 9, 12, 13, 0),
    gsSP2Triangles(9, 13, 14, 0, 10, 9, 14, 0),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPEndDisplayList(),
};