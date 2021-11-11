cmake_minimum_required(VERSION 3.20)
project(6_class_and_object)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_C_FLAGS "-fexec-charset=CP949")

add_executable(6_class_and_object main.cpp CounterM.h Counter.h VecF.h NamedObj.h NamedObj.cpp)