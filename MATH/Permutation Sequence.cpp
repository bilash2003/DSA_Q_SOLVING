#Question
// The set [1, 2, 3, ..., n] contains a total of n! unique permutations. By listing and labeling all of the permutations in order, we get the following sequence 
// for n = 3:
// "123"
// "132"
// "213"
// "231"
// "312"
// "321"
// Given n and k, return the kth permutation sequence.
// Example 1:
// Input: n = 3, k = 3
// Output: "213"
// Example 2:
// Input: n = 4, k = 9
// Output: "2314"
// Example 3:
// Input: n = 3, k = 1
// Output: "123"
 
//   Constraints:

// 1 <= n <= 9
// 1 <= k <= n!

#Solve..
class Solution {
public:
    string getPermutation(int n, int k) {
        int num = 0;
        vector<int> v;
        int i = 1;
        while (i <= n) {
            v.push_back(i);
            i++;
        }
        vector<long long> res;
        do {
            long long s = 0;
            for (auto i : v) {
                s = s * 10 + i;
            }
            res.push_back(s);
        } while (next_permutation(v.begin(), v.end()));
        if (k >= 1 && k <= res.size()) {
            long long m = res[k - 1];
            string s = to_string(m);
            return s;
        } else
            return "";
    }
};
