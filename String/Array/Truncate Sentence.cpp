#Question
// 1816. Truncate Sentence - Easy
// A sentence is a list of words that are separated by a single space with no leading or trailing spaces. Each of the words consists of only uppercase and lowercase English letters (no punctuation).
// For example, "Hello World", "HELLO", and "hello world hello world" are all sentences.
// You are given a sentence s​​​​​​ and an integer k​​​​​​. You want to truncate s​​​​​​ such that it contains only the first k​​​​​​ words. Return s​​​​​​ after truncating it.
// Example 1:
// Input: s = "Hello how are you Contestant", k = 4
// Output: "Hello how are you"
// Explanation:
// The words in s are ["Hello", "how" "are", "you", "Contestant"].
// The first 4 words are ["Hello", "how", "are", "you"].
// Hence, you should return "Hello how are you".
// Example 2:
// Input: s = "What is the solution to this problem", k = 4
// Output: "What is the solution"
// Explanation:
// The words in s are ["What", "is" "the", "solution", "to", "this", "problem"].
// The first 4 words are ["What", "is", "the", "solution"].
// Hence, you should return "What is the solution".
// Example 3:
// Input: s = "chopper is not a tanuki", k = 5
// Output: "chopper is not a tanuki"

#Solution
class Solution {
public:
    string truncateSentence(string s, int k) {
        string res="";
        string temp="";
        int i=0,j=0;
        while(i<k && j<s.size()){
            char c=s[j];
            if(c!=' '){
                temp+=c;
            }
            else if(c==' '){
                if(res=="") res=temp;
                else if(temp=="") res=res;
                else res=res + " "+temp;
                temp="";
                i++;
            }
            j++;
        }
        if(temp!="" && i<k){
            if(res!=""){
                res=res+" "+temp;
            }
            else res=temp;
        }
        return res;
        
    }
};
