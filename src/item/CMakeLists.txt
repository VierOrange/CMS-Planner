# Specify the library as a target.
add_library(item
		src/item.cpp
)

# Specify the include directories for this target.
target_include_directories(item
		PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}/include
)

