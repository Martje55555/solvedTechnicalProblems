#include "iomanip";
#include "cmath";
#include "math.h";

using namespace std;

class Solution {
public:
    int reverse(int x) {
        
        if(x == 0) return x;
        int answer = 0;
        while(x) {
            
            if(answer > INT_MAX/10 || answer < INT_MIN/10) return 0;
            
            answer = answer * 10 + x % 10;
            x /= 10;
        }
        return answer;
    }
};