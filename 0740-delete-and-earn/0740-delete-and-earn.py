class Solution:
    def deleteAndEarn(self, nums: List[int]) -> int:
        n = len(nums)

        points = [0]*(max(nums)+1)

        for num in nums:
            points[num] +=num

        if len(points) == 1:
            return points[0]

        dp = [0]*(len(points))
        dp[0] = points[0]
        dp[1] = max(points[0], points[1])

        for i in range(2,len(points)):
            dp[i] = max(dp[i-2]+points[i], dp[i-1])


        return dp[-1]

            

            

        