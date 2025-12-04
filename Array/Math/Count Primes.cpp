#Questions - Medium
// Given an integer n, return the number of prime numbers that are strictly less than n.
// Example 1:
// Input: n = 10
// Output: 4
// Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
// Example 2:

// Input: n = 0
// Output: 0
// Example 3:

// Input: n = 1
// Output: 0

#Solution
class Solution {
    // public:
    //     int countPrimes(int n) {
    //         int c = 1;
    //         if (n <= 2)
    //             return 0;
    //         else {
    //             for (int i = 3; i < n; i += 2) {
    //                 c = c + checkprime(i);
    //             }
    //         }
    //         return c;
    //     }

    // private:
    //     int checkprime(int m) {
    //         if (m % 2 == 0) {
    //             if (m == 2)
    //                 return 1;
    //             else
    //                 return 0;
    //         }
    //         for (int i = 3; 1LL * i * i <= m; i += 2) {
    //             if (m % i == 0)
    //                 return 0;
    //         }
    //         return m > 1;
    //     }

public:
    int countPrimes(int n) {
        int c=0;
        int prime[n + 1];
        if (n <= 2) return 0;
        for (int i = 2; i <= n; i++) {
            prime[i] = 1;
        }
        for(int i=2;i*i<=n;i++){
            if(prime[i]==1){
                for(int j=i*i;j<=n;j+=i){
                    prime[j]=0;
                }
            }
        }
        for(int i=2;i<n;i++){
            if(prime[i]==1) c++;
        }
        return c;       
    }
};
