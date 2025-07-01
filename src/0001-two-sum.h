#include <vector>

std::vector<int> twoSum(const std::vector<int>& nums, int target) {
    for (size_t i=0; i < nums.size(); ++i) {
        for (size_t j=0; j < nums.size(); ++j) {
            if (i!=j && nums[i] + nums[j] == target) {
                return std::vector<int>{static_cast<int>(i), static_cast<int>(j)};
            }
        }
    }
    return std::vector<int>{};
}
