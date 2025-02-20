cmake_minimum_required(VERSION 3.10)

project(laba1)

enable_language(CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(src)

set(SOURCE_FILES src/main.cpp src/utils.cpp src/utils.hpp)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})