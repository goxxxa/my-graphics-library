cmake_minimum_required(VERSION 3.27)
project(graphics)

set(CMAKE_CXX_STANDARD 17)

add_executable(graphics
        API/VSTUB.H
        API/VSTUB.CPP
        main.cpp
        engine/line/line.cpp
        engine/base_point/base_point.cpp
        engine/color.h
        #engine/arc/arc.cpp
        engine/base_point/base_point.h
        engine/line/line.h
        engine/arc/arc.cpp
        engine/line_wrapper/line_wrapper.h
        engine/line_wrapper/line_wrapper.cpp
        engine/oLine/oLine.h
        engine/oLine/oLine.cpp
        engine/object/object.cpp
        engine/oArc/oArc.h
        engine/oArc/oArc.cpp
        engine/oSegment/oSegment.h
        engine/oSegment/oSegment.cpp
        engine/oSector/oSector.h
        engine/oSector/oSector.cpp
        game/snake/snake.h
        game/food/food.h
        game/snake/snake.cpp
        game/rectangle/rectangle.h
        game/rectangle/rectangle.cpp
        game/circle/circle.h
        game/circle/circle.cpp
        #engine/arc/arc.h
        #engine/object/object.h
        #engine/object/object.cpp
        #engine/oSector/oSector.h
        #engine/oSegment/oSegment.h
        #engine/oSegment/oSegment.cpp
        #engine/oSector/oSector.cpp
        #engine/line_wrapper/line_wrapper.h
        #engine/line_wrapper/line_wrapper.cpp
        #engine/oLine/oLine.cpp
        #engine/oArc/oArc.cpp
        #engine/oSegment/oSegment.h
        #engine/oSegment/oSegment.cpp
        #engine/oSector/oSector.h
        #engine/oSector/oSector.cpp

)
