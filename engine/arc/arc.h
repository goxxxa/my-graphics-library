#ifndef GRAPHICS_ARC_H
#define GRAPHICS_ARC_H

#include "../base_point/base_point.h"

class Arc_ : virtual public BasePoint {
protected:
    int centerX, centerY;
    int radius;
    float startAngle, sweepAngle;
    Color color;

public:
    explicit Arc_(int inputCenterX, int inputCenterY, int inputRadius, float inputStartAngle, float inputSweepAngle, Color color = DEFAULT_COLOR);
    ~Arc_();

    void draw(bool flag);
};

#endif // GRAPHICS_ARC_H
