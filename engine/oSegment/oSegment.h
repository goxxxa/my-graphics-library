#ifndef OSEGMENT_H
#define OSEGMENT_H

#include "../oLine/oLine.h"
#include "../oArc/oArc.h"

class OSegment : public OLine, public OArc{
public:
    explicit OSegment(int startX = 0, int startY = 0, int endX = 0, int endY = 0, Color color = DEFAULT_COLOR);
    ~OSegment();

    void draw(bool flag);

    const char *who();

};

#endif