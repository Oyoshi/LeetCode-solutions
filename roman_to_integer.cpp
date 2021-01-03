#include <string>

class Solution {
public:
    int romanToInt(std::string s) {
        const std::size_t length = s.size();
        if (1u == length) {
            return castSymbolToValue(s[0]);
        }
        
        int res = 0;
        for (std::size_t i = 1u; i < length; i++) {
            const int currentValue = castSymbolToValue(s[i]);
            const int previousValue = castSymbolToValue(s[i-1u]);
            if (currentValue > previousValue) {
                res -= previousValue;
            }
            else {
                res += previousValue;
            }
            if (i == length - 1u) {
                res += currentValue;   
            }
        }
        
        return res;
    }
    
protected:
    constexpr int castSymbolToValue(char symbol) noexcept {
        switch (symbol) {
            case 'I' : return 1;
            case 'V' : return 5;
            case 'X' : return 10;
            case 'L' : return 50;
            case 'C' : return 100;
            case 'D' : return 500;
            case 'M' : return 1000;
            default: return -1;
        }
    }
};
