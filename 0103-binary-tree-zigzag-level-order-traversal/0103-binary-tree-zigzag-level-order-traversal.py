from collections import deque
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def zigzagLevelOrder(self, root: TreeNode | None) -> list[list[int]]:
        queue = deque([root])
        res = []
        depth = 0

        if not root:
            return []

        while queue:
            n = len(queue)
            level = []

            for i in range(n):
                node = queue.popleft()
                level.append(node.val)

                if node.left:
                    queue.append(node.left)

                if node.right:
                    queue.append(node.right)
                
            if depth % 2== 1:
                level.reverse()
            res.append(level)
            depth +=1
        
        return res 

                


        