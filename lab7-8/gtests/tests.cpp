#include <gtest/gtest.h>
#include "border.h"

TEST(Test1, bush1) {
    std::vector< std::pair< int, int > > vec1{ {3,4} };
    std::vector< std::pair< int, int > > vec2{ {3,4} };
    ASSERT_EQ(border(vec1), vec2);
}
TEST(Test2, bush3) {
    std::vector< std::pair< int, int > > vec1{ {2,2}, {1,1}, {3,3}};
    std::vector< std::pair< int, int > > vec2{ {1,1}, {3,3} };
    ASSERT_EQ(border(vec1), vec2);
}
TEST(Test3, bush5) {
    std::vector< std::pair< int, int > > vec1{ {1,1},{3,1},{3,3},{2,2},{1,3} };
    std::vector< std::pair< int, int > > vec2{ {1,1},{1,3},{3,1},{3,3} };
    ASSERT_EQ(border(vec1), vec2);
}