#Questions - Easy
// You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order.
// The large integer does not contain any leading 0's. Increment the large integer by one and return the resulting array of digits.
// Example 1:
// Input: digits = [1,2,3]
// Output: [1,2,4]
// Explanation: The array represents the integer 123.
// Incrementing by one gives 123 + 1 = 124.
// Thus, the result should be [1,2,4].
// Example 2:
// Input: digits = [4,3,2,1]
// Output: [4,3,2,2]
// Explanation: The array represents the integer 4321.
// Incrementing by one gives 4321 + 1 = 4322.
// Thus, the result should be [4,3,2,2].
// Example 3:
// Input: digits = [9]
// Output: [1,0]
// Explanation: The array represents the integer 9.
// Incrementing by one gives 9 + 1 = 10.
// Thus, the result should be [1,0].

#Solution
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // 1st attempt  but run time error...............
        // vector<int> res;
        // long long n = 0;
        // for (int x : digits) {
        //     n = (n * 10) + x;
        // }
        // long long m=n+1;
        // if (m == 0)
        //     res.push_back(n);
        // else {
        //     while (m > 0) {
        //         int a = m % 10;
        //         m = m / 10;
        //         res.push_back(a);
        //     }
        // }
        // reverse(res.begin(),res.end());
        // return res;

        // 2nd attemp with some hint
        int n=digits.size();
        while(n>0){
            if(digits[n-1]==9) digits[n-1]=0;//checking last digits is 9 or not , if 9 then it becomes 0
            else{
                digits[n-1]++;//if last element of digits is not 9 then add 1.
                return digits;
            }
            n--;// go to previous  index becz, if conditon run
        }
        digits.insert(digits.begin(),1);// if all element in digits are 9 then we have to add 1 in begging
        return digits;
    }
};
