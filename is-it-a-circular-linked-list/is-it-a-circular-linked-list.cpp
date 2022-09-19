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

bool circularLL(Node* head)
{
    // Write your code here
    if(head==NULL){
        return false;
    }
    Node* temp=head;
    while(temp!=NULL){
        temp=temp->next;
        if(temp==head){
            return true;
        }
    }
    return false;
}
