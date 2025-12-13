#Questions - Medium
// 49. Group Anagrams
// Given an array of strings strs, group the anagrams together. You can return the return th any order.
// Example 1:
// Input: strs = ["eat","tea","tan","ate","nat","bat"]
// Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
// Explanation:
// There is no string in strs that can be rearranged to form "bat".
// The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.
// The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.
// Example 2:
// Input: strs = [""]
// Output: [[""]]

// Example 3:
// Input: strs = ["a"]
// Output: [["a"]]

#solution 
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> um;
        for(auto x:strs){
            string s=x;
            sort(s.begin(),s.end());
            um[s].push_back(x);
        }
        vector<vector<string>>res;
        for(auto &x:um){
            res.push_back(x.second);
        }
        return res;
    }
};

 
