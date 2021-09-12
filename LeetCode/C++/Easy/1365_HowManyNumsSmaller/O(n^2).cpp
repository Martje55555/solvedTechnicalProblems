#include <vector>

using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> answer;
        int count;
        for(int i = 0; i < nums.size(); i++) {
            count = 0;
            for(int j = 0; j < nums.size(); j++) {
                if(nums[i] > nums[j]) count++;
            }
            answer.push_back(count);
        }
        return answer;
    }
};