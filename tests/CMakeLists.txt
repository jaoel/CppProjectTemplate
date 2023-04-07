cmake_minimum_required(VERSION 3.22)

find_package(GTest CONFIG REQUIRED)
include(GoogleTest)

file(GLOB_RECURSE SRC_FILES "*.cpp")

add_executable(sample_tests ${SRC_FILES})
target_link_libraries(sample_tests PRIVATE
    GTest::gtest
)

gtest_discover_tests(sample_tests)