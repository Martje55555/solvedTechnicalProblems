#include <stack>
#include <string>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        if(s.length() == 1) return false;
        stack<char> stck;
        for(char c : s) {
           if(c == '(' || c == '{' || c == '[') stck.push(c);
           else {
               if(stck.empty() || c == ')' && stck.top() != '(') return false;
               if(stck.empty() || c == '}' && stck.top() != '{') return false;
               if(stck.empty() || c == ']' && stck.top() != '[') return false;
               stck.pop();
           }
        }
        if(stck.empty()) return true;
        return false;
    }
};