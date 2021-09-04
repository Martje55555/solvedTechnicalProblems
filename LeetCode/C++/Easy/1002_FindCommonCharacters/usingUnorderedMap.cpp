#include <vector>
#include <unordered_map>
#include <string>
#include <array>

using namespace std;

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<int, array<int, 100>> map;
        vector<string> answer;
        
        for(int i = 0; i < words.size(); i++) {
            for(int j = 0; j < words[i].size(); j++) {
                map[words[i][j]][i]++;
            }
        }
        
        int count = 0;
        
        for(auto x : map) {
            count = INT_MAX;
            
            for(int i = 0; i < words.size(); i++) {
                if(x.second[i] < count) count = x.second[i];
            }
            
            string s(1, x.first);
            for(int i = 0; i < count; i++) {
                answer.push_back(s);
            }
        }
        return answer;
    }
};