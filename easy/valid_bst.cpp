#include <algorithm>
#include <iostream>

using namespace std;

// TC : O() - 49.18%
// SC : O(1)

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool isLess(int n, TreeNode *root)
{
    if (root == nullptr)
    {
        return true;
    }
    bool cond = root->val < n, right = true, left = true;

    if (!cond)
    {
        return false;
    }

    if (root->left != nullptr)
    {
        left = isLess(n, root->left);
        if (!left)
        {
            return false;
        }
    }
    if (root->right != nullptr)
    {
        right = isLess(n, root->right);
        if (!right)
        {
            return false;
        }
    }
    return right && left;
}

bool isGreater(int n, TreeNode *root)
{
    if (root == nullptr)
    {
        return true;
    }
    bool cond = root->val > n, right = true, left = true;
    if (!cond)
    {
        return false;
    }
    if (root->left != nullptr)
    {
        left = isGreater(n, root->left);
        if (!left)
        {
            return false;
        }
    }
    if (root->right != nullptr)
    {
        right = isGreater(n, root->right);
        if (!right)
        {
            return false;
        }
    }
    return left && right;
}

bool isValidBST(TreeNode *root)
{
    // tree with no nodes
    if (root == nullptr)
    {
        return true;
    }

    bool right = true, left = true;

    // only left child -> has to be less than root
    if (root->left != nullptr)
    {
        left = isValidBST(root->left) && isLess(root->val, root->left);
        if (!left)
        {
            return false;
        }
    }

    // only right child -> to be greater than root
    if (root->right != nullptr)
    {
        right = isValidBST(root->right) && isGreater(root->val, root->right);
        if (!right)
        {
            return false;
        }
    }
    return right && left;
}

int main()
{
}