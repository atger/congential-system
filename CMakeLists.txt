cmake_minimum_required(VERSION 3.16)

project(congential-system VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 17)

enable_testing()
add_subdirectory(test)

file(GLOB HEADER_LIST "${PROJECT_SOURCE_DIR}/include/*.hpp")

add_library(
  util
  src/util.cpp
  src/seq.cpp
  ${HEADER_LIST}
)
target_include_directories(util PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/include")
message(${HEADER_LIST})
add_executable(
  start
  src/main.cpp
  ${HEADER_LIST}
)
target_link_libraries(start util)
target_include_directories(util PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")