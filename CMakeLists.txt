cmake_minimum_required(VERSION 3.22)

project(sample_project CXX)

include(CTest)

add_subdirectory(src)

if (BUILD_TESTING)
    enable_testing()
    add_subdirectory(tests)
endif()