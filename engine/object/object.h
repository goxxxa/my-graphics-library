#ifndef OBJECT_H
#define OBJECT_H

#include "../base_point/base_point.h"

class Object {
public:
    static int number;
public:
    Object();
    virtual ~Object();

    virtual const char *who() = 0;
};

#endif