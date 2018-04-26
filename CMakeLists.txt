cmake_minimum_required(VERSION 3.7)
project(Sistemas_Inteligentes_TSP)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Ant.cpp Ant.h Node.cpp Node.h AntColony.cpp AntColony.h Edge.cpp Edge.h)
add_executable(Sistemas_Inteligentes_TSP ${SOURCE_FILES} Edge.cpp Edge.h)