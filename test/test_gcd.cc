#include "algs.hpp"
#include <gtest/gtest.h>

TEST(algs, gcd) {
    EXPECT_EQ(gcd(44, 22), 22);
    EXPECT_EQ(gcd(1, 1), 1);
    EXPECT_EQ(gcd(0, 1), 1);
    EXPECT_EQ(gcd(1, 0), 1);
    EXPECT_EQ(gcd(0, 0), 0);
    EXPECT_EQ(gcd(1000, 0), 1000);
    EXPECT_EQ(gcd(100, 55), 5);
}