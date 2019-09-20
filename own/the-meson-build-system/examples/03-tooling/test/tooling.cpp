#include <gtest/gtest.h>

#include "tooling.hpp"

TEST(tooling, hello) {
    ASSERT_EQ(tooling::hello(), "Hello, world!");
    ASSERT_STREQ(tooling::hello().c_str(), "Hello, world!");
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
