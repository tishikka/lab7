#include <cassert >
#include "../grid.h"

void test_correct() {
    assert(canReachInTime(0, 0, 5, 5, 9) == true);
}

int main() {
    test_correct();
}