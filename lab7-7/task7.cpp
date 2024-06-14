#include <iostream>
#include <cmath>
#include "task7.h"

int doptask7(int x){
    for (int i=0; i<(int)(log(x)/log(2))+1; ++i){
        if ( ( ((x>>i)&1)==1 ) && ( ((x>>(i+1))&1)==1) ) return 0;
    } return 1;
}

int task7(int n){
    int ans=0;
    for (int i=0; i<n+1; ++i){
        ans+=doptask7(i);
    } return ans;
}