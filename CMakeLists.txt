cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(nesem LANGUAGES CXX)

include_directories(include)

add_executable(nesem src/nesem.cpp)