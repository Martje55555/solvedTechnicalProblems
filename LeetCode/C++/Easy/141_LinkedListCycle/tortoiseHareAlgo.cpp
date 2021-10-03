// using namespace std;

// // Definition for singly-linked list.

// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
// };
 
// class Solution {
// public:
//     // tortoise and hare algorithm
//     bool hasCycle(ListNode *head) {
//         if(head == NULL) return false;
//         ListNode* tortoise = head;
//         ListNode* hare = head;
//         while(hare->next != NULL && hare->next->next != NULL) {
//             tortoise = tortoise->next;
//             hare = hare->next->next;
//             if(hare == tortoise) return true;
//         }
//         return false;
//     }
// };