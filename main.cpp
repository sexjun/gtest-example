#include <iostream>
#include <gtest/gtest.h>

int add(int a, int b) {
    return a + b;
}

TEST(group_1, add_1) {
    // 测试代码
    EXPECT_EQ(add(1, 2), 4);
}

TEST(group_2, g_1) {
    // 测试代码
    EXPECT_NE(add(1, 2), 4);
}

TEST(group_2, g_2) {
    EXPECT_EQ(add(2, 2), 4);
    // 测试代码
}

int main(int, char**) {
    ::testing::InitGoogleTest();
    std::cout << "Hello, world!\n";
    return RUN_ALL_TESTS();
}
