cmake_minimum_required(VERSION 3.16)

project(congential-system VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 17)

enable_testing()
add_subdirectory(test)

add_library(
  util
  src/util.cpp
  include/util.hpp
)
target_include_directories(util PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/include")

add_executable(
  start
  src/main.cpp
  include/util.hpp
)
target_link_libraries(start util)
target_include_directories(util PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/include")