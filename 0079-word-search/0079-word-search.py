class Solution:
    def exist(self, board: List[List[str]], word: str) -> bool:
        n = len(board[0])
        m = len(board)

        def words(r,c,i):
            
            if i == len(word):
                return True

            if r>=m or r<0 or c>=n or c <0:
                return False
            
            if board[r][c] != word[i]:
                return False

            temp = board[r][c]
            board[r][c] = '#'

            found = (
                words(r + 1, c, i + 1) or
                words(r - 1, c, i + 1) or
                words(r, c + 1, i + 1) or
                words(r, c - 1, i + 1)
            )

            board[r][c] = temp

            return found

        for r in range(m):
            for c in range(n):
                if words(r,c,0):
                    return True

        return False




            

            
            
        
        