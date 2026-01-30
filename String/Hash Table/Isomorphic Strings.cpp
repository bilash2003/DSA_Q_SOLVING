#Question 
// 205. Isomorphic Strings - Easy
// Given two strings s and t, determine if they are isomorphic.
// Two strings s and t are isomorphic if the characters in s can be replaced to get t.
// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.
// Example 1:
// Input: s = "egg", t = "add"
// Output: true
// Explanation:
// The strings s and t can be made identical by:
// Mapping 'e' to 'a'.
// Mapping 'g' to 'd'.
// Example 2:
// Input: s = "foo", t = "bar"
// Output: false
// Explanation:
// The strings s and t can not be made identical as 'o' needs to be mapped to both 'a' and 'r'.
// Example 3:
// Input: s = "paper", t = "title"
// Output: true

#Solution
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int sh[128] = {0};
        int th[128] = {0};
        int idx = 0;
        for (int i = 0; i < s.size(); i++) {
            sh[s[i] - 0] = t[i];
            th[t[i] - 0] = s[i];
        }
        while (idx < s.size()) {
            if (sh[s[idx] - 0] == t[idx] && th[t[idx] - 0] == s[idx]) idx++;
            else return false;
        }
        return true;
    }
};
