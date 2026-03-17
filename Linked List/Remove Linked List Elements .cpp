#question leetcode 
// 203. Remove Linked List Elements - Easy
// Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.
// Example 1:
// Input: head = [1,2,6,3,4,5,6], val = 6
// Output: [1,2,3,4,5]
// Example 2:
// Input: head = [], val = 1
// Output: []
// Example 3:
// Input: head = [7,7,7,7], val = 7
// Output: []

#Solution
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
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *p, *q;
        if (!head)
            return nullptr;
        while (head && head->val == val) {
            head = head->next;
        }
        p = head;
        q = nullptr;
        while (p) {
            if (p->val != val) {
                q = p;
                p = p->next;
            } else {
                q->next = p->next;
                p = q->next;
            }
        }
        return head;

        // while (p) {
        //     if (p->val != val) {
        //         q = p;
        //         p = p->next;
        //     } else {
        //         if (p->next) {
        //             q->next = p->next;
        //             p = q->next;
        //         }
        //         else{
        //             q->next=nullptr;
        //         }
        //     }
        // }
    }
};
