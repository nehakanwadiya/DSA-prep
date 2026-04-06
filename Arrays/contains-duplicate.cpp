// Problem: Contains Duplicate 
// Pattern: Optimised approach using sorting
// Time: O(nlogn) | Space: O(1)
// Link: https://leetcode.com/problems/contains-duplicate/description/
// Note: Can be done in O(n) and its is more simpler using sorting in ascending order

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int freq = 1; 
        for(int i=1;i<nums.size(); i++){
            if(nums[i]==nums[i-1]){
            return true;
        }
        }
        return false;
    }
};