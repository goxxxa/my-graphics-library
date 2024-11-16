#ifndef OBJECT_H
#define OBJECT_H

class Object {
public:
    static int number;
public:
    explicit Object();
    ~Object();

    virtual const char *who() = 0;
};

#endif