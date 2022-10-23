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
void insertAtEnd(Node* &head, Node* &tail,int val){
   Node* temp = new Node(val);
        //empty list
        if(head == NULL) {
            head = temp;
            tail = temp;
            return;
        }
        else
        {
            tail -> next = temp;
            tail = temp;
        }
}
Node* reverseLL(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }Node* smallOutput=reverseLL(head->next);
    Node* tail=head->next;
    tail->next=head;
    head->next=NULL;
    return smallOutput;
    
}
Node *reverseAlternateNodes(Node *head)
{
   // Write your code here.
   if(head==NULL){
       return head;
   }if(head->next==NULL){
       return head;
   }if(head->next->next==NULL){
       return head;
   }
    Node* firstHead=NULL;
    Node* tail=NULL;
    int count=1;
    Node* temp=head;
    Node* previous=head;
    while(temp->next!=NULL){
        if(count%2==0){
            insertAtEnd(firstHead,tail,temp->data);
            previous->next=temp->next;
            previous=previous->next;
            temp=previous;
            count++;
        }else{
            temp=temp->next;
            count++;
        }
    }firstHead=reverseLL(firstHead);
    temp->next=firstHead;
    return head;
}