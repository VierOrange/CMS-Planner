# Specify the library as a target.
add_library(ore
		src/ore.cpp
)

# Specify the include directories for this target.
target_include_directories(ore
		PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}/include
)
target_link_libraries(ore
		PUBLIC
		item)
