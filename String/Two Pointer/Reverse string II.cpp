#Questions
// 541. Reverse String II - Easy
// Given a string s and an integer k, reverse the first k characters for every 2k characters counting from the start of the string.
// If there are fewer than k characters left, reverse all of them. If there are less than 2k but greater than or equal to k characters, 
// then reverse the first k characters and leave the other as original.
// Example 1:
// Input: s = "abcdefg", k = 2
// Output: "bacdfeg"
// Example 2:
// Input: s = "abcd", k = 2
// Output: "bacd"

#Solution
class Solution {
public:
    string reverseStr(string s, int k) {
        // int n = k;
        // int j = k - 1;
        // int i = 0;
        // while (k < s.size()) {

        //     while (i < j) {
        //         char x = s[j];
        //         s[j] = s[i];
        //         s[i] = x;
        //         i++;
        //         j--;
        //     }
        //     k += k * 2;
        //     i=k-n;
        //     j=k-1;
        // }
        // return s;

        int n = s.size();
        int i = 0;

        while (i < n) {
            int j = min(i + k - 1, n - 1);  // ensure j is inside string

            // reverse from i to j
            int left = i, right = j;
            while (left < right) {
                char x = s[right];
                s[right] = s[left];
                s[left] = x;
                left++;
                right--;
            }

            i += 2 * k;  // move to next 2k block
        }
        return s;
    }
};
