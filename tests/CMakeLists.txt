include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.15.2
)

FetchContent_MakeAvailable(googletest)

include(GoogleTest)

include_directories(${CMAKE_SOURCE_DIR}/src ${CMAKE_SOURCE_DIR}/include)

link_libraries(GTest::gtest_main)

add_executable(test_library test_library.cpp)

target_link_libraries(test_library library)

gtest_discover_tests(test_library)