cmake_minimum_required(VERSION 3.8)

set(This testingCGLM)
project(${This})

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 98)

add_subdirectory(glm)


add_library(MyMathLib STATIC  MyMathLib/MyMathLib.h MyMathLib/MyMathLib.cpp)

target_link_libraries(MyMathLib PUBLIC
    glm
)

add_executable(${This} main.cpp)
target_link_libraries(${This} PRIVATE MyMathLib)