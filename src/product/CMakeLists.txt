# Specify the library as a target.
add_library(product
		src/product.cpp
)

# Specify the include directories for this target.
target_include_directories(product
		PUBLIC
		${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_link_libraries(product
		PUBLIC
		item)
