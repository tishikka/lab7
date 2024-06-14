#include <cassert >
#include "../grid.h"

void test_skip_spaces() {
    assert(canReachInTime(2, 2, 2, 2, 0) == true);
}

int main() {
    test_skip_spaces();
}