#include "line_wrapper.h"

LineWrapper::LineWrapper(int startX, int startY, int endX, int endY, Color color) : Line(startX, startY, endX, endY,
                                                                                         color) {};
LineWrapper::~LineWrapper() = default;

void LineWrapper::draw(bool flag) {
    Line::draw(flag);
}

const char *LineWrapper::who() {
    return "I'm LineWrapper";
};

