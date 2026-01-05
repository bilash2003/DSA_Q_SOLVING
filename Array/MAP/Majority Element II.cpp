#Question
// 229. Majority Element II - Medium
// Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.
// Example 1:
// Input: nums = [3,2,3]
// Output: [3]
// Example 2:
// Input: nums = [1]
// Output: [1]
// Example 3:
// Input: nums = [1,2]
// Output: [1,2]

#Solution
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
 
        int n = nums.size() / 3;
        unordered_map<int, int> um;
        for (int x : nums) {
            um[x]++;
        }
        // vector<int> res;
        nums.clear();
        for (auto const& [key, val] : um) {
            if (val > n)
                nums.push_back(key);
        }
        return nums;
    }
};
