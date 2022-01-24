cmake_minimum_required(VERSION 3.16)

project(congential-system VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_library(
  util
  src/util.cpp
  include/util.hpp
)

target_include_directories(
  util PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/include"
)

include(GoogleTest)
gtest_discover_tests(util)
