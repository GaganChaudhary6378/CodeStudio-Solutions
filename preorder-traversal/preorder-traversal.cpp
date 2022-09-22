#include <bits/stdc++.h> 
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
void getPreSolved(TreeNode* root,vector<int>& ans){
    if(root==NULL){
        return;
    }ans.push_back(root->data);
    getPreSolved(root->left,ans);
    getPreSolved(root->right,ans);
}
vector<int> getPreOrderTraversal(TreeNode *root)
{
    // Write your code here.
    vector<int> ans;
    getPreSolved(root,ans);
    return ans;
}