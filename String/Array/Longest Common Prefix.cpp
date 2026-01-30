#Question
// 14. Longest Common Prefix - Easy
// Write a function to find the longest common prefix string amongst an array of strings.
// If there is no common prefix, return an empty string "".
// Example 1:
// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:
// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings

#Solution
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string res = "";
        string s = strs[0], s1 = strs[strs.size() - 1];
        int i = 0;

        while (i < s1.size()) {
            if (s[i] == s1[i]) {
                res+=s[i];
                i++;
            }
            else
                break;
        }
        return res;
    }
};
