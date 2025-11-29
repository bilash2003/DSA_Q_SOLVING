#Questions.. Level - EASY
#Leetcode_link: https://leetcode.com/problems/add-digits/description/
// Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.
// Example 1:
// Input: num = 38
// Output: 2
// Explanation: The process is
// 38 --> 3 + 8 --> 11
// 11 --> 1 + 1 --> 2 
// Since 2 has only one digit, return it.
// Example 2:
// Input: num = 0
// Output: 0

#solution 
class Solution {
public:
    int addDigits(int num) {
        // my 1st attempt
        
        int res = 0;
        int temp;
        if (num <= 9)
            return num;
        else {
            while (num > 9) {
                temp = num;
                int r = temp % 10;
                temp = temp / 10;
                res = r + temp;
                num = res;
            }
        }
        return num;

        // another way more conceptual
        // if(num==0) return num;
        // else return 1 + (num-1)%9;
    }
};
