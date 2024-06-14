#include <cassert >
#include "../grid.h"

void test_correct() {
    assert(canReachInTime(0, 0, 3, 3, 6) == true);
}

int main() {
    test_correct();
}
