#Question
// Binary to Decimal
// Given a string b representing a Binary Number, The problem is to find its decimal equivalent.
// Examples:
// Input : b = 111
// Output : 7
// Explanation : The decimal equivalent of the binary number 111 is 22 + 21 + 20 = 7.
// Input : b = 1010
// Output : 10
// Explanation : The decimal equivalent of the binary number 1010 is 23 + 21 = 10.
// Input: b = 100001
// Output: 33
// Explanation : The decimal equivalent of the binary number 100001 is 25 + 20 = 33.

#Solution
class Solution {
  public:
    int binaryToDecimal(string &b) {
        // Code here.
        int len=b.length()-1;
        int res=0;
        
        for(auto c:b){
            if(c=='1')res+=pow(2,len);
            len--;
        }
        return res;
    }
};
