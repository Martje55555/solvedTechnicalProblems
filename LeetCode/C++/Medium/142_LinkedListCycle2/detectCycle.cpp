/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     ListNode *detectCycle(ListNode *head) {
//         if(head == NULL) return NULL;
//         ListNode* tortoise = head;
//         ListNode* hare = head;
//         ListNode* temp = head;
//         while(hare->next != NULL && hare->next->next != NULL) {
//             tortoise = tortoise->next;
//             hare = hare->next->next;
//             if(tortoise == hare) {
//                 while(tortoise != temp) {
//                     tortoise = tortoise->next;
//                     temp = temp->next;
//                 }
//                 return temp;
//             }
//         }
//         return NULL;
//     }
// };