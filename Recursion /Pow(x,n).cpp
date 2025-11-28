#Questions
// Implement pow(x, n), which calculates x raised to the power n (i.e., xn).
// Example 1:
// Input: x = 2.00000, n = 10
// Output: 1024.00000
// Example 2:

// Input: x = 2.10000, n = 3
// Output: 9.26100

#solution
class Solution {
public:
    double myPow(double x, int n) {
        // double ans= pow(x,n);
        // return ans;
        double p=1;
        if(n==0) return 1;
        if(n<0) {
            int a=abs(n);
            for( int i=0;i<a;i++){
                p=p*(1/x);
            }
             
        }
        if(n>0){
            for(int i=0;i<n;i++){
                
                p=p*x;
            }
            return p;
        }
        return p;

    }
};
