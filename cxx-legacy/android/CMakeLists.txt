cmake_minimum_required(VERSION 3.13)

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_CXX_STANDARD 17)

# Define the library name here.
project(cpp)

include(Android-prebuilt.cmake)

add_library(${CMAKE_PROJECT_NAME}
    SHARED
        ../cpp/react-native-cxx-legacy.cpp
)

# Specifies a path to native header files.
target_include_directories(${CMAKE_PROJECT_NAME}
    PRIVATE
        ../cpp
)

target_link_libraries(${CMAKE_PROJECT_NAME}
        folly_runtime
        common_flags
        react_nativemodule_core
)

target_compile_options(${CMAKE_PROJECT_NAME}
    PRIVATE
        -Wpedantic
        -Wno-gnu-zero-variadic-macro-arguments
)
