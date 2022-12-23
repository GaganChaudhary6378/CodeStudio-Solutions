#include <bits/stdc++.h> 
/*
Structure of the Node of the BST is :

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val) 
    {
        data = val;
        left = right = NULL;
    }
};
*/

int findPrice(Node* root)
{
    // Write your code here.
    if(root==NULL){
        return 0;
    }if(root->left==NULL){
        return root->data;
    }findPrice(root->left);
}