/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
          int data;
          Node *next;
          Node *prev;
          Node(int data)
          {
            this->data = data;
            this->next = NULL;
            this->prev = NULL;
          }
        };

*****************************************************************/

Node* deleteNode(Node *head, int x) {

	// Write your code here
    if(head==NULL){
        return head;
    }
    int count=0;
    Node* temp=head;
    if(head->data==x){
        head=head->next;
        head->prev=NULL;
        return head;
    }
    while(temp->next->data!=x && temp!=NULL){
        temp=temp->next;
    }temp->next=temp->next->next;
    if(temp->next!=NULL){
        temp->next->prev=temp;
    }
    return head;
}