class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:

        sol = 0
        ans = []
        temp = []
        n = len(candidates)

        def dfs(i):
            nonlocal sol 
            if sol == target:
                ans.append(temp.copy())

            if sol > target:
                return
            
            for j in range(i,n):
                sol += candidates[j]
                temp.append(candidates[j])
                dfs(j)
                sol -= candidates[j]
                temp.pop()

        dfs(0)
        return ans
            



