#include "iostream"
#include "iomanip"
#include <vector>

using namespace std;

//time complexity: O(S)
//space complexity: O(1)
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0)
        {
            return "";
        }

        string pre = strs[0];
        for (int i = 1; i < strs.size(); ++i)
        {
            while (strs[i].find(pre) != 0)
            {
                pre = pre.substr(0, pre.size() - 1);
            }
            if (pre.size() == 0)
            {
                return "";
            }
        }
        return pre;

    }
};