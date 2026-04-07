// Problem: Search in Rotated Sorted Array
// Pattern: Binary Search with Rotation Check
// Time: O(log n) | Space: O(1)
// Link: https://leetcode.com/problems/search-in-rotated-sorted-array/
// Note: One half is always sorted. Check which half, then check if
//       target lies in that half. Move pointers accordingly.

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0, end = n-1;

        while(start <= end){                            
            int mid = start + (end-start)/2;

            if(nums[mid] == target) return mid;

            if(nums[start] <= nums[mid]){              
                if(target >= nums[start] && target < nums[mid])
                    end = mid-1;                       
                else
                    start = mid+1;
            }
            else{                                      
                if(target > nums[mid] && target <= nums[end])
                    start = mid+1;                     
                else
                    end = mid-1;
            }
        }
        return -1;
    }
};