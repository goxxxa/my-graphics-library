#ifndef GRAPHICS_BASE_POINT_H
#define GRAPHICS_BASE_POINT_H

#include "../color.h"

class BasePoint {
protected:
    int x0, y0;
    Color color;

public:
    BasePoint(int inputX = 0, int inputY = 0, Color inputColor = DEFAULT_COLOR);
    ~BasePoint();

    void move(int dX, int dY);
    virtual void draw(bool flag) = 0;
    
};

#endif // GRAPHICS_BASE_POINT_H
