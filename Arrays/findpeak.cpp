// Problem: Find Peak in Mountain Array
// Pattern: Binary Search on Answer
// Time: O(log n) | Space: O(1)
// Note: Compare mid with mid+1 to determine which side of mountain you're on


class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int start = 0; int end = n-1;

        while(start<end){
            int mid =start + (end-start)/2;
            if(nums[mid]<nums[mid+1]){
                start = mid +1;
            }
            else end = mid; 
            
        }
        return start;
    }
};