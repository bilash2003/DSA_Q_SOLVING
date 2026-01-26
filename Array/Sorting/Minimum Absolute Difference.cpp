#Question
// 1200. Minimum Absolute Difference - Easy
// Given an array of distinct integers arr, find all pairs of elements with the minimum absolute difference of any two elements.
// Return a list of pairs in ascending order(with respect to pairs), each pair [a, b] follows
// a, b are from arr
// a < b
// b - a equals to the minimum absolute difference of any two elements in arr
// Example 1:
// Input: arr = [4,2,1,3]
// Output: [[1,2],[2,3],[3,4]]
// Explanation: The minimum absolute difference is 1. List all pairs with difference equal to 1 in ascending order.
// Example 2:
// Input: arr = [1,3,6,10,15]
// Output: [[1,3]]
// Example 3:
// Input: arr = [3,8,-10,23,19,-4,-14,27]
// Output: [[-14,-10],[19,23],[23,27]]

#Solution
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> res;
        int min_diff = INT_MAX;
        for (int i = 0, j = 1; j < arr.size(); j++, i++) {
            if (arr[j] - arr[i] < min_diff)
                min_diff = arr[j] - arr[i];
        }
        for (int i = 0, j = 1; j < arr.size(); j++, i++) {
            vector<int> v;
            if (arr[j] - arr[i] == min_diff) {
                v.push_back(arr[i]);
                v.push_back(arr[j]);
            }
            if (!v.empty())
                res.push_back(v);
        }
        return res;
    }
};
