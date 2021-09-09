#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0, max;
        for(int i = 0; i < accounts.size(); i++) {
            max = 0;
            for(int j = 0; j < accounts[i].size(); j++) {
                max += accounts[i][j];
            }
            ans = std::max(max, ans);
        }
        return ans;
    }
};