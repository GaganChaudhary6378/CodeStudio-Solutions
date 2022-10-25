/************************************************************
   
   Following is the TreeNode class structure
   
   class TreeNode<T>
   { 
   public:
        T data; 
        TreeNode<T> *left;
        TreeNode<T> *right;
   
        TreeNode(T data) 
  		{ 
            this -> data = data; 
            left = NULL; 
            right = NULL; 
        }
   };
   
   
 ************************************************************/
int getPosition(vector<int> inOrder,int element,int size){
    for(int i=0;i<size;i++){
        if(inOrder[i]==element){
            return i;
        }
    }return -1;
}

TreeNode<int>* solve(vector<int> &postOrder,vector<int> &inOrder,int &index,int inorderStart,int inorderEnd,int size){
    if(inorderStart>inorderEnd || index<0){
        return NULL;
    }int element=postOrder[index--];
    TreeNode<int>* root=new TreeNode<int>(element);
    int position=getPosition(inOrder,element,size);
    root->right=solve(postOrder,inOrder,index,position+1,inorderEnd,size);
    root->left=solve(postOrder,inOrder,index,inorderStart,position-1,size);    
    return root;
}

TreeNode<int>* getTreeFromPostorderAndInorder(vector<int>& postOrder, vector<int>& inOrder) 
{
	// Write your code here.
    int size=postOrder.size();
    int index=size-1;
    TreeNode<int>* finalRoot=solve(postOrder,inOrder,index,0,size-1,size);
    return finalRoot;
}
