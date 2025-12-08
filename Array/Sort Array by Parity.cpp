#Questions
// Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.
// Return any array that satisfies this condition.
// Example 1:
// Input: nums = [3,1,2,4]
// Output: [2,4,3,1]
// Explanation: The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.
// Example 2:
// Input: nums = [0]
// Output: [0]

#Solution
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> v1;
        vector<int> v2;
        // vector<int> res;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0) v1.push_back(nums[i]);
            else v2.push_back(nums[i]);
        }
        v1.insert(v1.end(),v2.begin(),v2.end());
        return v1;
    }
};
