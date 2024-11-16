#ifndef OARC_H
#define OARC_H

#include "../arc/arc.h"
#include "../object/object.h"

class OArc : public Arc_, public Object{
public:
    explicit OArc(int centerX = 0, int centerY = 0, int radius = 0, float startAngle = 0, float sweepAngle = 0,
                  Color color = DEFAULT_COLOR);
    ~OArc();

    void draw(bool flag);
    const char *who();
};

#endif