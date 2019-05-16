cmake_minimum_required(VERSION 3.13)
project(img_inpaint)

set(CMAKE_CXX_STANDARD 17)
SET(OpenCV_DIR /drive/projects/cpp/installation/OpenCV-master/lib/cmake/opencv4)

set(SOURCE_FILES main.cpp)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(img_inpaint ${SOURCE_FILES})

target_link_libraries(img_inpaint ${OpenCV_LIBRARIES})


#add_executable(img_inpaint main.cpp)

