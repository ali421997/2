cmake_minimum_required(VERSION 2.8.12)

PROJECT(2)

SET(CMAKE_CXX_STANDARD 11)

SET(OpenCV_DIR /Users/aliabdelmoneim/installation/OpenCV/lib/cmake/opencv4/)

find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

MACRO(add_example name)
	ADD_EXECUTABLE(${name} ${name}.cpp)
	TARGET_LINK_LIBRARIES(${name} ${OpenCV_LIBS})
ENDMACRO()

add_example(2)
