#Questions
// 344. Reverse String - Easy
// Write a function that reverses a string. The input string is given as an array of characters s.
// You must do this by modifying the input array in-place with O(1) extra memory.
// Example 1:
// Input: s = ["h","e","l","l","o"]
// Output: ["o","l","l","e","h"]
// Example 2:
// Input: s = ["H","a","n","n","a","h"]
// Output: ["h","a","n","n","a","H"]

#Solution
class Solution {
public:
    void reverseString(vector<char>& s) {
        int j=s.size()-1;
        int i=0;
        while(i<j){
            char x=s[j];
            s[j]=s[i];
            s[i]=x;
            i++;
            j--;
        }   
    }
};
