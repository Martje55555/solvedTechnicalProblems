#include <vector>

using namespace std;


// solution is O(n) linear, as it has to iterate through
// each element in the array.

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++) {
            ans.push_back(nums[nums[i]]);
        }
        return ans;
    }
};