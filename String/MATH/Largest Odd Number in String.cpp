#Question
// 1903. Largest Odd Number in String - Easy
// You are given a string num, representing a large integer. Return the largest-valued odd integer (as a string) that is a non-empty substring of num, or an empty string "" if no odd integer exists.
// A substring is a contiguous sequence of characters within a string.
// Example 1:
// Input: num = "52"
// Output: "5"
// Explanation: The only non-empty substrings are "5", "2", and "52". "5" is the only odd number.
// Example 2:
// Input: num = "4206"
// Output: ""
// Explanation: There are no odd numbers in "4206".
// Example 3:
// Input: num = "35427"
// Output: "35427"
// Explanation: "35427" is already an odd number.

#Solution
class Solution {
public:
    string largestOddNumber(string num) {
        // if(stoi(num)%2!=0)return num;
        // string res;
        // // vector<int> v;
        // int s = num[0]-'0';
        // for (int i = 0; i < num.size(); i++) {
        //     for (int j = 1; j < num.size() - i; j++) {
        //         string x = num.substr(i, j);
        //         int n = stoi(x);
        //         if (n % 2 != 0 && n >= s){
        //             s=n;
        //             string m=to_string(n);
        //             res.push_back(m);
        //         }
        //     }
        // }
        // return res;

        for (int i = num.size(); i >= 0; i--) {
            if ((num[i] - '0') % 2 != 0)
                return num.substr(0, i + 1);
        }
        return "";
    }
};
