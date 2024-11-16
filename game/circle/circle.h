#ifndef GRAPHICS_CIRCLE_H
#define GRAPHICS_CIRCLE_H

#include "../../engine/base_point/base_point.h"

class Circle : public BasePoint {
protected:
    int xPos, yPos;
    int radius;
    Color color;
public:
    Circle(int inputXPos, int inputYPos, int inputRadius, Color inputColor);
    ~Circle();

    void draw(bool flag);
    void fill(bool flag);
};

#endif //GRAPHICS_CIRCLE_H
