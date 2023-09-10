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

int height(TreeNode *root){
        if(!root) return 0;

        int left=height(root->left);
        int right = height (root->right);

        if(left==-1|| right==-1) return -1;
        if(abs(left-right)>1) return -1;
        return max(left,right)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(height(root)==-1) return false;
        return true;
    }

    int main()
{

    return 0;
}