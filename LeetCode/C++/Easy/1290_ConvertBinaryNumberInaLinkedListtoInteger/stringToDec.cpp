/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     int getDecimalValue(ListNode* head) {
//         string list = "";
//         int answer;
//         ListNode* temp = head;
//         while(temp != NULL) {
//             list += to_string(temp->val);
//             temp = temp->next;
//         }
//         reverse(list.begin(), list.end());
//         for(int i = 0; i < list.size(); i++) {
//             if(list[i] == '1') answer += pow(2,i);
//         }
//         return answer;
//     }
// };