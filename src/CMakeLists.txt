# library
add_library(periodicDailyReturn SHARED periodicDailyReturn.cpp)
target_include_directories(periodicDailyReturn PUBLIC ${CMAKE_SOURCE_DIR}/include)

# executable
add_executable(main main.cpp)
target_link_libraries(main PRIVATE periodicDailyReturn)