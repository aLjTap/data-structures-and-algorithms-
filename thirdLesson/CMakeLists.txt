cmake_minimum_required(VERSION 3.10)
project(thirdLesson)

set(CMAKE_CXX_STANDARD 14)
find_package(Matplot++ REQUIRED)

add_executable(thirdLesson testWithSort.cpp)
target_link_libraries(thirdLesson PUBLIC Matplot++::matplot)
