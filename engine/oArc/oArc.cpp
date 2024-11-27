#include <iostream>
#include "oArc.h"
#include "../../API/VSTUB.H"

OArc::OArc(int centerX, int centerY, int radius, float startAngle, float sweepAngle, Color color) : Arc_(centerX,
                                                                                                         centerY,
                                                                                                         radius,
                                                                                                         startAngle,
                                                                                                         sweepAngle,
                                                                                                         color) {};

OArc::~OArc() = default;

void OArc::draw(bool flag) {
    Arc_::draw(flag);
}

const char *OArc::who() {
    std::vc << "Hi, I'm OArc\n";
    return "Hi, I'm OArc";
}