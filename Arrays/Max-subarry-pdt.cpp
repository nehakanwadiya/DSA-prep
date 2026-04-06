// Problem: Maximum subarray product
// Pattern: Kadane's Variant (Track max and min both)
// Time: O(n) | Space: O(1)
// Link: https://leetcode.com/problems/maximum-product-subarray/
// Note: Unlike sum, product needs both curr_max and curr_min tracked
//       because negative*negative can flip min into max

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_pdt  = nums[0];
        int curr_max = nums[0];
        int curr_min = nums[0];

        for(int i = 1; i < nums.size(); i++){
             int temp = curr_max;

            curr_max = max({nums[i], curr_max * nums[i], curr_min * nums[i]}); 
            curr_min = min({nums[i], temp * nums[i], curr_min * nums[i]});  

            max_pdt = max(max_pdt, curr_max);
        }
        return max_pdt;
    }
};