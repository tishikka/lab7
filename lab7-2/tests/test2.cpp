#include <cassert >
#include "../grid.h"

void test_correct() {
    assert(canReachInTime(0, 0, 5, 5, 9) == false);
}

int main() {
    test_correct();
}