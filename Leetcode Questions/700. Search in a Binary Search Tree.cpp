// Method - 1 | Iteratively

class Solution
{
public:
    TreeNode *searchBST(TreeNode *root, int val)
    {
        TreeNode *temp = root;

        while (temp != nullptr)
        {
            if (temp->val == val)
            {
                return temp;
            }
            else if (temp->val > val)
            {
                temp = temp->left;
            }
            else
            {
                temp = temp->right;
            }
        }
        return nullptr;
    }
};

// Method - 2 | Using Recursion

class Solution
{
public:
    TreeNode *searchBST(TreeNode *root, int val)
    {
        if (root == NULL)
            return NULL;

        if (root->val == val)
            return root;

        if (root->val > val)
        {
            TreeNode *left = searchBST(root->left, val);
            if (left != NULL)
                return left;
        }
        else
        {
            TreeNode *right = searchBST(root->right, val);
            if (right != NULL)
                return right;
        }
        return NULL;
    }
};