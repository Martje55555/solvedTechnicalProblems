#include "iostream";
#include "iomanip";
#include "vector";

using namespace std;

// First Solution
// O(n^2)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;

        for(int i = 0; i < nums.size(); i++) {
            for(int j = 0; j < nums.size() && j != i; i++) {
                if(nums[i] + nums[j] == target) {
                    answer.push_back(i);
                    answer.push_back(j);
                    return answer;
                }
            }
        }
        return answer;
    }
};

//Follow up todo:
// comeup with Less than O(n^2) solution
