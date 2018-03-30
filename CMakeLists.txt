cmake_minimum_required(VERSION 3.10)
project(ZhuLi)

set(CMAKE_CXX_STANDARD 11)
set(Headers node.h)
set(Sources node.cpp Driver.cpp)


add_executable(ZhuLi ${Headers} ${Sources})