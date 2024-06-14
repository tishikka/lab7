#include "mop_logic.h"
#include <iostream>

int find_person_with_mop(int n, int time) {
    if (n == 1) return 1;
    int cycle_length = 2 * (n - 1);
    int position = time % cycle_length;
    if (position < n) {
        return position + 1;
        
    } else {
        return 2 * n - position - 1;
    }
    return 0;
}