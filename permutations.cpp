#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> permute(std::vector<int>& nums) {        
        std::vector<std::vector<int>> res{nums};
        const std::size_t numsSize = nums.size();
        std::vector<std::size_t> stackState(numsSize, 0u);
        
        std::size_t i = 0u;
        while (i < numsSize) {
            if (stackState[i] < i) {
                if (i%2 == 0u) {
                    std::swap(nums[0], nums[i]);   
                }
                else {
                    std::swap(nums[stackState[i]], nums[i]);
                }
                res.push_back(nums);
                stackState[i] += 1u;
                i = 0u;
            }
            else {
                stackState[i] = 0u;
                i += 1u;
            }
        }
        
        return res;
    }
};
