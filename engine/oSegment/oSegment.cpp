#include "oSegment.h"
#include <cmath>

using namespace std;

OSegment::OSegment(int inputStartX, int inputStartY, int inputEndX, int inputEndY, Color color) : OArc(centerX, centerY,
                                                                                                       radius,
                                                                                                       startAngle,
                                                                                                       sweepAngle,
                                                                                                       color),
                                                                                                  OLine(inputStartX,
                                                                                                        inputStartY,
                                                                                                        inputEndX,
                                                                                                        inputEndY,
                                                                                                        color) {
    centerX = (inputStartX + (inputEndX - inputStartX) / 2);
    centerY = (inputStartY + (inputEndY - inputStartY) / 2);
    radius = (int) sqrt((inputEndX - centerX) * (inputEndX - centerX) + (inputEndY - centerY) * (inputEndY - centerY));
    startAngle = atan(((float) (-centerY + inputStartY) / (float) (centerX - inputStartX)));
    sweepAngle = (float) (sweepAngle + M_PI);
};

OSegment::~OSegment() = default;

//const char *OSegment::who() {
//    return "OSegment";
//}

void OSegment::draw(bool flag) {
    OLine::draw(flag);
    OArc::draw(flag);
}
