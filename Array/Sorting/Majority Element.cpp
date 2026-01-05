#Question
// 169. Majority Element - Easy
// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
// Example 1:
// Input: nums = [3,2,3]
// Output: 3
// Example 2:
// Input: nums = [2,2,1,1,1,2,2]
// Output: 2

#Solution
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int res = 0;
        // long max = *(max_element(nums.begin(), nums.end()));
        // vector<int> hash(max + 1, 0);
        // for (int i = 0; i < nums.size(); i++) {
        //     hash[nums[i]]++;
        // }
        // for (int i = 0; i <= max; i++) {
        //     if (hash[i] > (nums.size() / 2))
        //         res = i;
        // }
        // return res;
        int n = nums.size() / 2;
        int res = nums[0];
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++) {
            int c = 1;
            if (nums[i] != INT_MIN) {
                for (int j = i + 1; j < nums.size(); j++) {
                    if (nums[i] == nums[j]) {
                        c++;
                        nums[j] = INT_MIN;
                    }
                }
                if (c > n) {
                    res = nums[i];
                }
            } 
        }
        return res;
    }
};
