#include <iostream>
#include <vector>
#include <algorithm>
#include "border.h"

std::vector <std::pair<int, int>> border(std::vector <std::pair<int, int>> vec){
    sort(vec.begin(), vec.end());
    if (vec.empty()) return {};
    int left=vec[0].first,right=vec[0].first,upper=vec[0].second,lower=vec[0].second;
    
    for (int i=0; i<(int)vec.size(); ++i){
        if (left>vec[i].first) left=vec[i].first;
        if (right<vec[i].first) right=vec[i].first;
        if (upper<vec[i].second) upper=vec[i].second;
        if (lower>vec[i].second) lower=vec[i].second;
    }
    
    std::vector <std::pair<int,int>> ans;
    
    for (int i=0; i<(int)vec.size(); ++i){
        if (vec[i].first==left || vec[i].first==right || vec[i].second==upper || vec[i].second==lower){
            ans.push_back(vec[i]);
        }
    }
    
    sort(ans.begin(), ans.end());
    return ans;
}