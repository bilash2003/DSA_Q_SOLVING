#Question..
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], 
then return 0.
Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

Example 1:
Input: x = 123
Output: 321
  
Example 2:
Input: x = -123
Output: -321
  
Example 3:
Input: x = 120
Output: 21

#solution..
class Solution {
public:
    int reverse(int x) {
        long m = 0;// reverse
        long r = 0;//remainder
        int s = (x < 0) ? -1 : 1;// to check sigh
        long num = (long)x*s;
        while (num != 0) {
            r = num % 10;
            m = (m * 10) + r;
            num = num / 10;
        }
        m= m * s;
        if(m>INT_MAX || m<INT_MIN) return 0;
        else return (int)m;
    }
};
