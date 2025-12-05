#Questions
// You are keeping the scores for a baseball game with strange rules. At the beginning of the game, you start with an empty record.
// You are given a list of strings operations, where operations[i] is the ith operation you must apply to the record and is one of the following:
// An integer x.
// Record a new score of x.
// '+'.
// Record a new score that is the sum of the previous two scores.
// 'D'.
// Record a new score that is the double of the previous score.
// 'C'.
// Invalidate the previous score, removing it from the record.
// Return the sum of all the scores on the record after applying all the operations.
// The test cases are generated such that the answer and all intermediate calculations fit in a 32-bit integer and that all operations are valid.
// Example 1:
// Input: ops = ["5","2","C","D","+"]
// Output: 30
// Explanation:
// "5" - Add 5 to the record, record is now [5].
// "2" - Add 2 to the record, record is now [5, 2].
// "C" - Invalidate and remove the previous score, record is now [5].
// "D" - Add 2 * 5 = 10 to the record, record is now [5, 10].
// "+" - Add 5 + 10 = 15 to the record, record is now [5, 10, 15].
// The total sum is 5 + 10 + 15 = 30.

#Solution
class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> res;
        int sum = 0;
        for (int j = 0; j < operations.size(); j++) {
            if (operations[j] == "C")
                res.pop_back();
            else if (operations[j] == "D")
                res.push_back(2 * res.back());
            else if (operations[j] == "+") {
                int n = res.size();
                res.push_back(res[n - 1] + res[n - 2]);
            } 
            else {
                res.push_back(stoi(operations[j]));
            }
        }

        for (int x : res) {
            sum += x;
        }
        return sum;
    }
};
