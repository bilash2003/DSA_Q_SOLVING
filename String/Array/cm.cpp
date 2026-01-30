#Question
// 3271. Hash Divided String - Medium
// You are given a string s of length n and an integer k, where n is a multiple of k. Your task is to hash the string s into a new string called result, which has a length of n / k.
// First, divide s into n / k substrings, each with a length of k. Then, initialize result as an empty string.
// For each substring in order from the beginning:
// The hash value of a character is the index of that character in the English alphabet (e.g., 'a' → 0, 'b' → 1, ..., 'z' → 25).
// Calculate the sum of all the hash values of the characters in the substring.
// Find the remainder of this sum when divided by 26, which is called hashedChar.
// Identify the character in the English lowercase alphabet that corresponds to hashedChar.
// Append that character to the end of result.Return result.
// Example 1:
// Input: s = "abcd", k = 2
// Output: "bf"
// Explanation:
// First substring: "ab", 0 + 1 = 1, 1 % 26 = 1, result[0] = 'b'.
// Second substring: "cd", 2 + 3 = 5, 5 % 26 = 5, result[1] = 'f'.
// Example 2:
// Input: s = "mxz", k = 3
// Output: "i"
// Explanation:
// The only substring: "mxz", 12 + 23 + 25 = 60, 60 % 26 = 8, result[0] = 'i'.

#Solution
#include<string>
class Solution {
public:
    int findhash(string s){
        int ans=0;
        for(int i=0;i<s.size();i++){
            ans=ans+s[i]-'a';
        }
        return ans;
    }
    string stringHash(string s, int k) {
        string res="";
        int i=0;
        while(i<s.size()){
            string sub=s.substr(i,k);
            char c = char(findhash(sub)%26 + 97);
            res=res+c;
            i=i+k;
        }
        return res;
    }
};
