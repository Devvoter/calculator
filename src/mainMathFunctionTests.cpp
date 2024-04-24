/**
 * @file mainMathFunctionTests.cpp
 * @authors {Denys Pylypenko, Adam Veselý, Eliška Křeménková, Jaroslava Comová}
*/
#include "include/main.h"

#include <gtest/gtest.h>

class TestMainFunkce : public ::testing::Test {
protected:
    
};

TEST_F(TestMainFunkce, AddTest_1) {
    EXPECT_EQ(13.4, add(10.3, 3.1));
}

TEST_F(TestMainFunkce, AddTest_2) {
    EXPECT_NEAR(-0.6, add(-2.0, 1.4), 1e-9);
}

TEST_F(TestMainFunkce, SubTest_1) {
    EXPECT_EQ(-35.0, subtract(2.0, 37.0));
}

TEST_F(TestMainFunkce, SubTest_2) {
    EXPECT_EQ(42.02, subtract(100.23, 58.21));
}

TEST_F(TestMainFunkce, SubTest_3) {
    EXPECT_EQ(-106.0, subtract(-110.0, -4.0));
}

TEST_F(TestMainFunkce, MulTest_1) {
    EXPECT_EQ(6.0, multiply(2.0, 3.0));
}

TEST_F(TestMainFunkce, MulTest_2) {
    EXPECT_EQ(-6.0, multiply(-2.0, 3.0));
}

TEST_F(TestMainFunkce, MulTest_3) {
    EXPECT_EQ(7.0, multiply(-2.0, -3.5));
}

TEST_F(TestMainFunkce, DivTest_1) {
    EXPECT_EQ(2.0, divide(6.0, 3.0));
}

TEST_F(TestMainFunkce, DivTest_2) {
    EXPECT_EQ(-2.4, divide(-6.0, 2.5));
}

TEST_F(TestMainFunkce, DivTest_3) {
    EXPECT_EQ(ERROR_DIVIDE_ZERO, divide(13.31, 0.0));
}

/*** End of file mainMathFunctionTests.cpp ***/