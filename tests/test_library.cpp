#include <gtest/gtest.h>
#include "library.h"

TEST(LibraryAddFunction, SumsTwoInts) {
    EXPECT_EQ(library::add(2, 3), 5);
    EXPECT_EQ(library::add(-1, 1), 0);
    EXPECT_EQ(library::add(0, 0), 0);
  }

TEST(LibraryModulusOperator, ModuloTwoNums){
    ASSERT_EQ(library::modulo(10,5), 0);
}