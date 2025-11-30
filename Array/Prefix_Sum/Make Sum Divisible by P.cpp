#Questions Level- Medium
#leetcode_link: https://leetcode.com/problems/make-sum-divisible-by-p/?envType=daily-question&envId=2025-11-30
// Given an array of positive integers nums, remove the smallest subarray (possibly empty) such that the sum of the remaining elements is divisible by p. It is not allowed to remove the whole array.
// Return the length of the smallest subarray that you need to remove, or -1 if it's impossible. A subarray is defined as a contiguous block of elements in the array.

//  Example 1:
// Input: nums = [3,1,4,2], p = 6
// Output: 1
// Explanation: The sum of the elements in nums is 10, which is not divisible by 6. We can remove the subarray [4], and the sum of the remaining elements is 6, which is divisible by 6.
// Example 2:
// Input: nums = [6,3,5,2], p = 9
// Output: 2
// Explanation: We cannot remove a single element to get a sum divisible by 9. The best way is to remove the subarray [5,2], leaving us with [6,3] with sum 9.
// Example 3:
// Input: nums = [1,2,3], p = 3
// Output: 0
// Explanation: Here the sum is 6. which is already divisible by 3. Thus we do not need to remove anything.

#Solution
class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        // // my procedure
        // int out = INT_MAX;
        // long long sum = 0;
        // for (auto i : nums) {
        //     sum += i;
        // }
        // if (sum % p == 0)
        //     return 0;
        // else if (sum < p)
        //     return -1;
        // long long r = sum % p;
        // for (int i = 0; i < nums.size(); i++) {
        //     long long s = nums[i];
        //     if (s % p == r)
        //         out = min(out, 1);

        //     int res = 1;

        //     for (int j = i + 1; j < nums.size(); j++) {
        //         s += nums[j];
        //         res++;
        //         if (s % p == r) {
        //             if (res != nums.size()) {
        //                 out = min(out, res);
        //             }
        //         }
        //     }
        // }
        // if (out == INT_MAX)
        //     return -1;
        // return out;

        //not by me....
        long long total = 0;
        for (int x : nums) total += x;

        long long r = total % p;
        if (r == 0) return 0; // nothing to remove

        unordered_map<int, int> mp;
        mp[0] = -1;   // prefix before starting

        long long prefix = 0;
        int out = nums.size();

        for (int i = 0; i < nums.size(); i++) {
            prefix = (prefix + nums[i]) % p;

            // we want prefix[i] - prefix[j] ≡ r (mod p)
            long long need = (prefix - r + p) % p;

            if (mp.count(need)) {
                int len = i - mp[need];
                if (len < out) out = len;
            }

            // store latest prefix modulo
            mp[prefix] = i;
        }

        return out == nums.size() ? -1 : out;
    }
};
 
