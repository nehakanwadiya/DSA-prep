// Problem: Maximum subarray sum
// Pattern: Kadane's Algorithm (Greedy + Dynamic Programming)
// Time: O(n) | Space: O(1)
// Link: https://leetcode.com/problems/maximum-subarray/
// Note: At each index, decide whether to extend the current subarray
//       or start fresh. Track the maximum sum seen so far.

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0];
        int curr_sum = nums[0];

        for(int i = 1; i < nums.size(); i++){
            curr_sum = max(nums[i], curr_sum + nums[i]);  // extend or restart
            max_sum = max(max_sum, curr_sum);
        }
        return max_sum;
    }
};




// Problem: Maximum subarray sum
// Pattern: brute force
// Time: O(n^2) | Space: O(1)
//Link: https://leetcode.com/problems/maximum-subarray/
// Note: Note: Try all possible subarrays by fixing a start point and expanding
//       the end. Track the maximum sum seen across all subarrays.


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = INT_MIN; 
        
        for(int start = 0; start<nums.size(); start++){
            int currsum = 0;

            for(int end = start; end<nums.size(); end++){
                currsum = currsum + nums[end];

                max_sum = max(currsum, max_sum);
            }
        } return max_sum;
    }
};
