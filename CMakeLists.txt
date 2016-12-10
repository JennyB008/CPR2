cmake_minimum_required(VERSION 3.6)
project(MusterloesungBlatt2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
    main.cpp
    Matrix.cpp
    Matrix.h
    Vektor.cpp
    Vektor.h
    Vektor2D.cpp
    Vektor2D.h)

add_executable(MusterloesungBlatt2 ${SOURCE_FILES})