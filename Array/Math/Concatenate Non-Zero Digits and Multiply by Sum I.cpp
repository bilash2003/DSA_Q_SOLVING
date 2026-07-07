#Question 
// 3754. Concatenate Non-Zero Digits and Multiply by Sum I - Easy
// You are given an integer n.
// Form a new integer x by concatenating all the non-zero digits of n in their original order. If there are no non-zero digits, x = 0.
// Let sum be the sum of digits in x.
// Return an integer representing the value of x * sum.
// Example 1:
// Input: n = 10203004
// Output: 12340
// Explanation:
// The non-zero digits are 1, 2, 3, and 4. Thus, x = 1234.
// The sum of digits is sum = 1 + 2 + 3 + 4 = 10.
// Therefore, the answer is x * sum = 1234 * 10 = 12340.
// Example 2:
// Input: n = 1000
// Output: 1
// Explanation:
// The non-zero digit is 1, so x = 1 and sum = 1.
// Therefore, the answer is x * sum = 1 * 1 = 1.
// Constraints: 0 <= n <= 109

#Solu:
class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0;
        int num = 0;

        int temp = n;
        while (temp != 0) {
            int rem = temp % 10;
            if (rem != 0) {
                sum += rem;
                num = (num * 10) + rem;
                temp = temp / 10;
            } else
                temp = temp / 10;
        }
        while (num != 0) {
            temp = (temp * 10) + (num % 10);
            num = num / 10;
        }
        return temp * sum;
    }
};

