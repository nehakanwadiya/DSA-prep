class Solution:
    def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        subset, result = [], set()
        n = len(nums)

        def dfs(i):
            if i == n:
                result.add(tuple(subset.copy()))
                return

            dfs(i+1)

            subset.append(nums[i])

            dfs(i+1)

            subset.pop()

        dfs(0)
        return list(result)

        