cmake_minimum_required( VERSION 3.10)

project(test_algs LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
# gtest configuration
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
  DOWNLOAD_EXTRACT_TIMESTAMP ON
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)
enable_testing()

add_subdirectory(src)

# 第一章 欧几里得算法
add_executable(gcd src/gcd.cc)
add_executable(test_gcd test/test_gcd.cc)
set_target_properties(gcd PROPERTIES RUNTIME_OUTPUT_DIRECTORY 01)
set_target_properties(test_gcd PROPERTIES RUNTIME_OUTPUT_DIRECTORY test)



target_link_libraries(
    gcd
    algs
    GTest::gtest_main
)
target_link_libraries(
    test_gcd
    algs
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(test_gcd)