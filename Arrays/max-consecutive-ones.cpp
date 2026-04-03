// Problem: Max Consecutive Ones
// Pattern: Brute Force (nested loops)
// Time: O(n) | Space: O(1)
// Link: https://leetcode.com/problems/max-consecutive-ones/
// Note: The brute force approach checks all subarrays, but it can be



class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count=0; // count of consecutive
        int maxCount = 0; // initially

         for (int i=0; i<n; i++){
            if(nums[i]==1){
                count++;
                maxCount = max(count, maxCount);
         }

            else count = 0;
         }
         return maxCount;
    };

};