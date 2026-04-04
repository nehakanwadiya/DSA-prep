// Problem: Search Insert Position
// Pattern: Binary Search
// Time: O(log n) | Space: O(1)
// Link: https://leetcode.com/problems/search-insert-position/
// Note: Returns the index if found, otherwise returns the insertion point (start).

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0;
        int end = n - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (target < nums[mid]) {
                end = mid - 1;
            } 
            else if (target > nums[mid]) {
                start = mid + 1;
            } 
            else {
                return mid; // Target found
            }
        }
        
        return start; // Target not found, return insertion index
    }
};