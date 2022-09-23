/****************************************************************
 
    Following is the class structure of the Node class:

    class Node
    {
    	public:
        int data;
        Node *next;
        Node(int data)
        {
	        this->data = data;
	        this->next = NULL;
        }
    };

*****************************************************************/

int findNode(Node *head, int n){
    // Write your code here.
    if(head==NULL){
        return -1;
    }
    Node* temp=head;
    int count=0;
    while(temp->data!=n && temp->next!=NULL){
        temp=temp->next;
        count++;
    }if(temp->next==NULL){
        return -1;
    }else{
        return count;
    }
}