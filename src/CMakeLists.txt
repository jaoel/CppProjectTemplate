cmake_minimum_required(VERSION 3.22)

find_package(glfw3 REQUIRED)

file(GLOB_RECURSE SRC_FILES "*.cpp")

add_executable(sample ${SRC_FILES})
target_compile_features(sample PRIVATE cxx_std_20)

target_link_libraries(sample PRIVATE
    glfw
)