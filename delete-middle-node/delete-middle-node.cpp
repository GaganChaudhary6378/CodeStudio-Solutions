/************************************************************

    Following is the linked list node structure:
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* deleteMiddle(Node<int>* head){
    // Write your code here.
    if(head==NULL){
        return head;
    }
    if(head->next==NULL){
        return NULL;
    }
    if(head->next->next==NULL){
        return head->next;
    }
    Node<int>* slow=head;
    Node<int>* fast=head->next;
    Node<int>* previous=head;
    while(fast!=NULL && fast->next!=NULL){
        previous=slow;
        slow=slow->next;
        fast=fast->next->next;
    }previous->next=slow->next;
    slow->next=NULL;
     return head;
}