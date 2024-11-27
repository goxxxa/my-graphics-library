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
#include <mutex>
#include <condition_variable>


namespace std {


    int main() {

        int movementDelta = 5;
        auto duration = std::chrono::microseconds(1000);
        const int numberOfObjects = 4;

        OLine oLine = OLine(100, 100, 110, 150, GREEN);
        OArc oArc = OArc(100, 100, 30, 0, 3.14, BLUE);
        OSegment oSegment = OSegment(10, 30, 70, 80, YELLOW);
        OSector oSector = OSector(130, 150, 180, 150, RED);

        BasePoint *objects[numberOfObjects];

        objects[0] = &oLine;
        objects[1] = &oArc;
        objects[2] = &oSegment;
        objects[3] = &oSector;

        for (size_t i = 0; i < numberOfObjects; ++i) {
            auto *object = dynamic_cast<Object *>(objects[i]);
            if (object) {
                object->who();
            }

        }

        while (true) {
            if (GetAsyncKeyState(VK_LEFT) != 0) {
                for (int i = 0; i < numberOfObjects; ++i) {
                    if (objects[i] != nullptr) {
                        objects[i]->move(-movementDelta, 0);
                    }
                    std::this_thread::sleep_for(duration);
                }
                vgetchar();
            } else if (GetAsyncKeyState(VK_RIGHT) != 0) {
                for (int i = 0; i < numberOfObjects; ++i) {
                    if (objects[i] != nullptr) {
                        objects[i]->move(movementDelta, 0);
                    }
                    std::this_thread::sleep_for(duration);
                }
                vgetchar();
            } else if (GetAsyncKeyState(VK_UP) != 0) {
                for (int i = 0; i < numberOfObjects; ++i) {
                    if (objects[i] != nullptr) {
                        objects[i]->move(0, -movementDelta);
                    }
                    std::this_thread::sleep_for(duration);

                }
                vgetchar();
            } else if (GetAsyncKeyState(VK_DOWN) != 0) {
                for (int i = 0; i < numberOfObjects; ++i) {
                    if (objects[i] != nullptr) {
                        objects[i]->move(0, movementDelta);
                    }
                    std::this_thread::sleep_for(duration);
                }
                vgetchar();
            }

        }


    }
}