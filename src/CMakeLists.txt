# Create libraries
add_library(periodicDailyReturn SHARED periodicDailyReturn.cpp)
add_library(drift SHARED drift.cpp)

# Include directories for both
target_include_directories(periodicDailyReturn PUBLIC ${CMAKE_SOURCE_DIR}/include)
target_include_directories(drift PUBLIC ${CMAKE_SOURCE_DIR}/include)

# Link both libraries to the executable
add_executable(main main.cpp)
target_link_libraries(main PRIVATE periodicDailyReturn drift)
