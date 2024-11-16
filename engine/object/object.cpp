#include "object.h"

int Object::number = 0;

Object::Object() {
    Object::number++;
}

Object::~Object() = default;