#include "include/main.h"

#include <gtest/gtest.h>

class TestMainFunkce : public ::testing::Test {
protected:
    
};

TEST_F(TestMainFunkce, FacTest_1) {
    EXPECT_EQ(1.0, factorial(0.0));
}

TEST_F(TestMainFunkce, FacTest_2) {
    EXPECT_EQ(5040.0, factorial(7.0));
}

TEST_F(TestMainFunkce, FacTest_3) {
    ASSERT_EQ(ERROR_VALUE, factorial(-2.0));
}

TEST_F(TestMainFunkce, ExpTest_1) {
    EXPECT_EQ(1024, exponent(2.0, 10.0));
}

TEST_F(TestMainFunkce, ExpTest_2) {
    EXPECT_EQ(1.0, exponent(10000.0, 0.0));
}

TEST_F(TestMainFunkce, ExpTest_3) {
    EXPECT_EQ(ERROR_VALUE, exponent(100.0, -1.0));
}

TEST_F(TestMainFunkce, AbsTest_1) {
    EXPECT_EQ(10.0, absolute(10));
}

TEST_F(TestMainFunkce, AbsTest_2) {
    EXPECT_EQ(0.1, absolute(-0.1));
}

TEST_F(TestMainFunkce, AbsTest_3) {
    EXPECT_EQ(10.0, absolute(-10.0));
}

TEST_F(TestMainFunkce, SignTest_1) {
    EXPECT_EQ(-10.0, sign(10));
}

TEST_F(TestMainFunkce, SignTest_2) {
    EXPECT_EQ(0.1, sign(-0.1));
}

TEST_F(TestMainFunkce, SignTest_3) {
    EXPECT_EQ(10.5, sign(-10.5));
}

TEST_F(TestMainFunkce, InverseTest_1) {
    EXPECT_EQ(0.5, inverse(2.0));
}

TEST_F(TestMainFunkce, InverseTest_2) {
    EXPECT_EQ(-0.5, inverse(-2.0));
}

TEST_F(TestMainFunkce, InverseTest_3) {
    EXPECT_EQ(ERROR_DIVIDE_ZERO, inverse(0.0));
}

TEST_F(TestMainFunkce, ModTest_1) {
    EXPECT_EQ(10.0, modulo(10.0, 20.0));
}

TEST_F(TestMainFunkce, ModTest_2) {
    EXPECT_EQ(-17.0, modulo(-117.0, 100.0));
}

TEST_F(TestMainFunkce, ModTest_3) {
    EXPECT_EQ(17.0, modulo(117.0, -100.0));
}

TEST_F(TestMainFunkce, RooTest_1) {
    EXPECT_EQ(2.0, root(4.0, 2.0));
}

TEST_F(TestMainFunkce, RooTest_2) {
    EXPECT_EQ(4.0, root(4.0, 1.0));
}

TEST_F(TestMainFunkce, RooTest_3) {
    EXPECT_EQ(ERROR_VALUE, root(4.0, 0.0));
}

TEST_F(TestMainFunkce, RooTest_4) {
    EXPECT_EQ(ERROR_VALUE, root(-25.0, 2.0));
}

TEST_F(TestMainFunkce, RooTest_5) {
    EXPECT_EQ(-2.0, root(-8.0, 3.0));
}