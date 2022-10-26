/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
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
    
***********************************************************/

int noOfLeafNodes(BinaryTreeNode<int> *root){
    // Write your code here.
    if(root==NULL){
        return 0;
    }int total=0;
    if(root->left==NULL && root->right==NULL){
        total=1;
    }total+=noOfLeafNodes(root->left);
    total+=noOfLeafNodes(root->right);
    return total;
}