#include "grid.h"
#include <cmath>

bool canReachInTime(int sx, int sy, int fx, int fy, unsigned int t) {
    int dx = std::abs(fx - sx);
    int dy = std::abs(fy - sy);
    int min_steps = dx + dy;
    int extra_steps = t - min_steps;
    return t >= (min_steps && extra_steps % 2 == 0);
}