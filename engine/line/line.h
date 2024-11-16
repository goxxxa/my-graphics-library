#ifndef GRAPHICS_LINE_H
#define GRAPHICS_LINE_H

#include "../color.h"
#include "../base_point/base_point.h"

class Line : virtual public BasePoint {
protected:
    int startX, startY;
    int endX, endY;
    Color color;

public:
    explicit Line(int inputStartX = 0, int inputStartY = 0, int inputEndX = 0, int inputEndY = 0,
         Color inputColor = DEFAULT_COLOR);
    ~Line();

    void draw(bool flag);
};

#endif // GRAPHICS_LINE_H
