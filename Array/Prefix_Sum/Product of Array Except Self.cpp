#Questions Medium-easy
#Leetcode_link : https://leetcode.com/problems/product-of-array-except-self/?envType=study-plan-v2&envId=leetcode-75
// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
// You must write an algorithm that runs in O(n) time and without using the division operation.
// Example 1:
// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]
// Example 2:
// Input: nums = [-1,1,0,-3,3]
// Output: [0,0,9,0,0]

#Solution
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // //my way...
        // long long mul=1;
        // for(auto i : nums){
        //     if(i!=0)mul=mul*i;
        // }
        // int cnt=count(nums.begin(),nums.end(),0);
    
        // vector<int>res;
        // for(int i=0;i<nums.size();i++){
        //     if(cnt>1){
        //         res.push_back(0);
        //     }
        //     else if(cnt==0){
        //         res.push_back(mul/nums[i]);
        //     }
        //     else{
        //         if(nums[i]==0) res.push_back(mul);
        //         else res.push_back(0);
        //     }
        // }
        // return res;

        //prefix and suffix ...another way
        int n=nums.size();
        vector<int>res(n,1);

        long long prefix=1;
        for(int i=0;i<n;i++){
            res[i]=prefix;
            prefix=prefix*nums[i];
        }

        long long suff=1;
        for(int i=n-1;i>=0;i--){
            res[i]=suff*res[i];
            suff=suff*nums[i];
        }
        return res;
    }
};
