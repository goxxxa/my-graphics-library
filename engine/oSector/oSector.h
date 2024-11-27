#ifndef OSECTOR_H
#define OSECTOR_H

#include "../oSegment/oSegment.h"
#include "../line_wrapper/line_wrapper.h"


class OSector : public OSegment, public LineWrapper{
public:
    explicit OSector(int startX = 0, int startY = 0, int endX = 0, int endY = 0, Color color = DEFAULT_COLOR);
    ~OSector();

    void draw(bool flag);
    const char *who();
};

#endif