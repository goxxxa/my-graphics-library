#include <iostream>
#include "oLine.h"

OLine::OLine(int startX, int startY, int endX, int endY, Color color) : Line(startX, startY, endX, endY, color) {};

OLine::~OLine() = default;

const char *OLine::who() {
    std::cout << "Hi, I'm OLine №" << OLine::number << std::endl;
    return "Hi, I'm OLine";
}

void OLine::draw(bool flag) {
    Line::draw(flag);
}