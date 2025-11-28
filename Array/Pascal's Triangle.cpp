#Question
// Given an integer numRows, return the first numRows of Pascal's triangle.
// In Pascal's triangle, each number is the sum of the two numbers directly above it.
// Example 1:

// Input: numRows = 5
// Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
// Example 2:

// Input: numRows = 1
// Output: [[1]]

#solution
#include <vector>
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> tri;
        for(int i=0;i<numRows;i++){
            vector<int> row(i+1,1); // it create all i+1 to set value 1;
            for(int r=1;r<i;r++){
                row[r]=tri[i-1][r-1] + tri[i-1][r];
            }
            tri.push_back(row);
        }
        return tri;

    }
    // my 1st attempt:::::::::::::: but takes too time and memory 
    // .....................................................
    // private:
    //     int ncr(int n, int r) {
    //         // int res = ((n - 1) / ((r - 1)*(n - r))) + ((n - 1) / (r * (n -
    //         r)));
    //         // // not applicable
    //         long long res = 1;
    //         for (int i = 0; i < r; i++) {
    //             res = res * (n - i);
    //             res = res / (i + 1);
    //         }
    //         return (int)res;
    //     }

    // public:
    //     vector<vector<int>> generate(int numRows) {
    //         vector<vector<int>> n1; // for whole output
    //         for (int i = 0; i < numRows; i++) {
    //             vector<int> n2; // for row wise push back into n1
    //             for (int r = 0; r <= i; r++) {
    //                 if (r == 0 || i == r) {
    //                     n2.push_back(1);
    //                 } else {

    //                     n2.push_back(ncr(i, r));
    //                 }
    //             }
    //             n1.push_back(n2);
    //         }

    //         return n1;
    //         // cout<<"[";
    //     }
};
