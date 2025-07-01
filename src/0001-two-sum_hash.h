#pragma once

#include <vector>
#include <unordered_map>

std::vector<int> twoSum_hash(const std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numbers{};

    for (int i=0; i < static_cast<int>(nums.size()); ++i) {
        numbers.insert({nums[static_cast<size_t>(i)], i});
    }

    for (int i=0; i < static_cast<int>(nums.size()); ++i) {
        const int diff  = target - nums[static_cast<size_t>(i)];
        const auto iter = numbers.find(diff);
        if (iter != numbers.cend() && iter->second != i) {
            return std::vector<int>{static_cast<int>(i), iter->second};
        }
    }
    return std::vector<int>{};
}
