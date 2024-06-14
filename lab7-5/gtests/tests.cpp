#include <gtest/gtest.h>
#include "grid_traversal.h"

TEST(Test1, firsttrue) {
    ASSERT_TRUE(canReach(4,4));
}
TEST(Test2, firstfalse) {
    ASSERT_FALSE(canReach(9,6));
}
TEST(Test3, secondtrue) {
    ASSERT_TRUE(canReach(5,3));
}