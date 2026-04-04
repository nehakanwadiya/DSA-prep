// Problem: Move Zeroes
// Pattern: Two Pointers (Read/Write Heads)
// Time: O(n) | Space: O(1)
// Link: https://leetcode.com/problems/move-zeroes/
// Note: Efficiently shifts all non-zero elements to the front while maintaining order.

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = 0; // The 'write' pointer

        for (int i = 0; i < n; i++) {
            // If the 'read' pointer (i) finds a non-zero element
            if (nums[i] != 0) {
                // Swap it with the position of the 'write' pointer (j)
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};