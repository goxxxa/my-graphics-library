#include "oSector.h"
#include "../../API/VSTUB.H"


OSector::OSector(int startX, int startY, int endX, int endY, Color color) : OSegment(startX, startY, endX, endY, color),
                                                                            LineWrapper(startX, startY, endX, endY,
                                                                                        color) {
    OLine::endX = centerX;// + 2 * radius * atan(sweepAngle);
    OLine::endY = centerY + 2 * radius;
    LineWrapper::startX = centerX; //- 2 * radius * atan(sweepAngle);
    LineWrapper::startY = centerY + 2 * radius;
}

OSector::~OSector() = default;


void OSector::draw(bool flag) {
    LineWrapper::draw(flag);
    OLine::draw(flag);
    OArc::draw(flag);
}

const char *OSector::who() {
    std::vc << "Hi, I'm OSector\n";
    return "Hi, I'm OSector";
}