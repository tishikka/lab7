#include <cassert >
#include <iostream >

#include "mop_logic.h"

void test_correct() {
    assert(find_person_with_mop(5,3) == 4);
}

void test_incorrect() {
    assert(!find_person_with_mop(5,0) == 0);
}

void test_skip_spaces() {
    assert(find_person_with_mop(5,4) == 5);
}

int main() {
std::cout << "test_correct..." << std::flush;
test_correct();
std::cout << "OK" << std::endl;

std::cout << "test_incorrect..." << std::flush;
test_incorrect();
std::cout << "OK" << std::endl;

std::cout << "test_skip_spaces..." << std::flush;
test_skip_spaces();
std::cout << "OK" << std::endl;
}
