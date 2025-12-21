#Questions
// 415. Add Strings - Easy
// Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string.
// You must solve the problem without using any built-in library for handling large integers (such as BigInteger). 
// You must also not convert the inputs to integers directly.
// Example 1:
// Input: num1 = "11", num2 = "123"
// Output: "134"
// Example 2:
// Input: num1 = "456", num2 = "77"
// Output: "533"
// Example 3:
// Input: num1 = "0", num2 = "0"
// Output: "0"

#Solution
class Solution {
public:
    string addStrings(string num1, string num2) {
        int i=num1.size()-1;
        int j=num2.size()-1;
        int carry=0;
        string res;
        while(i>=0 || j>=0 || carry){
            int a=(i>=0)?num1[i]-'0':0;
            int b=(j>=0)?num2[j]-'0':0;
            int sum=a+b+carry;
            carry=(sum)/10;
            res.push_back((sum%10)+'0');
            i--;j--;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
