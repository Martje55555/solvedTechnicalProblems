#include "iomanip";
#include "cmath";
#include "math.h";

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return 0;
        if(x == 0) return 1;
        
        int maybePalindrome = 0;
        int num = x;
        while(x) {
            if(maybePalindrome < INT_MIN/10 || maybePalindrome > INT_MAX/10) return 0;
            maybePalindrome = maybePalindrome * 10 + x % 10;
            x /= 10;
            if(maybePalindrome == num) return 1;
        } 
        return 0;
    }
};