cmake_minimum_required(VERSION 3.19)
project(hw7ec)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(hw7ec
        hw7ec.cpp
        ManageInventory.cpp
        )
