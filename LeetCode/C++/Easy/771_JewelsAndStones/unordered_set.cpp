#include <unordered_set>
#include <string>

using namespace std;

// time complexity - O(n) where n is length of string stones
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<int> set(jewels.begin(), jewels.end());
        
        int count = 0;
        for(char i : stones) {
            count += set.count(i);
        }
        
        return count;
    }
};
