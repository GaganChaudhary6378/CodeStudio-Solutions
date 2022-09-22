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

Node *changeStartNode(Node *head, int k)
{
	//	Write your code here
    if(head==NULL){
        return head;
    }
    if(head->next==NULL){
        return head;
    }
    Node* temp1=head;
    int length=0;
    while(temp1!=NULL){
        temp1=temp1->next;
        length++;
    }
    if(length-k==0){
        return head;
    }
    Node* temp=head;
    Node* newHead=NULL;
    int count=0;
    while(count<length-k-1){
        temp=temp->next;
        count++;
    }newHead=temp->next;
    temp->next=newHead->next;
    newHead->next=head;
    head=newHead;
    return head;
}