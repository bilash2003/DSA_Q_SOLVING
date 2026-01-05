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
        // // my code...

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

        //............................................
        // Boyer–Moore Majority Vote Algorithm (n/3 version)
        // at most 2 such elements and only 
        // need two candidates + two counters
        int c1=0,c2=0; //counter
        int a=0,b=1; //candidates..
        //1st pass....
        for(int x : nums){
            if(x==a)c1++;
            else if(x==b)c2++;
            else if(c1==0){
                a=x;
                c1=1;
            }
            else if(c2==0){
                b=x;
                c2=1;
            }
            else{
                c1--;
                c2--;
            }
        }
        // 2nd pass for count
        c1=0;c2=0;
        for(int x:nums){
            if(x==a)c1++;
            else if(x==b)c2++;
        }
        vector<int>res;
        if(c1>nums.size()/3)res.push_back(a);
        if(c2>nums.size()/3)res.push_back(b);
        return res;
        
    }
};
