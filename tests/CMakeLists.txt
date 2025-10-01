# tests/CMakeLists.txt
include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.15.2
)
FetchContent_MakeAvailable(googletest)
include(GoogleTest)



add_executable(test_library test_library.cpp)

target_link_libraries(test_library PRIVATE GTest::gtest_main library)

target_include_directories(test_library PRIVATE ${CMAKE_SOURCE_DIR}/include)

gtest_discover_tests(test_library)
