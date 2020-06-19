#include<bits/stdc++.h>

class Solution {
public:
    double myPow(double x, int n) {
        if (x == 0.0) {
            return 0.0;
        }
        else if (x == 1.0) {
            return 1.0;
        }
        else if (x == -1.0) {
            return n % 2 ? -1.0 : 1.0;
        }
        else if (n == 0) {
            return 1.0;
        }
        else if (n == INT_MIN) {
            return 0.0;
        }
        
        if (n < 0) {
            x = 1.0 / x;
            n = -n;
        }
        
        double y = 1.0;
        while (n > 1) {
            if (n % 2) {
                y *= x;
                x *= x;
                n = (n - 1) / 2;
            }
            else {
                x *= x;;
                n /= 2;
            }
        }
        
        return x * y;
    }
};
