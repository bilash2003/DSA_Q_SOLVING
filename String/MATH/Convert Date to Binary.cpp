#Question
// 3280. Convert Date to Binary -Easy

// You are given a string date representing a Gregorian calendar date in the yyyy-mm-dd format.
// date can be written in its binary representation obtained by converting year, month, and day to their binary representations without any leading zeroes and writing them down in year-month-day format.
// Return the binary representation of date.
// Example 1:
// Input: date = "2080-02-29"
// Output: "100000100000-10-11101"
// Explanation:
// 100000100000, 10, and 11101 are the binary representations of 2080, 02, and 29 respectively.
// Example 2:
// Input: date = "1900-01-01"
// Output: "11101101100-1-1"
// Explanation:
// 11101101100, 1, and 1 are the binary representations of 1900, 1, and 1 respectively.

#solution
class Solution {
public:
    string dectobin(int n) {
        if (n == 0)
            return "0";
        string res = "";
        while (n > 0) {
            res = char('0' +(n % 2)) + res;
            n = n / 2;
        }
        return res;
    }
    string convertDateToBinary(string date) {
        string res = "";
        string temp = "";
        int i = 0, j = date.size();
        while (i < j) {
            char c = date[i];
            if (c != '-') {
                temp = temp + c;
            } else {
                string s = dectobin(stoi(temp));
                if (!res.empty()) {
                    res = res + "-" + s;
                } else
                    res = s;
                temp = "";
            }
            i++;
        }
        if (!temp.empty()) {
            string s = dectobin(stoi(temp));
            if (!res.empty()) {
                res = res + "-" + s;
            } else
                res = s;
        }
        return res;
    }
};
