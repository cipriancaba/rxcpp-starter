cmake_minimum_required(VERSION 3.6)
project(rxcpp_starter)

set(CMAKE_CXX_STANDARD 11)

include_directories(rxcpp/Rx/v2/src)

set(SOURCE_FILES src/main.cpp)
add_executable(rxcpp_starter ${SOURCE_FILES})
