#Question
// 1684. Count the Number of Consistent Strings - Easy
// You are given a string allowed consisting of distinct characters and an array of strings words. A string is consistent if all characters in the string appear in the string allowed.
// Return the number of consistent strings in the array words.
// Example 1:
// Input: allowed = "ab", words = ["ad","bd","aaab","baa","badab"]
// Output: 2
// Explanation: Strings "aaab" and "baa" are consistent since they only contain characters 'a' and 'b'.
// Example 2:
// Input: allowed = "abc", words = ["a","b","c","ab","ac","bc","abc"]
// Output: 7
// Explanation: All strings are consistent.
// Example 3:
// Input: allowed = "cad", words = ["cc","acd","b","ba","bac","bad","ac","d"]
// Output: 4
// Explanation: Strings "cc", "acd", "ac", and "d" are consistent.

#Solution
class Solution {
public:
    bool match(vector<int>& a, const string& b) {
        for (int i = 0; i < b.size(); i++) {
            if (a[b[i] - 'a'] == 0) {
                return false;
                
            }
        }
        return true;
    }

    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<int> arr(26, 0);
        int res = 0;
        for (int i = 0; i < allowed.size(); i++) {
            arr[allowed[i] - 'a']++;
        }
        for (int i = 0; i < words.size(); i++) {
            if (match(arr, words[i]))
                res++;
        }
        return res;
    }
};
