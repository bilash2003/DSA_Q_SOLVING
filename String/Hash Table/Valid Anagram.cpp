#Question
// 242. Valid Anagram - Easy
// Given two strings s and t, return true if t is an anagram of s, and false otherwise.
// Example 1:
// Input: s = "anagram", t = "nagaram"
// Output: true
// Example 2:
// Input: s = "rat", t = "car"
// Output: false

#Solution
class Solution {
public:
    bool isAnagram(string s, string t) {
        // method 1.........
        int h[26]={0};
        if (s.size() != t.size())
            return false;
        for(int i=0;i<s.size();i++){
            h[s[i]-97]++;
        }
        for(int i=0;i<t.size();i++){
            h[t[i]-97]--;
        }
        for(int i=0;i<26;i++){
            if(h[i]!=0) return false;
        }
        return true;

        //................
        // method-2
        // if (s.size() != t.size())
        //     return false;
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // if (s != t)
        //     return false;
        // else
        //     return true;
    }
};
