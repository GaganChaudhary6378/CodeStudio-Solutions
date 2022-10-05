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

Node *deleteNode(Node *head, int pos)
{
    // Write your code here.
    if(head==NULL){
        return head;
    }if(pos==0){
        return head->next;
    }
    int count=0;
    Node* temp=head;
    while(count<pos-1 && temp->next!=NULL){
        temp=temp->next;
        count++;
    }if(temp->next==NULL){
        return head;
    }else{
        temp->next=temp->next->next;
        return head;
    }
}
