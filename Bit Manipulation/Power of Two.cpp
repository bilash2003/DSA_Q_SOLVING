#Questions
// Given an integer n, return true if it is a power of two. Otherwise, return false.
// An integer n is a power of two, if there exists an integer x such that n == 2x.
  
// Example 1:
// Input: n = 1
// Output: true
// Explanation: 20 = 1
  
// Example 2:
// Input: n = 16
// Output: true
// Explanation: 24 = 16
  
// Example 3:
// Input: n = 3
// Output: false

#solution
class Solution {
public:
    bool isPowerOfTwo(int n) {
        //wrong anss...
        // int p=ceil(sqrt(n));
        // long x=2*pow(2,p-1);
        // int r=(int)x;
        // if(n<=0) return false;
        // else if(n==1) return true;
        // else if(n==r){
        //     return true;
        // }
        // else return false;

        //correct way...
        if(n<=0) return false;
        else if((n & (n-1))==0){
            return true;
        }
        else return false;
    }
};
