#include <ctime>
#include <iostream>
#include "API/VSTUB.H"
#include "engine/color.h"
#include "engine/line/line.h"
#include "engine/arc/arc.h"
#include "engine/line_wrapper/line_wrapper.h"
#include "engine/oLine/oLine.h"
#include "engine/oArc/oArc.h"
#include "engine/oSegment/oSegment.h"
#include "engine/oSector/oSector.h"
#include "game/rectangle/rectangle.h"
#include <chrono>
#include <thread>
#include <cmath>

#define WIDTH 720
#define HEIGHT 480
#define SIZE 30

namespace std {

    int main() {

        int movementDelta = 5;
        auto duration = std::chrono::microseconds(1000);
        const int numberOfObjects = 2;


        Line line = Line(50, 50, 70, 70, BLUE);
        Arc_ arc = Arc_(50, 50, 30, 0, 3.14, BLUE);
        OLine oLine = OLine(100, 100, 100, 150, YELLOW);
        OArc oArc = OArc(100, 100, 30, 0, 3.14, YELLOW);
        OSegment oSegment = OSegment(30, 50, 90, 80, YELLOW);
        OSector oSector = OSector(30, 50, 130, 50, YELLOW);
        Rectangle_ rect = Rectangle_(10, 40, 40, 70, YELLOW);
        BasePoint *objects[numberOfObjects];

        objects[0] = &line;
        objects[1] = &rect;
//        objects[2] = &oLine;
//        objects[3] = &oArc;
//        objects[4] = &oSegment;
//        objects[5] = &oSector;



        while (true) {
            if (GetAsyncKeyState(VK_LEFT) != 0) {
                for (int i = 0; i < numberOfObjects; ++i) {
                    objects[i]->move(-movementDelta, 0);
                    //std::this_thread::sleep_for(duration);
                }
                vgetchar();
            } else if (GetAsyncKeyState(VK_RIGHT) != 0) {
                for (int i = 0; i < numberOfObjects; ++i) {
                    objects[i]->move(movementDelta, 0);
                    //std::this_thread::sleep_for(duration);
                }
                vgetchar();
            } else if (GetAsyncKeyState(VK_UP) != 0) {
                for (int i = 0; i < numberOfObjects; ++i) {
                    objects[i]->move(0, -movementDelta);
                    //std::this_thread::sleep_for(duration);
                }
                vgetchar();
            } else if (GetAsyncKeyState(VK_DOWN) != 0) {
                for (int i = 0; i < numberOfObjects; ++i) {
                    objects[i]->move(0, movementDelta);
                    //std::this_thread::sleep_for(duration);
                }
                vgetchar();
            }
        }

//        setcolor(0, 255, 255);
//        putline(0, 0, 400, 400);
        vgetchar();

        // line.move();
//
//        setcolor(255, 0, 255);
//        putarc(100, 100, 50, 1.5, 2.5);
//        vgetchar();
//
//        setcolor(0, 0, 0);
//        putarc(100, 100, 50, 1.5, 2.5);
//        vgetchar();
//
//        setcolor(255, 0, 255);
//        putarc(120, 120, 50, 1.5, 2.5);
        vgetchar();
        // return 0;
    }
}