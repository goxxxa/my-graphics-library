#ifndef GRAPHICS_LINE_WRAPPER_H
#define GRAPHICS_LINE_WRAPPER_H

#include "../line/line.h"

class LineWrapper : public Line{
protected:
public:
    explicit LineWrapper(int startX, int startY, int endX, int endY, Color color);
    ~LineWrapper();

    void draw(bool flag);
};

#endif //GRAPHICS_LINE_WRAPPER_H
