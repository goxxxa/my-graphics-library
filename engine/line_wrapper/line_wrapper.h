#ifndef GRAPHICS_LINE_WRAPPER_H
#define GRAPHICS_LINE_WRAPPER_H

#include "../line/line.h"
#include "../object/object.h"

class LineWrapper : public Line, virtual public Object{
public:
    explicit LineWrapper(int startX, int startY, int endX, int endY, Color color);
    ~LineWrapper();

    void draw(bool flag);
    const char *who();
};

#endif //GRAPHICS_LINE_WRAPPER_H
