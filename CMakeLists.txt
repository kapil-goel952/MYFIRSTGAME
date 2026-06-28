cmake_minimum_required(VERSION 3.20)

project(MyFirstGame)

set(CMAKE_CXX_STANDARD 17)

find_package(glfw3 CONFIG REQUIRED)
find_package(OpenGL REQUIRED)
find_package(glad CONFIG REQUIRED)

add_executable(MyFirstGame
    src/main.cpp
)

target_link_libraries(MyFirstGame
    PRIVATE
    glfw
    OpenGL::GL
    glad::glad
)