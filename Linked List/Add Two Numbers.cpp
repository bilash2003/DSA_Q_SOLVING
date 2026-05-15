#Questions
// 2. Add Two Numbers - Medium
// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.
// You may assume the two numbers do not contain any leading zero, except the number 0 itself.
// Example 1:
// Input: l1 = [2,4,3], l2 = [5,6,4]
// Output: [7,0,8]
// Explanation: 342 + 465 = 807.
// Example 2:
// Input: l1 = [0], l2 = [0]
// Output: [0]
// Example 3:
// Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
// Output: [8,9,9,9,0,0,0,1]

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // by only linked list
        ListNode *res=new ListNode(0);
        ListNode *t=res;
        int q=0;
        while(l1 || l2 || q){ // loop run upto l1 , l2 and if q!=0
            int sum=q;
            if(l1){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2){
                sum+=l2->val;
                l2=l2->next;
            }
            q=sum/10;
            int r=sum%10;
            t->next=new ListNode(r);
            t=t->next;
        }
        return res->next;

        // //by vector and linked list.....
        // ListNode *res, *p, *last, *t1 = l1, *t2 = l2;
        // vector<int> v;
        // while (t1 || t2) {
        //     int n = 0;
        //     if (t1) {
        //         n += t1->val;
        //         t1 = t1->next;
        //     }
        //     if (t2) {
        //         n += t2->val;
        //         t2 = t2->next;
        //     }
        //     v.push_back(n);
        // }
        // int q = 0;
        // for (int i = 0; i < v.size(); i++) {
        //     v[i]=v[i]+q;
        //     q = v[i] / 10;
        //     v[i]=v[i]%10;
        // }
        // if (q != 0)
        //     v.push_back(q);
        // res = new ListNode;
        // res->val = v[0];
        // p = res;
        // for (int i = 1; i < v.size(); i++) {
        //     last = new ListNode;
        //     last->val = v[i];
        //     p->next = last;
        //     p = last;
        // }
        // return res;

    }
};
