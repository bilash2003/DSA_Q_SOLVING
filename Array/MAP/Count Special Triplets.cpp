#Questions - Medium
// You are given an integer array nums. A special triplet is defined as a triplet of indices (i, j, k) such that: 0 <= i < j < k < n, where n = nums.length
// nums[i] == nums[j] * 2 ;  nums[k] == nums[j] * 2 Return the total number of special triplets in the array. Since the answer may be large, return it modulo 109 + 7.

// Example 1:
// Input: nums = [6,3,6]
// Output: 1
// Explanation: The only special triplet is (i, j, k) = (0, 1, 2), where:
// nums[0] = 6, nums[1] = 3, nums[2] = 6
// nums[0] = nums[1] * 2 = 3 * 2 = 6
// nums[2] = nums[1] * 2 = 3 * 2 = 6
 
// Example 2:
// Input: nums = [8,4,2,8,4]
// Output: 2
// Explanation: There are exactly two special triplets:
// (i, j, k) = (0, 1, 3)
// nums[0] = 8, nums[1] = 4, nums[3] = 8
// nums[0] = nums[1] * 2 = 4 * 2 = 8
// nums[3] = nums[1] * 2 = 4 * 2 = 8
// (i, j, k) = (1, 2, 4)
// nums[1] = 4, nums[2] = 2, nums[4] = 4
// nums[1] = nums[2] * 2 = 2 * 2 = 4
// nums[4] = nums[2] * 2 = 2 * 2 = 4

#Solution 
class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        const int mod = 1000000007;
        long long res = 0;
        int n = nums.size();

        // // my solution ..but TLE (n^3)....
        // for (int i = 0; i < n - 2; i++) {
        //     for (int j = i + 1; j < n - 1; j++) {
        //         if (nums[i] == nums[j] * 2) {
        //             for (int k = j + 1; k < n; k++) {
        //                 if (nums[k] == nums[j] * 2)
        //                     res = (res + 1) % mod;
        //             }
        //         }
        //     }
        // }
        // return res;

        // help............
        //  approach count left and cont right using unorder_map...
        unordered_map<long long, long long> left;
        unordered_map<long long, long long> right;
        for (auto x : nums)
            right[x]++;
        for (int j = 0; j < n; j++) {
            right[nums[j]]--;
            long long target = 2LL * nums[j];
            long long lcnt = left[target];
            long long rcnt = right[target];
            res = (res + (lcnt * rcnt) % mod) % mod;
            left[nums[j]]++;
        }
        return (int)res;
    }
};
