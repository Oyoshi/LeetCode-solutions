#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        const auto length = nums.size();
        if (length == 0) {
            return 0;
        }
        auto i = 0u;
        for (auto j = 1u; j < length; ++j) {
            if (nums[i] != nums[j]) {
                nums[++i] = nums[j];
            }
        }
        return i + 1;
    }
};
