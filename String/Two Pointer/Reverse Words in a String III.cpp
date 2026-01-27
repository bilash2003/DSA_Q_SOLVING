#Question
// 557. Reverse Words in a String III - Easy
// Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.
// Example 1:
// Input: s = "Let's take LeetCode contest"
// Output: "s'teL ekat edoCteeL tsetnoc"
// Example 2:
// Input: s = "Mr Ding"
// Output: "rM gniD"

#Solution
class Solution {
public:
    string reverseWords(string s) {
        string res = "";
        string words = "";
        for (int k = 0; k <= s.length(); k++) {

            if (k < s.length() && s[k] != ' ') {
                words += s[k];
            } else {
                int n = words.length();
                for (int i = 0, j = n - 1; i < j; i++,j--) {
                    char t = words[i];
                    words[i] = words[j];
                    words[j] = t;
                }
                if (res != "")
                    res += " ";
                res = res + words;
                words = "";
            }
        }
        return res;
    }
};
