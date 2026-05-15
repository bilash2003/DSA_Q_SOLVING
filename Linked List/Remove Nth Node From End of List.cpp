#Questions
// 19. Remove Nth Node From End of List - Medium
// Given the head of a linked list, remove the nth node from the end of the list and return its head.
// Example 1:
// Input: head = [1,2,3,4,5], n = 2
// Output: [1,2,3,5]
// Example 2:
// Input: head = [1], n = 1
// Output: []
// Example 3:
// Input: head = [1,2], n = 1
// Output: [1]

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *t, *p = head;
        int len = 0;
        while (p) {
            len++;
            p = p->next;
        }
        p = head;
        t = nullptr;
        int i = 0;
        while (i < (len - n)) {
            t = p;
            p = p->next;
            i++;
        }
        if(t==nullptr){
            head=head->next;
            delete p;
        }
        else {
            t->next = p->next;
            delete p;
        }
        return head;
    }
};
