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
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root == nullptr)
            return {};

        queue<TreeNode*> queuee;
        queuee.push(root);
        vector<vector<int>> ans;

        while (!queuee.empty()) {
            int size = queuee.size();
            vector<int> currLevel;
            while (size--) {
                TreeNode* node = queuee.front();
                currLevel.push_back(node->val);
                queuee.pop();

                if (node->left != nullptr) {
                    queuee.push(node->left);
                }

                if (node->right != nullptr) {
                    queuee.push(node->right);
                }
            }
            ans.push_back(currLevel);
        }
        return ans;
    }
};