class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        ans = []
        sol = []
        n = len(nums)
        temp = [False]*n


        def dfs(i):
            if i == n:
                ans.append(sol.copy())
                return
                
            for j in range(n):
                if temp[j] == False:
                    sol.append(nums[j])
                    temp[j] = True
                    dfs(i+1)
                    sol.pop()
                    temp[j] = False
        dfs(0)
        return ans


                




        
        