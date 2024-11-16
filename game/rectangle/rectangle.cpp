#include "rectangle.h"
#include "../../API/VSTUB.H"

using namespace std;

Rectangle_::Rectangle_(int inputStartX, int inputStartY, int inputEndX, int inputEndY, Color inputColor) {
    startX = inputStartX;
    startY = inputStartY;
    endX = inputEndX;
    endY = inputEndY;
    color = inputColor;
}

Rectangle_::~Rectangle_() = default;

void Rectangle_::draw(bool flag) {
    flag ? setcolor(color.r, color.g, color.b) : setcolor(0, 0, 0);
    putline(startX + x0, startY + y0, endX + x0, startY + y0);
    putline(startX + x0, startY + y0, startX + x0, endY + y0);
    putline(startX + x0, endY + y0, endX + x0, endY + y0);
    putline(endX + x0, startY + y0, endX + x0, endY + y0);

    Rectangle_::fill(flag);
}

void Rectangle_::fill(bool flag) {
    flag ? setcolor(color.r, color.g, color.b) : setcolor(0, 0, 0);
    for (int x = startX; x <= endX; ++x) {
        for (int y = startY; y <= endY; ++y) {
            putpixel(x + x0, y + y0);
        }
    }
}