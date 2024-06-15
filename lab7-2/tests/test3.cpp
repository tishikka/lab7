#include <cassert >
#include "../grid.h"

void test_skip_spaces() {
    assert(canReachInTime(0, 0, 3, 6, 5) == false);
}

int main() {
    test_skip_spaces();
}