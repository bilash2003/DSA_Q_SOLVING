#Questions
// 989. Add to Array-Form of Integer - Easy
// The array-form of an integer num is an array representing its digits in left to right order.
// For example, for num = 1321, the array form is [1,3,2,1].
// Given num, the array-form of an integer, and an integer k, return the array-form of the integer num + k.
// Example 1:
// Input: num = [1,2,0,0], k = 34
// Output: [1,2,3,4]
// Explanation: 1200 + 34 = 1234
// Example 2:
// Input: num = [2,7,4], k = 181
// Output: [4,5,5]
// Explanation: 274 + 181 = 455
// Example 3:
// Input: num = [2,1,5], k = 806
// Output: [1,0,2,1]
// Explanation: 215 + 806 = 1021

#Solution
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        //my soln..runtime error..
        // int n = num.size() - 1;
        // long long j = 0;
        // for (int i = 0; i < num.size(); i++) {
        //     j += num[i] * (pow(10, n));
        //     n--;
        // }
        // long long ans=(long long)k+j;
        // vector<int>res;
        // while(ans){
        //     res.push_back(ans%10);
        //     ans=ans/10;
        // }
        // reverse(res.begin(),res.end());
        // return res;

        //helpppp............
        for(int i=num.size()-1;i>=0;i--){
            num[i]=(num[i]+k);
            k=num[i]/10;
            num[i]=num[i]%10;
        }
        while(k>0){
            num.insert(num.begin(),k%10);
            k=k/10;
        }
        return num;
    }
};
