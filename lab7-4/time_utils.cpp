#include "time_utils.h"
#include <algorithm>
#include <iostream>

int timeDifference(const std::vector<std::string>& times) {
    std::vector<int> minutes;

    for (const auto& timeStr : times) {
        int hour = std::stoi(timeStr.substr(0, 2));
        int minute = std::stoi(timeStr.substr(3, 2));
        minutes.push_back(hour * 60 + minute);
    }

    std::sort(minutes.begin(), minutes.end());

    int minDiff = INT_MAX;
    for (size_t i = 1; i < minutes.size(); ++i) {
        minDiff = std::min(minDiff, minutes[i] - minutes[i - 1]);
    }

    return minDiff;
}