#include <vector>
#include <algorithm>

class Solution {
public:    
     int removeDuplicates(std::vector<int>& nums) {
        return std::distance(nums.begin(), nums.erase(std::unique(nums.begin(), nums.end()), nums.end()));
     }
};
