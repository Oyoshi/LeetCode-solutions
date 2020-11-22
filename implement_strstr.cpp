#include <string>

class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        const auto needleLength = needle.size();
        if (0u == needleLength) {
            return 0;
        }
        
        const auto haystackLength = haystack.size();
        const auto firstNeedleLetter = needle[0];
        
        for (auto i=0; i<haystackLength; ++i) {
            if (i + needleLength - 1 > haystackLength) {
                return -1;
            }
            
            if (firstNeedleLetter == haystack[i]) {
                auto k = i + 1;
                auto j = 1;
                while ((j < needleLength) and (haystack[k] == needle[j])) {
                    ++j;
                    ++k;
                }
                
                if (needleLength == j) {
                    return i;
                }
            }
        }
        
        return -1;
    }
};
