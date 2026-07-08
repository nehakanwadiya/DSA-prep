class Solution:
    def makesquare(self, matchsticks: List[int]) -> bool:
        if sum(matchsticks)%4 != 0:
            return False

        matchsticks.sort(reverse=True)
        target = sum(matchsticks)//4

        if matchsticks[0]>target:
            return False
        
        n = len(matchsticks)
        used = [False]*n

        def dfs(start, curr_sum, bucket_list):
            if bucket_list == 3:
                return True
            if curr_sum == target:
                return dfs(0,0,bucket_list +1)

            for i in range(start, n):
                if used[i] == True:
                    continue
                if curr_sum + matchsticks[i]> target:
                    continue
                
                used[i] = True
                if dfs(i+1, curr_sum + matchsticks[i], bucket_list):
                    return True
                used[i] = False

            return False
        return dfs(0,0,0)
        