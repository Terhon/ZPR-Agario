cmake_minimum_required(VERSION 3.0.0)
project(Agario)

#Find sources
file(GLOB_RECURSE sources src/*.cpp include/*.hpp)
file(GLOB_RECURSE sources_test test/*.cpp)

add_executable(${PROJECT_NAME} ${sources})

#Link SFML libraries
target_link_libraries(${PROJECT_NAME} sfml-window sfml-system)

#Link header directories
target_include_directories(${PROJECT_NAME} PUBLIC include/models)