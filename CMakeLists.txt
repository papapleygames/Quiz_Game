cmake_minimum_required(VERSION 3.10)
project(Quiz_Game)

set(CMAKE_CXX_STANDARD 17)

# Find SFML
find_package(SFML 2.5 REQUIRED graphics window system)

include_directories(include)

add_executable(Quiz_Game src/main.cpp)

target_link_libraries(Quiz_Game sfml-graphics sfml-window sfml-system)
