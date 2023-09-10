#include <bits/stdc++.h>

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int data){
        val=data;
        left=right=NULL;
    }
};

void inorder(TreeNode *root, vector<int> &vec)
{
    if (!root)
        return;
    inorder(root->left, vec);
    vec.push_back(root->val);
    inorder(root->right, vec);
}

vector<int> inorderTraversal(TreeNode *root)
{
    vector<int> ans;
    inorder(root, ans);
    return ans;
}

int main()
{

    return 0;
}