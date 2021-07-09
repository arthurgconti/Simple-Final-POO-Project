# cmake_minimum_required(VERSION <specify CMake version here>)
project(EP5)

set(CMAKE_CXX_STANDARD 98)

add_executable(EP5 main.cpp Classes/PerformanceManagement.cpp Classes/PerformanceManagement.h Classes/FaultManagement.cpp Classes/FaultManagement.h Classes/BoardComputer.cpp Classes/BoardComputer.h)