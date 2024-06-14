#include "grid_traversal.h"
#include <algorithm>

bool canReach(unsigned int fx, unsigned int fy) {
    int x=std::__gcd(fx, fy);
    int cnt=0;
    for (int i=0; x>0; ++i){
        if ((x&1)==1) cnt++;
        x/=2;
    }
    if (cnt==1) return true;
    else return false;
}