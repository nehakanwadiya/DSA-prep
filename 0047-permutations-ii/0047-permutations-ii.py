
class Solution:
    def permuteUnique(self, nums: list[int]) -> list[list[int]]:
        nums.sort()
        result = []
        path = []
        n = len(nums)
        used = [False] * n

        def order():
            if len(path) == n:
                result.append(path.copy())
                return

            for j in range(n):
                if used[j]:
                    continue

                if j > 0 and nums[j] == nums[j - 1] and not used[j - 1]:
                    continue

                path.append(nums[j])
                used[j] = True

                order()

                path.pop()
                used[j] = False

        order()
        return result
