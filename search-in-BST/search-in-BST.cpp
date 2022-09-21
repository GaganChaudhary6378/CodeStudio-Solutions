#include <bits/stdc++.h> 
/*
    Following is the Binary Tree node structure:

    class BinaryTreeNode {
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
*/

bool searchInBST(BinaryTreeNode<int> *root, int x) {
    // Write your code here.
    if(root==NULL){
        return 0;
    }if(x==root->data){
        return 1;
    }else if(x<root->data){
        searchInBST(root->left,x);
    }else if(x>root->data){
        searchInBST(root->right,x);
    }else{
        return false;
    }
}