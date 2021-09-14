#include <ultra64.h>

Vtx D_040055E0_CD010[14] = {
#include "data/inc/D_040055E0_CD010.inc.c"
};

const Gfx D_040056C0_CD0F0[] = {
    gsSPVertex(D_040055E0_CD010, 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(2, 4, 3, 0, 4, 2, 5, 0),
    gsSP2Triangles(0, 6, 1, 0, 4, 5, 6, 0),
    gsSP2Triangles(1, 6, 7, 0, 7, 6, 5, 0),
    gsSP2Triangles(1, 7, 8, 0, 9, 1, 8, 0),
    gsSP1Quadrangle(5, 9, 10, 7, 0),
    gsSP2Triangles(10, 9, 11, 0, 11, 9, 8, 0),
    gsSP2Triangles(8, 7, 11, 0, 7, 10, 11, 0),
    gsSP2Triangles(0, 12, 6, 0, 6, 12, 4, 0),
    gsSP2Triangles(12, 3, 4, 0, 12, 0, 3, 0),
    gsSP1Quadrangle(13, 1, 9, 5, 0),
    gsSP2Triangles(2, 13, 5, 0, 1, 13, 2, 0),
    gsSPEndDisplayList(),
};
