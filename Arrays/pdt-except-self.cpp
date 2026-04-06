// Problem: Product of Array Except Self
// Pattern: Prefix + Suffix Product
// Time: O(n) | Space: O(1) (output array doesn't count)
// Link: https://leetcode.com/problems/product-of-array-except-self/
// Note: For each index, answer = product of all left * product of all right
//       No division needed — handles zeros naturally

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n, 1);

        int prefix = 1;
        for(int i = 0; i < n; i++){
            answer[i] = prefix;
            prefix *= nums[i];
        }

        int suffix = 1;
        for(int i = n-1; i >= 0; i--){
            answer[i] *= suffix;
            suffix *= nums[i];
        }

        return answer;
    }
};




// only usable when there is no 0's in a array

// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> newnums(n,1);
//         int totalProduct = 1;
        
//         for(int i =0; i < n; i++){
//             totalProduct *=nums[i];
//         }
//         for (int i = 0; i<n; i++){
//             if(nums[i]>0){
//                 newnums[i] = totalProduct/nums[i];
//                 }
//             }
//         return newnums;
//     }
// };