#include <iostream>
#include "oLine.h"
#include "../../API/VSTUB.H"

OLine::OLine(int startX, int startY, int endX, int endY, Color color) : Line(startX, startY, endX, endY, color) {};

OLine::~OLine() = default;

const char *OLine::who() {
    std::vc << "Hi, I'm OLine\n";
    return "Hi, I'm OLine";
}

void OLine::draw(bool flag) {
    Line::draw(flag);
}