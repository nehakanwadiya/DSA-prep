class Solution:
    def distributeCookies(self, cookies: List[int], k: int) -> int:
        cookies.sort(reverse=True)
        children = [0]*k

        ans = float("inf")

        def dfs(i):
            nonlocal ans
            if i == len(cookies):
                ans = min(ans, max(children))
                return

            for child in range(k):
                children[child] += cookies[i]

                dfs(i+1)

                children[child] -= cookies[i]
                if children[child] == 0:
                    break

        dfs(0)
        return ans 



        


        