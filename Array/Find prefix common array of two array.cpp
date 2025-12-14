#Question
// 2657. Find the Prefix Common Array of Two Arrays - Medium
// You are given two 0-indexed integer permutations A and B of length n.
// A prefix common array of A and B is an array C such that C[i] is equal to the count of numbers that are present at or before the index i in both A and B.
// Return the prefix common array of A and B.A sequence of n integers is called a permutation if it contains all integers from 1 to n exactly once.
// Example 1:
// Input: A = [1,3,2,4], B = [3,1,2,4]
// Output: [0,2,3,4]
// Explanation: At i = 0: no number is common, so C[0] = 0.
// At i = 1: 1 and 3 are common in A and B, so C[1] = 2.
// At i = 2: 1, 2, and 3 are common in A and B, so C[2] = 3.
// At i = 3: 1, 2, 3, and 4 are common in A and B, so C[3] = 4.
// Example 2:
// Input: A = [2,3,1], B = [3,1,2]
// Output: [0,1,3]
// Explanation: At i = 0: no number is common, so C[0] = 0.
// At i = 1: only 3 is common in A and B, so C[1] = 1.
// At i = 2: 1, 2, and 3 are common in A and B, so C[2] = 3.

#Solution
class Solution {
public:
    int count(vector<int> a,vector<int> b){
        int c=0;
        for(int i=0;i<a.size();i++){
            for(int j=0;j<b.size();j++){
                if(a[i]==b[j]) c++;
            }
        }
        return c;
    }
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> res;
        int n=A.size();
        for(int i=0;i<n;i++){
            vector<int> a(A.begin(),A.begin()+i+1);
            vector<int> b(B.begin(),B.begin()+i+1);
            int temp=count(a,b);
            res.push_back(temp);
        }
        return res;
    }
};
