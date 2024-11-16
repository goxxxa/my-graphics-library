#ifndef GRAPHICS_RECTANGLE_H
#define GRAPHICS_RECTANGLE_H

#include "../../engine/base_point/base_point.h"

class Rectangle_ : public BasePoint {
protected:
    int startX, startY;
    int endX, endY;
    Color color;
public:
    explicit Rectangle_(int inputStartX, int inputStartY, int inputEndX, int inputEndY, Color inputColor);
    ~Rectangle_();

    void draw(bool flag);
    void fill(bool flag);
};

#endif //GRAPHICS_RECTANGLE_H
