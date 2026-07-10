class Solution:
    def climbStairs(self, n: int) -> int:
        ans = 0

        seen = set()

        if n <=2:
            return n

        dp = [0]*(n+1)
        dp[1] = 1
        dp[2] = 2

        for j in range(3, n+1):
            dp[j] = dp[j-1] + dp[j-2]

        return dp[n]


                
        