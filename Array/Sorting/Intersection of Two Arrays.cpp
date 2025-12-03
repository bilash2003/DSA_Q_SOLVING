#Questions
// Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.
// Example 1:
// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2]
// Example 2:
// Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
// Output: [9,4]
// Explanation: [4,9] is also accepted.

#solution 
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;

        sort(nums1.begin(), nums1.end());
        nums1.erase(unique(nums1.begin(), nums1.end()),nums1.end()); // remove duplicate

        sort(nums2.begin(), nums2.end());
        nums2.erase(unique(nums2.begin(), nums2.end()),nums2.end());

        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    v.push_back(nums1[i]);
                    break;
                }
            }
        }
        return v;
    }
};
