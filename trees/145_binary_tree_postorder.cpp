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

void postorder(TreeNode *root, vector<int> &vec)
{
    if (!root)
        return;
    postorder(root->left, vec);
    postorder(root->right, vec);
    vec.push_back(root->val);
}
vector<int> postorderTraversal(TreeNode *root)
{
    vector<int> ans;
    postorder(root, ans);
    return ans;
}

int main()
{

    return 0;
}