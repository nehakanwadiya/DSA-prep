class Solution:
    def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
        candidates.sort()
        sol = 0
        temp = []
        ans = []
        n = len(candidates)

        def dfs(i):
            nonlocal sol

            if sol == target:
                ans.append(temp.copy())
                return

            if sol > target:
                return

            for j in range(i, n):
                if j>i and candidates[j] == candidates[j-1]:
                    continue
                if sol + candidates[j] > target:
                    break
                sol += candidates[j]
                temp.append(candidates[j])
                dfs(j+1)
                sol -= candidates[j]
                temp.pop()                

        dfs(0)
        return ans


        