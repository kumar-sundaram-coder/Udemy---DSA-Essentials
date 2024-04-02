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
    int leftLeavesSum = 0;
    int sumOfLeftLeaves(TreeNode *root)
    {
        // Base Case
        if (root == nullptr)
            return 0;

        // Recursive Case
        if (root->left != nullptr && root->left->left == nullptr &&
            root->left->right == nullptr)
        {

            leftLeavesSum += root->left->val;
        }
        sumOfLeftLeaves(root->left);
        sumOfLeftLeaves(root->right);
        return leftLeavesSum;
    }
};