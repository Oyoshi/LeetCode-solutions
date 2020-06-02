#include<bits/stdc++.h>

class Solution {
public:
    bool isPalindrome(int x) {
        return x < 0 ? false : x == revertInt(x);
    }
    
    int revertInt(int x) {
        auto rev = 0;
        while (x != 0) {
            auto digit = x % 10;
            x /= 10;
            if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && digit > 7)) {
                return 0;   
            }
            else if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && digit < -8)) {
                return 0;
            }
            rev = rev * 10 + digit;
        }
        return rev;
    }
};