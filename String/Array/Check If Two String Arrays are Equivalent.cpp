#Question
// 1662. Check If Two String Arrays are Equivalent - Easy
// Given two string arrays word1 and word2, return true if the two arrays represent the same string, and false otherwise.
// A string is represented by an array if the array elements concatenated in order forms the string.
// Example 1:
// Input: word1 = ["ab", "c"], word2 = ["a", "bc"]
// Output: true
// Explanation:
// word1 represents string "ab" + "c" -> "abc"
// word2 represents string "a" + "bc" -> "abc"
// The strings are the same, so return true.
// Example 2:
// Input: word1 = ["a", "cb"], word2 = ["ab", "c"]
// Output: false
// Example 3:
// Input: word1  = ["abc", "d", "defg"], word2 = ["abcddefg"]
// Output: true

#Solution
class Solution {
public:
    string combine(vector<string>word){
        string res="";
        for(int i=0;i<word.size();i++){
            res+=word[i];
        }
        return res;
    }
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1=combine(word1);
        string s2=combine(word2);
        if(s1==s2)return true;
        else return false;
    }
};
