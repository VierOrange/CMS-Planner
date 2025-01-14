cmake_minimum_required(VERSION 3.10)

# Project name
project(cmsp)

# Enable autocomplete
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Subdirectories for source code
add_subdirectory(src)

# Enable testing
enable_testing()

# Add the tests subdirectory
add_subdirectory(tests)

# Add Google Test (Vendored or system-wide)
find_package(GTest REQUIRED)


