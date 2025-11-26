#Question..
An ugly number is a positive integer which does not have a prime factor other than 2, 3, and 5.
Given an integer n, return true if n is an ugly number.
  
Example 1:
Input: n = 6
Output: true
Explanation: 6 = 2 × 3
  
Example 2:
Input: n = 1
Output: true
Explanation: 1 has no prime factors.
  
Example 3:
Input: n = 14
Output: false
Explanation: 14 is not ugly since it includes the prime factor 7.

#solution ..code..
  
class Solution {
public:
    bool isUgly(int n) {
        //wrong ans..
        // if (n == 1)
        //     return true;
        // if (n <= 0)
        //     return false;
        // int i = 2;
        // while (i <= n / 2) {
        //     if (n % i == 0 && i > 5) {
        //         return false;
        //     }
        //     i++;
        // }
        // return true;

        if(n<=0)return false;
        while(n%2==0)n=n/2;
        while(n%3==0)n=n/3;
        while(n%5==0)n=n/5;

        return n==1;
    }
};
