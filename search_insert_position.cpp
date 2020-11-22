#include <vector>

class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        
        while (left <= right) {
            const auto mid = (left + right) / 2u;
            if (target == nums[mid]) {
                return mid;
            }
            else if (target < nums[mid]) {
                right = mid - 1u;
            }
            else {
                left = mid + 1u;
            }
        }
        
        return left;
    }
};
