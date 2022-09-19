#include <bits/stdc++.h> 
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    //  Write your code here.
    vector<int> ans;
    if(root==NULL){
        return ans;
    }if(root->val==-1){
        return ans;
    }
    cout<<root->val<<" ";
    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        BinaryTreeNode<int>* front=pendingNodes.front();
        pendingNodes.pop();
        if(front->left!=NULL){
            BinaryTreeNode<int>* leftChild=front->left;
            ans.push_back(leftChild->val);
            pendingNodes.push(leftChild);
        }
        if(front->right!=NULL){
            BinaryTreeNode<int>* rightChild=front->right;
            ans.push_back(rightChild->val);
            pendingNodes.push(rightChild);
        }
    }return ans;
}