#Question
// 287. Find the Duplicate Number - Medium
// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.
// There is only one repeated number in nums, return this repeated number.
// You must solve the problem without modifying the array nums and using only constant extra space.
// Example 1:
// Input: nums = [1,3,4,2,2]
// Output: 2
// Example 2:
// Input: nums = [3,1,3,4,2]
// Output: 3
// Example 3:
// Input: nums = [3,3,3,3,3]
// Output: 3

#Solution
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //my approach.............
        // for(int i=1;i<nums.size();i++){
        //     if((nums[i]-nums[i-1]==0) || (nums[i]-nums[i+1]==0)){
        //         return nums[i];
        //     }
        //     else if(abs(nums[i]-nums[i-1])==abs(nums[i]-nums[i+1])){
        //         return nums[i-1];
        //     }
        // }
        // return -1;

        //..............
        //Floyd’s Algorithm :Step 1: Detect the cycle
        // Use two pointers:
        // slow → moves 1 step
        // fast → moves 2 steps
        // They will meet inside the cycle.
        // Step 2: Find the cycle entry (duplicate number)
        // Reset slow to start (nums[0])
        // Move both pointers 1 step at a time
        // Where they meet again is the duplicate number

        int slow=nums[0];
        int fast=nums[0];
        //to find duplicate...
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        slow=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};
