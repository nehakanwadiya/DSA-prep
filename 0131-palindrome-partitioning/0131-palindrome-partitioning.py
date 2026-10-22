class Solution:
    def partition(self, s: str) -> List[List[str]]:
        ans = []
        path = []
        n = len(s)

        def dfs(i):
            if i == n:
                ans.append(path.copy())
                return

            for j in range(i,n):
                piece = s[i:j+1]

                if piece == piece[::-1]:
                    path.append(piece)

                    dfs(j+1)
                    path.pop()

        dfs(0)
        return ans

                
                    


        
        
        
        
        