/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    TreeNode *searchBST(TreeNode *root, int val)
    {
        TreeNode *currRoot = root;

        if (root == nullptr)
        {
            return nullptr;
        }

        if (val == currRoot->val)
        {
            return currRoot;
        }
        else if (val < currRoot->val)
        {
            currRoot = searchBST(root->left, val);
        }
        else
        {
            currRoot = searchBST(root->right, val);
        }
        return currRoot;
    }
};