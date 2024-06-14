#include <gtest/gtest.h>
#include "calculator.h"

TEST(Test1, easy) {
    ASSERT_EQ(calculator("2+5-(5+2+4)+5-3"), -2);
}
TEST(Test2, hard) {
    ASSERT_EQ(calculator("-(((2)))-(-3+1-5)+3"), 8);
}
TEST(Test3, space) {
    ASSERT_EQ(calculator("- ( - 1 ) + 1   + (- 1)  + 1"), 2);
}