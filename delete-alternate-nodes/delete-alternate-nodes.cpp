
/*********************************************************
 
    // Following is the node structure

    class Node {
    public:
        int data;
        Node * next;
        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }
    
        ~Node() {
            if(next) {
                delete next;
            }
        }
    };

*********************************************************/

void deleteAlternateNodes(Node *head) {
    //Write your code here
    if(head==NULL || head->next==NULL){
        return;
    }Node* previous=NULL;
    Node *front=head;
    if(previous==NULL && head!=NULL){
        previous=head;
    }
    while(previous!=NULL){
        front=previous->next->next;
        previous->next=front;
        previous=front;
    }
}