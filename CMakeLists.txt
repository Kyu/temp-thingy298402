cmake_minimum_required(VERSION 3.17)
project(WasteTimeConsole)

set(CMAKE_CXX_STANDARD 14)

add_executable(WasteTimeConsole sleep_random.cpp)
add_executable(SimulateSeedgen simulate_seedgen.cpp)