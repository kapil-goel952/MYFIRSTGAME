cmake_minimum_required(VERSION 3.20)

project(
    MyFirstGame
    VERSION 1.0.0
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package(glfw3 CONFIG REQUIRED)
find_package(glad CONFIG REQUIRED)
find_package(OpenGL REQUIRED)

add_executable(MyFirstGame
    src/main.cpp
)

target_link_libraries(MyFirstGame
    PRIVATE
        glfw
        glad::glad
        OpenGL::GL
)