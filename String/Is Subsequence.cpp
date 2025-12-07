#Questions
// Given two strings s and t, return true if s is a subsequence of t, or false otherwise.
// A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing 
// the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).
// Example 1:
// Input: s = "abc", t = "ahbgdc"
// Output: true
// Example 2:
// Input: s = "axc", t = "ahbgdc"
// Output: false

#Solution
class Solution {
public:
    bool isSubsequence(string s, string t) {
        string v = "";
        int j = 0;
        for (int i = 0; i < s.length(); i++) {
            while (j < t.length()) {
                if (s[i] == t[j]) {
                    v.push_back(s[i]);
                    j++;
                    break;
                } else {
                    j++;
                }
            }
            if (j > t.length())
                break;
        }
        return s == v;
    }
};
