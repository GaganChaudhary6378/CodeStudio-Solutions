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


Node* nthNodeFromEnd(Node* head, int n)
{
    // Write your code here
    if(head==NULL){
        return head;
    }
    //First traversing the linked list to get the length
    Node* temp=head;
    int length=0;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }int k=length-n;
    int count=0;
    Node* temp1=head;
    while(count<k){
        temp1=temp1->next;
        count++;
    }return temp1;
}
