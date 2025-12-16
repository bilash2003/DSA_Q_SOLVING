#Question
82. Remove Duplicates from Sorted List II - Medium
// Given the head of a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list. Return the linked list sorted as well.
// Example 1:
// Input: head = [1,2,3,3,4,4,5]
// Output: [1,2,5]
// Example 2:
// Input: head = [1,1,1,2,3]
// Output: [2,3]

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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head || !head->next)
            return head;
        ListNode *p = head, *q = head;
        ListNode* r = new ListNode(0);
        ListNode* t = r;
        // my codee.......100%
        while (p->next) {
            p = p->next;
            if (q->val != p->val) {
                t->next = q;
                t = q;
                q = p;
            } else {
                int n = p->val;
                while (p && p->val == n) {
                    p = p->next;
                }
                q = p;
                if (!p)
                    break;
            }
        }
        if (q && t->val != q->val) {
            ListNode* a = q;
            t->next = a;
            t = a;
        }
        t->next = nullptr;
        return r->next;

        // //help....
        // while (p) {
        //     bool duplicate = false;

        //     // move p while duplicates exist
        //     while (p->next && p->val == p->next->val) {
        //         duplicate = true;
        //         p = p->next;
        //     }

        //     // if q is NOT duplicate, add it to result
        //     if (!duplicate) {
        //         t->next = q;
        //         t = q;
        //     }

        //     // move forward
        //     p = p->next;
        //     q = p;
        // }

        // // terminate list
        // t->next = nullptr;

        // return r->next;
    }
};
