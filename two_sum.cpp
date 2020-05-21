#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        auto dict = std::unordered_map<int, int>();
        for (int i = 0; i < nums.size(); ++i) {
            const auto complement = target - nums[i];
            if (dict.count(complement) != 0u) {
                return std::vector<int>{i, dict[complement]};
            }
            dict[nums[i]] = i;
        }
        return std::vector<int>{};
    }
};
