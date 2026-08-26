# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        #Practice Iterative BFS
        #Remember that BFS uses a queue
        if not root:
            return 0
        else:
            queue = deque()#Added first node, i.e. root
            queue.append(root)
            level = 0
            while queue:
                for i in range(len(queue)):
                    node = queue.popleft()
                    if node.left:
                        queue.append(node.left)
                    if node.right:
                        queue.append(node.right)
                level+= 1
            return level
                #Till there are elements in queue
        