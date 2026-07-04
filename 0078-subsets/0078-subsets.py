class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        subset, result = [], []
        n = len(nums)
        def dfs(i):
            if i == n:
                result.append(subset.copy())
                return

            dfs(i+1) # dont pick

            subset.append(nums[i])

            dfs(i+1) # pick
            subset.pop()

        dfs(0)
        return result 
        