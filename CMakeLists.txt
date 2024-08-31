cmake_minimum_required(VERSION 3.29)
project(opengl_git)

set(CMAKE_CXX_STANDARD 20)

INCLUDE_DIRECTORIES(include)
link_directories(lib)

add_executable(opengl_git main.cpp src/glad.c)

target_link_libraries(opengl_git -lopengl32 ${PROJECT_SOURCE_DIR}/lib/glfw3.dll)
