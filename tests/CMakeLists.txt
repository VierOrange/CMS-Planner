# Define the libraries to be linked
set(TEST_LIBS gtest gtest_main pthread)

# List of test files
file(GLOB TEST_FILES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

# Add test executables for all files in TEST_FILES
foreach(test_file ${TEST_FILES})
		get_filename_component(test_name ${test_file} NAME_WE)  # Get filename without extension
		string(REPLACE "test_" "" class_name ${test_name}) # Get class name without test_
		add_executable(${test_name} ${test_file})               # Add executable for each test

		target_link_libraries(${test_name} ${TEST_LIBS} ${class_name})        # Link common libraries
		target_include_directories(${test_name} PRIVATE
				${CMAKE_SOURCE_DIR}/src/${class_name}/include
		)

		add_test(NAME ${test_name} COMMAND ${test_name})        # Register the test
		message(STATUS "Added test: ${test_name} for class: ${class_name}")
endforeach()

