class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        window_sum = sum(nums[:k])
        maximum = window_sum

        for right in range(k, len(nums)):
            window_sum += nums[right]
            window_sum -= nums[right-k]
            
            maximum = max(window_sum, maximum)
        return maximum/k 
        