#ifndef GRAPHICS_SNAKE_H
#define GRAPHICS_SNAKE_H

class Snake {
protected:
    int lenght;
    int headXPosition, headYPosition;
    int tailXPosition, tailYPosition;
    int direction;
public:
    explicit Snake();

    ~Snake();

    void move();
};

#endif //GRAPHICS_SNAKE_H
