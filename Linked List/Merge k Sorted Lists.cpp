#Question
// 23. Merge k Sorted Lists - Hard
// You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.
// Merge all the linked-lists into one sorted linked-list and return it.
// Example 1:
// Input: lists = [[1,4,5],[1,3,4],[2,6]]
// Output: [1,1,2,3,4,4,5,6]
// Explanation: The linked-lists are:
// [
//   1->4->5,
//   1->3->4,
//   2->6
// ]
// merging them into one sorted linked list:
// 1->1->2->3->4->4->5->6
//   Example 2:
// Input: lists = []
// Output: []
// Example 3:
// Input: lists = [[]]
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> v;
        for (auto l : lists) {
            while (l) {
                v.push_back(l->val);
                l = l->next;
            }
        }
        if (v.empty())
            return nullptr;
        sort(v.begin(), v.end());
        ListNode *res, *t, *p;
        res = new ListNode;
        res->val = v[0];
        p = res;
        for (int i = 1; i < v.size(); i++) {
            t = new ListNode;
            t->val = v[i];
            p->next = t;
            p = t;
        }
        return res;
    }
};
