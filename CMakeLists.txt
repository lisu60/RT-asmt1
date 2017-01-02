cmake_minimum_required(VERSION 3.6)
project(RT_asmt1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp GeoUtils.cpp GeoUtils.h)
include_directories(/home/taylor/Programming/eigen-eigen-f562a193118d)
add_executable(RT_asmt1 ${SOURCE_FILES})