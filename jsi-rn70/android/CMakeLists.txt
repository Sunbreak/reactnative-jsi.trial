cmake_minimum_required(VERSION 3.13)

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_CXX_STANDARD 17)

# Define the library name here.
project(cpp)

# This file includes all the necessary to let you build your application with the New Architecture.
include(${REACT_ANDROID_DIR}/cmake-utils/Android-prebuilt.cmake)

add_library(${CMAKE_PROJECT_NAME}
    SHARED
        ../cpp/react-native-jsi-rn70.cpp
        cpp-adapter.cpp
)

# Specifies a path to native header files.
target_include_directories(${CMAKE_PROJECT_NAME}
    PRIVATE
        ../cpp
)

target_link_libraries(${CMAKE_PROJECT_NAME}
        jsi
)