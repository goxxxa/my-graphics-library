#include "../base_point/base_point.h"
#include "../../API/VSTUB.H"
#include "line.h"

using namespace std;

Line::Line(int inputStartX, int inputStartY, int inputEndX, int inputEndY, Color inputColor) {
    startX = inputStartX;
    startY = inputStartY;
    endX = inputEndX;
    endY = inputEndY;
    color = inputColor;
}

Line::~Line() = default;

void Line::draw(bool flag) {
    flag ? setcolor(color.r, color.g, color.b) : setcolor(0, 0, 0);
    //drawline(startX + x0, startY + y0, endX + x0, endY + y0);
    putline(startX + x0, startY + y0, endX + x0, endY + y0);
}
