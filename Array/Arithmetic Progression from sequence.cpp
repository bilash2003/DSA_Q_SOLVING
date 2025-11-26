#Question..
A sequence of numbers is called an arithmetic progression if the difference between any two consecutive elements is the same.
Given an array of numbers arr, return true if the array can be rearranged to form an arithmetic progression. Otherwise, return false.

Example 1:
Input: arr = [3,5,1]
Output: true
Explanation: We can reorder the elements as [1,3,5] or [5,3,1] with differences 2 and -2 respectively, between each consecutive elements.
Example 2:
Input: arr = [1,2,4]
Output: false
Explanation: There is no way to reorder the elements to obtain an arithmetic progression.

#solution...
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        if(arr.size()==2)return true;
        vector<int>v;
        int n=arr.size();
        sort(arr.begin(),arr.end());
        v.push_back(abs(arr[0]-arr[n-1]));
        for(int i=1;i<arr.size();i++){
            v.push_back(abs(arr[i]-arr[i-1]));
        }
        v.erase(unique(v.begin(),v.end()),v.end());
        if(v.size()>2)return false;
        return true;
    }
};
