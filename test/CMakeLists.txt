cmake_minimum_required(VERSION 3.16)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

file(GLOB HEADER_LIST "${PROJECT_SOURCE_DIR}/include/*.hpp")
file(GLOB SOURCE_LIST "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

add_executable(
  util_test
  ${SOURCE_LIST}
  ${HEADER_LIST}
)

target_link_libraries(util_test util gtest_main)
target_include_directories(util_test PRIVATE "${PROJECT_SOURCE_DIR}/include")

include(GoogleTest)
gtest_discover_tests(util_test)
