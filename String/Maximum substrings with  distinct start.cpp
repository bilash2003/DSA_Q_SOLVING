#Question
// 3760. Maximum Substrings With Distinct Start - Medium
// You are given a string s consisting of lowercase English letters.
// Return an integer denoting the maximum number of substrings you can split s into such that each substring starts with a distinct character (i.e., no two substrings start with the same character).
// Example 1:
// Input: s = "abab"
// Output: 2
// Explanation:
// Split "abab" into "a" and "bab".
// Each substring starts with a distinct character i.e 'a' and 'b'. Thus, the answer is 2.
// Example 2:
// Input: s = "abcd"
// Output: 4
// Explanation:
// Split "abcd" into "a", "b", "c", and "d".
// Each substring starts with a distinct character. Thus, the answer is 4.

#Solution
class Solution {
public:
    int maxDistinct(string s) {
        int hash[26]={0};
        for(auto x:s){
            hash[x-97]++;
        }
        int res=0;
        for(int i=0;i<26;i++){
            if(hash[i]>0)res++;
        }
        return res;
    }
};
