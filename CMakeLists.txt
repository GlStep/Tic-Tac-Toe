cmake_minimum_required(VERSION 3.22)
project(Tic_Tac_Toe)

set(CMAKE_CXX_STANDARD 14)

include_directories(Tic-Tac-Toe_V2)

add_executable(Tic_Tac_Toe
        Tic-Tac-Toe_V2/main.cpp
        Tic-Tac-Toe_V2/tic_fnc.cpp
        Tic-Tac-Toe_V2/tic_fnc.hpp)
