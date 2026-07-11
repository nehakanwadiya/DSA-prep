class Solution:
    def rob(self, nums: List[int]) -> int:
        n = len(nums)

        if n == 1:
            return nums[0]
        if n == 2:
            return max(nums[0], nums[1])

        answer1 = 0
        answer2 = 0

        def house(nums):
            prev2 = 0
            prev1 = 0

            for money in nums:
                curr =max(prev1, prev2+money)
                prev2 = prev1
                prev1 = curr 
            return prev1

        answer1 = house(nums[:-1])
        answer2 = house(nums[1:])

        return max(answer1, answer2)

            