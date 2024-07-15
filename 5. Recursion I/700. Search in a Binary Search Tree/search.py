# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def searchBST(self, root: Optional[TreeNode], val: int) -> Optional[TreeNode]:
        currRoot = root

        if root == None:
            return None

        if val == currRoot.val:
            return currRoot
        elif val < currRoot.val:
            currRoot = self.searchBST(root.left, val)
        else:
            currRoot = self.searchBST(root.right, val)
        return currRoot