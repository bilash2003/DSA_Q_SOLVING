#Questions
// 3498. Reverse Degree of a String - Easy
// Given a string s, calculate its reverse degree.
// The reverse degree is calculated as follows:
// For each character, multiply its position in the reversed alphabet ('a' = 26, 'b' = 25, ..., 'z' = 1) with its position in the string (1-indexed).
// Sum these products for all characters in the string.Return the reverse degree of s.
// Example 1:
// Input: s = "abc"
// Output: 148

#Solution
class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        for (int i = 0; i < s.size(); i++) {
            int val = s[i] - (71 + (2 * (s[i] - 97)));
            sum = sum + (val * (i+1));
            val=0;
        }
        return sum;
    }
};
