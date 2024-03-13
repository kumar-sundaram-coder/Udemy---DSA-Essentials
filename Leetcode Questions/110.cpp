/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution
{
public:
    int heightOfTree(TreeNode *root)
    {
        if (root == nullptr)
            return 0;

        int lHeight = heightOfTree(root->left);
        int rHeight = heightOfTree(root->right);
        if (lHeight > rHeight)
        {
            return lHeight + 1;
        }
        else
        {
            return rHeight + 1;
        }
    }

    bool isBalanced(TreeNode *root)
    {
        if (root == nullptr)
            return true;
        if (root->left == nullptr && root->right == nullptr)
            return true;
        if (isBalanced(root->left) == false ||
            isBalanced(root->right) == false)
        {
            return false;
        }
        int lHeight = heightOfTree(root->left);
        int rHeight = heightOfTree(root->right);

        if (abs(lHeight - rHeight) > 1)
            return false;
        return true;
    }
};