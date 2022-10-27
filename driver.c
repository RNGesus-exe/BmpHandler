#include "vision.h"
const int PATCH_SIZE = 41;
const int EDGE_LINES = 10;

int main()
{
    BitMap left, right;
    EdgePoints edges;
    init(EDGE_LINES, &edges, "Images/imageA.bmp", &left, "Images/imageB.bmp", &right);
    applyEdgeDetection(&edges, &left, PATCH_SIZE, EDGE_LINES);
    deallocateBuffers(&left, &right, &edges, EDGE_LINES);
    return 0;
}