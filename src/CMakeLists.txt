include_directories(${CMAKE_SOURCE_DIR}/include)
add_library(library SHARED library.cpp)
add_executable(library_driver main.cpp)

target_link_libraries(library_driver library)

# add_executable(some_binary some_source.cpp)