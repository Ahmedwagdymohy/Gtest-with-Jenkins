#include "gtest/gtest.h"
#include "calc.h"
  // Ensure this matches the location of your header file for the functions you want to test

// Test case for add function
TEST(AdditionTest, PositiveNumbers) {
    EXPECT_EQ(add(1, 1), 2);
    EXPECT_EQ(add(2, 3), 5);
    EXPECT_EQ(add(2, 8), 10);
}


