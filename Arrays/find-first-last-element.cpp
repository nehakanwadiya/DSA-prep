// Problem: Find First and Last Position of Element in Sorted Array
// Pattern: Binary Search (twice)
// Time: O(log n) | Space: O(1)
// Link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
// Note: Run binary search twice — once biased to the left for first
//       occurrence, once biased to the right for last occurrence

class Solution {
public:
    int findLeft(vector<int>& nums, int target){
        int start = 0, end = nums.size()-1;
        int left = -1;

        while(start <= end){
            int mid = start + (end-start)/2;

            if(nums[mid] == target){
                left = mid;      
                end = mid-1;
            }
            else if(nums[mid] < target)
                start = mid+1;
            else
                end = mid-1;
        }
        return left;
    }

    int findRight(vector<int>& nums, int target){
        int start = 0, end = nums.size()-1;
        int right = -1;

        while(start <= end){
            int mid = start + (end-start)/2;

            if(nums[mid] == target){
                right = mid;      
                start = mid+1;    
            }
            else if(nums[mid] < target)
                start = mid+1;
            else
                end = mid-1;
        }
        return right;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        return {findLeft(nums, target), findRight(nums, target)};
    }
};