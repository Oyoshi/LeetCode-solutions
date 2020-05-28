#include <vector>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        auto i = 0u;
        const auto length = nums.size();
        for (auto j = 0u; j < length; ++j) {
            if (nums[j] != val) {
                nums[i++] = nums[j];
            }
        }
        return i;
    }
    
    /*
     * Alternative solution which uses STL algorithm
     * int removeElement(vector<int>& nums, int val) {
     *     return std::distance(nums.begin(), std::remove(nums.begin(), nums.end(), val));
     * }
     */
};