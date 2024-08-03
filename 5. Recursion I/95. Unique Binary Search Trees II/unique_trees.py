# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def generateTrees(self, n: int) -> List[Optional[TreeNode]]:
        return self.buildTree(1, n);
    
    def buildTree(self, start: int, end: int) -> List[Optional[TreeNode]]:
        ans = []

        if start > end:
            ans.append(None)
            return ans

        for i in range(start, end+1):
            leftSubTree = self.buildTree(start, i-1)
            rightSubTree = self.buildTree(i+1, end)

            for j in range(len(leftSubTree)):
                for k in range(len(rightSubTree)):
                    root = TreeNode(val=i, left=leftSubTree[j], right=rightSubTree[k])
                    ans.append(root)
        return ans
        # Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def generateTrees(self, n: int) -> List[Optional[TreeNode]]:
        return self.buildTree(1, n);
    
    def buildTree(self, start: int, end: int) -> List[Optional[TreeNode]]:
        ans = []

        if start > end:
            ans.append(None)
            return ans

        for i in range(start, end+1):
            leftSubTree = self.buildTree(start, i-1)
            rightSubTree = self.buildTree(i+1, end)

            for j in range(len(leftSubTree)):
                for k in range(len(rightSubTree)):
                    root = TreeNode(val=i, left=leftSubTree[j], right=rightSubTree[k])
                    ans.append(root)
        return ans
        