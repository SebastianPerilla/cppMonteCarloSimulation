include_directories(${CMAKE_SOURCE_DIR}/include)
add_library(library SHARED library.cpp)
add_executable(main main.cpp)

target_link_libraries(main library)

# add_executable(some_binary some_source.cpp)