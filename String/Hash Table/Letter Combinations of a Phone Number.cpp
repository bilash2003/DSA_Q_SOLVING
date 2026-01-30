#Question
// 17. Letter Combinations of a Phone Number - Medium
// Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.
// A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.
// Example 1:
// Input: digits = "23"
// Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
// Example 2:
// Input: digits = "2"
// Output: ["a","b","c"]

#solution
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<vector<string>> v = {{},
                                    {},
                                    {"a", "b", "c"},
                                    {"d", "e", "f"},
                                    {"g", "h", "i"},
                                    {"j", "k", "l"},
                                    {"m", "n", "o"},
                                    {"p", "q", "r", "s"},
                                    {"t", "u", "v"},
                                    {"w", "x", "y", "z"}};

        vector<int> num;
        // int n = stoi(digits);
        // if (n < 10)
        //     return v[n];
        
        // int a = n;
        // while (a != 0) {
        //     num.push_back(a % 10);
        //     a = a / 10;
        // }
        // reverse(num.begin(), num.end());

        for(char c : digits){
            num.push_back(c-'0');
        }
        
        vector<string> res = v[num[0]];
        for (int i = 1; i < num.size(); i++) {
            vector<string> temp;
            for (string s : res) {
                for (string k : v[num[i]]) {
                    temp.push_back(s + k);
                }
            }
            res = temp;
        }

        return res;
    }
};
