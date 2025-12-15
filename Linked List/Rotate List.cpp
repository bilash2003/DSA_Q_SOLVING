#Question
61. Rotate List - Medium
// Given the head of a linked list, rotate the list to the right by k places.
// Example 1:
// Input: head = [1,2,3,4,5], k = 2
// Output: [4,5,1,2,3]
// Example 2:
// Input: head = [0,1,2], k = 4
// Output: [2,0,1]

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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0)
            return head;
        ListNode *p = head, *t = nullptr, *last = nullptr, *node;
        int len = 0;
        while (p) {
            len++;
            p = p->next;
        }
        p = head;
        k = k % len; //fix tle error
        if (k == 0)
            return head;
        int i = 0;
        while (i < k) {
            last = p;
            t = nullptr;
            while (last->next) {
                t = last;
                last = last->next;
            }
            t->next = nullptr;
            last->next = p;
            p = last;
            i++;
        }
        return p;
    }
};

  
