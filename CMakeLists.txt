cmake_minimum_required(VERSION 3.0.0)
project(Agario)

file(GLOB_RECURSE sources src/*.cpp include/*.hpp)
file(GLOB_RECURSE sources_test test/*.cpp)

add_executable(${PROJECT_NAME} ${sources})

target_include_directories(${PROJECT_NAME} PUBLIC include/models)