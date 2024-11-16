#ifndef GRAPHICS_COLOR_H
#define GRAPHICS_COLOR_H

#define DEFAULT_COLOR Color {255, 0, 0}
#define BLACK Color {0, 0, 0}
#define BLUE Color {0, 0, 255}
#define YELLOW Color {255, 255, 0}

typedef struct Color {
    int r = 0;
    int g = 0;
    int b = 0;
} Color;

#endif //GRAPHICS_COLOR_H
