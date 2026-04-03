// Problem: Two Sum
// Pattern: Brute Force (nested loops)
// Time: O(n²) | Space: O(1)
// Link: https://leetcode.com/problems/two-sum/
// Note: can be optimised to O(n) using HashMap

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        for(int i=0; i<n;i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]+nums[j]==target){
                   return {i,j};
                }
            }
        }
         return{}; 
    }
};