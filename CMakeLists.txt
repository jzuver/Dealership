cmake_minimum_required(VERSION 3.17)
project(Dealership)

set(CMAKE_CXX_STANDARD 14)

add_executable(Dealership main.cpp Vehicle.h Vehicle.cpp Motorcycle.h Motorcycle.cpp Engine.h Engine.cpp DealershipMenu.h DealershipMenu.cpp)