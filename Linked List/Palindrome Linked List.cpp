#Q 
// 234. Palindrome Linked List - Easy
// Given the head of a singly linked list, return true if it is a palindrome or false otherwise.
// Example 1:
// Input: head = [1,2,2,1]
// Output: true
// Example 2:
// Input: head = [1,2]
// Output: false
// Constraints:
// The number of nodes in the list is in the range [1, 105].
// 0 <= Node.val <= 9

#soln:
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
    bool isPalindrome(ListNode* head) {
        ListNode *t, *p;
        p = head;
        vector<int> v;
        while (p) {
            v.push_back(p->val);
            t = p;
            p = p->next;
        }
        p = head;
        reverse(v.begin(), v.end());
        int i = 0;
        while (i < v.size()) {
            if (v[i] != p->val)
                return false;
            i++;
            p = p->next;
        }
        return true;
    }
};
