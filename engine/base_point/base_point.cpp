#include "base_point.h"

BasePoint::BasePoint(int inputX, int inputY, Color inputColor) {
    x0 = inputX;
    y0 = inputY;
    color = inputColor;
}

BasePoint::~BasePoint() = default;

void BasePoint::move(int dX, int dY) {
    draw(false);
    x0 += dX;
    y0 += dY;
    draw(true);
}