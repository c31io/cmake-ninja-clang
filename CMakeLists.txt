cmake_minimum_required(VERSION 3.16)

project(HelloWorld)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(include)
add_subdirectory(src)

target_include_directories(HelloWorld PRIVATE ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(HelloWorld Hello)
