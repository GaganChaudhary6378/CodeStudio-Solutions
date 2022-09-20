/************************************************************

    Following is the linked list node structure.
    
    class Node 
    {
        public:
        int data;
        Node* next;

        Node(int data) 
        {
            this->data = data;
            this->next = NULL;
        }
    };
    
************************************************************/

Node * uniqueSortedList(Node * head) {
    // Write your code here.
    if(head==NULL){
        return head;
    }
    Node* temp=head;
    while(temp!=NULL && temp->next!=NULL){
        if(temp->data==temp->next->data){
            temp->next=temp->next->next;
        }else{
            temp=temp->next;
        }
    }
    return head;
    
}