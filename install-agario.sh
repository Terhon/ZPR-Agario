#!/bin/bash
sudo apt install libsfml-dev
sudo apt install libboost-test-dev
sudo apt install cmake
mkdir build && cd build
cmake ..
cd ..
cmake --build build