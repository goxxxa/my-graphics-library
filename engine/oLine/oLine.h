#ifndef OLINE_H
#define OLINE_H

#include "../line/line.h"
#include "../object/object.h"

class OLine : public Line, public Object{
public:
    explicit OLine(int startX, int startY, int endX, int endY, Color color);
    ~OLine();

    void draw(bool flag);
    const char *who();
};

#endif