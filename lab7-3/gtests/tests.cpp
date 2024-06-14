#include <gtest/gtest.h>
#include "calculator.h"

TEST(Test1, first) {
    ASSERT_EQ(calculator("x+2x+1-2=6+x-1"), "x=3");
}
TEST(Test2, second) {
    ASSERT_EQ(calculator("x+2=x-2+3"), "NO");
}
TEST(Test3, third) {
    ASSERT_EQ(calculator("2x+3=5+x+2+x-4"), "Infinite");
}