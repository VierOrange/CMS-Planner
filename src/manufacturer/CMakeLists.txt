# Specify the library as a target.
add_library(manufacturer
		src/manufacturer.cpp
)

# Specify the include directories for this target.
target_include_directories(manufacturer
		PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Specify the library needed.
target_link_libraries(manufacturer
		PUBLIC
		product)
