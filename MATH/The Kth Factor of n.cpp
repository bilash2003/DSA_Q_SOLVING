#Questions -Medium
#Leetcode_link:https://leetcode.com/problems/the-kth-factor-of-n/description/
// You are given two positive integers n and k. A factor of an integer n is defined as an integer i where n % i == 0.
// Consider a list of all factors of n sorted in ascending order, return the kth factor in this list or return -1 if n has less than k factors.
// Example 1:
// Input: n = 12, k = 3
// Output: 3
// Explanation: Factors list is [1, 2, 3, 4, 6, 12], the 3rd factor is 3.
// Example 2:
// Input: n = 7, k = 2
// Output: 7
// Explanation: Factors list is [1, 7], the 2nd factor is 7.

#Solution
class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> v;
        v.push_back(n);
        for (int i = 1; i <= n / 2; i++) {
            if (n % i == 0)
                v.push_back(i);
        }
        sort(v.begin(), v.end());
        if (k > v.size())
            return -1;
        else
            return v[k - 1];
    }
};
