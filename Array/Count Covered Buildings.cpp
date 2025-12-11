#Questions
// 3531. Count Covered Buildings
// You are given a positive integer n, representing an n x n city. You are also given a 2D grid buildings, where buildings[i] = [x, y]
// denotes a unique building located at coordinates [x, y].
// A building is covered if there is at least one building in all four directions: left, right, above, and below.
// Return the number of covered buildings.
// Example 1:
// Input: n = 3, buildings = [[1,2],[2,2],[3,2],[2,1],[2,3]]

// Output: 1
// Explanation:

// Only building [2,2] is covered as it has at least one building:
// above ([1,2])
// below ([3,2])
// left ([2,1])
// right ([2,3])
// Thus, the count of covered buildings is 1.

#Solution
class Solution {
public:
    int countCoveredBuildings(int n, vector<vector<int>>& buildings) {
        int res = 0;
        unordered_map<int, set<int>> um_x;
        unordered_map<int, set<int>> um_y;
        // storing map -set like [2]->{1,2,3} for x=2
        for (auto i : buildings) {
            um_x[i[0]].insert(i[1]);
            um_y[i[1]].insert(i[0]);
        }
        for (auto i : buildings) {
            int x = i[0];
            int y = i[1];
            // * use as iterator itself is not the value, it’s an object that points to the value
            if (*um_x[x].begin() == y || *um_y[y].begin() == x) {
                continue;
            }
            if (*um_x[x].rbegin() == y || *um_y[y].rbegin() == x) {
                continue;
            }
            res++;
        }
        return res;
    }
};
