#include <gtest/gtest.h>
#include "time_utils.h"

TEST(Test1, first) {
    ASSERT_EQ(timeDifference({"15:40", "14:30"}), 70);
}
TEST(Test2, second) {
    ASSERT_EQ(timeDifference({"09:00", "12:45", "14:30", "18:15"}), 105);
}
TEST(Test3, third) {
    ASSERT_EQ(timeDifference({"18:15", "17:15", "16:00"}), 60);
}