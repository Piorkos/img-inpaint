cmake_minimum_required(VERSION 3.13)
project(img_inpaint)

set(CMAKE_CXX_STANDARD 17)
SET(OpenCV_DIR /drive/projects/cpp/installation/OpenCV-master/lib/cmake/opencv4)

find_package( OpenCV REQUIRED )

include_directories( ${OpenCV_INCLUDE_DIRS})

MACRO(add_example name)
    ADD_EXECUTABLE(${name} ${name}.cpp)
    TARGET_LINK_LIBRARIES(${name} ${OpenCV_LIBS} )
ENDMACRO()

add_example(main)

#add_executable(img_inpaint main.cpp)

