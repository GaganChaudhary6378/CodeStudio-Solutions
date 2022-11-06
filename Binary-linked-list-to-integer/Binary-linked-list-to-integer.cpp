/************************************************************

    Following is the linkedList class structure:

    class Node {
    public:
        int data;
        Node *next;

        Node(int val) {
            this->data = val;
            next = NULL;
        }
        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
};

************************************************************/
Node* reverseLL(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }Node* smallOutput=reverseLL(head->next);
    Node* tail=head->next;
    tail->next=head;
    head->next=NULL;
    return smallOutput;
}
int binaryToInteger(int n, Node *head) {
    //    Write your code here
    if(head==NULL){
        return 0;
    }
    head=reverseLL(head);
    Node* temp=head;
    int ans=0;
    int initial=1;
    while(temp!=NULL){
        ans+=temp->data*initial;
        temp=temp->next;
        initial*=2;
    }return ans;
}