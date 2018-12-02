cmake_minimum_required(VERSION 3.0.0)
project(Agario)

#Find sources
file(GLOB_RECURSE sources src/*.cpp include/*.hpp)
file(GLOB_RECURSE sources_test test/*.cpp)

#Set targets
add_executable(${PROJECT_NAME} ${sources})
add_executable(Test${PROJECT_NAME} ${sources_test})

#Link SFML libraries
target_link_libraries(${PROJECT_NAME} sfml-window sfml-system)

#Link header directories
target_include_directories(${PROJECT_NAME} PUBLIC include/models)

#Link test libraries
find_package(Boost COMPONENTS unit_test_framework REQUIRED)
target_link_libraries(Test${PROJECT_NAME} ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY})