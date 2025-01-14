cmake_minimum_required(VERSION 3.10)

# Project name
project(CMSP)

# Enable testing
enable_testing()

# Add Google Test (Vendored or system-wide)
find_package(GTest REQUIRED)

# Define the libraries to be linked
set(TEST_LIBS gtest gtest_main pthread)

# List of test files
file(GLOB TEST_FILES "tests/*.cpp")

# Add test executables for all files in TEST_FILES
foreach(test_file ${TEST_FILES})
		get_filename_component(test_name ${test_file} NAME_WE)  # Get filename without extension
		add_executable(${test_name} ${test_file})               # Add executable for each test
		target_link_libraries(${test_name} ${TEST_LIBS})        # Link common libraries
		add_test(NAME ${test_name} COMMAND ${test_name})        # Register the test
endforeach()
