#include <bits/stdc++.h>

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int data)
    {
        val = data;
        left = right = NULL;
    }
};

void preorder(TreeNode *root, vector<int> &vec)
{
    if (!root)
        return;
    vec.push_back(root->val);
    preorder(root->left, vec);
    preorder(root->right, vec);
}
vector<int> preorderTraversal(TreeNode *root)
{
    vector<int> ans;
    preorder(root, ans);
    return ans;
}

int main()
{

    return 0;
}