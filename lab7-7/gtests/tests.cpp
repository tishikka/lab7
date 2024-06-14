#include <gtest/gtest.h>
#include "task7.h"

TEST(Test1, first) {
    ASSERT_EQ(task7(3), 3);
}
TEST(Test2, second) {
    ASSERT_EQ(task7(10), 8);
}
TEST(Test3, third) {
    ASSERT_EQ(task7(12), 8);
}