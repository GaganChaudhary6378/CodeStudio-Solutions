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
    };

************************************************************/
void insertAtTail(Node<int>* &head,Node<int>* &tail, int val) {
        
        Node<int>* temp = new Node<int>(val);
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
Node<int>* reverseLL(Node<int>* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node<int>* smallOutput=reverseLL(head->next);
    Node<int>* tail=head->next;
    tail->next=head;
    head->next=NULL;
    return smallOutput;
}

Node<int>* add(Node<int>* a,Node<int>* b){
    int carry=0;
    Node<int>* firstHead=NULL;
    Node<int>* tail=NULL;   
    while(a!=NULL || b!=NULL || carry!=0){
        int sum1=0;
        if(a!=NULL){
            sum1=a->data;
        }int sum2=0;
        if(b!=NULL){
            sum2=b->data;
        }int sum=sum1+sum2+carry;
        int digit=sum%10;
        insertAtTail(firstHead,tail,digit);
        carry=sum/10;
        if(a!=NULL){
            a=a->next;
        }if(b!=NULL){
            b=b->next;
        }
    }return firstHead;
}
Node<int>* addTwoLists(Node<int>* first, Node<int>* second) {
    // Write your code here.
    first=reverseLL(first);
    second=reverseLL(second);
    Node<int>* finalhead=add(first,second);
    finalhead=reverseLL(finalhead);
    return finalhead;
}