#include <gtest/gtest.h>
#include "util.hpp"

TEST(AddTest, BasicAssertions) {
    EXPECT_EQ(add(2,3), 5);
}

