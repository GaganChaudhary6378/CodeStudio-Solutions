#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };


************************************************************/
void getInorder(vector<int> &in,BinaryTreeNode<int>* root){
    if(root==NULL){
        return;
    }getInorder(in,root->left);
    in.push_back(root->data);
    getInorder(in,root->right);
}
void getPreorder(vector<int>& pre,BinaryTreeNode<int>* root){
    if(root==NULL){
        return;
    }pre.push_back(root->data);
    getPreorder(pre,root->left);    
    getPreorder(pre,root->right);
}
void getPostorder(vector<int>& post,BinaryTreeNode<int>* root){
    if(root==NULL){
        return;
    }getPostorder(post,root->left);    
    getPostorder(post,root->right);
    post.push_back(root->data);
}

vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    
    // Write your code here.
    vector<vector<int>> answer;
    vector<int> in;
    vector<int> pre;
    vector<int> post;
    getInorder(in,root);    
    getPreorder(pre,root);
    getPostorder(post,root);
    answer.push_back(in);    
    answer.push_back(pre);
    answer.push_back(post);
    return answer;

}