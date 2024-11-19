cmake_minimum_required(VERSION 3.10)
project(thirdLesson)

set(CMAKE_CXX_STANDARD 14)
find_package(Matplot++ REQUIRED)

add_executable(bigOnotation testWithSort.cpp)
target_link_libraries(bigOnotation PUBLIC Matplot++::matplot)
