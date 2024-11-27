#include "arc.h"
#include "../../API/VSTUB.H"

using namespace std;

Arc_::Arc_(int inputCenterX, int inputCenterY, int inputRadius, float inputStartAngle, float inputSweepAngle, Color inputColor) {
    centerX = inputCenterX;
    centerY = inputCenterY;
    radius = inputRadius;
    startAngle = inputStartAngle;
    sweepAngle = inputSweepAngle;
    color = inputColor;
}

Arc_::~Arc_() = default;

void Arc_::draw(bool flag) {
    flag ? setcolor(color.r, color.g, color.b) : setcolor(0, 0, 0);
    putarc(centerX + x0, centerY + y0, radius, startAngle, sweepAngle);
//    drawarc(centerX + x0, centerY + y0, radius, startAngle, sweepAngle);
}
