// Problem: Binary Search
// Pattern: Divide and Conquer
// Time: O(log n) | Space: O(1)
// Link: https://leetcode.com/problems/binary-search/
// Note: Works only on sorted arrays. We repeatedly divide the search space
// into half by comparing the target with the middle element.

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0;
        int end = n-1;

        while(start<=end){
            int mid = (start+end)/2;

            if(target==nums[mid]){
                return mid;
            }
            if (target < nums[mid]){
                end = mid-1;}
            else {
                start = mid+1;
            }
        }
    
    return -1;
    }
};