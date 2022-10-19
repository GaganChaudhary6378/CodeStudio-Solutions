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
Node* reverseLL(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }Node* smallOutput=reverseLL(head->next);
    Node* tail=head->next;
    tail->next=head;
    head->next=NULL;
    return smallOutput;
}
void insertAtEnd(Node* &head,Node* &tail,int data){
    Node* temp=new Node(data);
    if(head==NULL){
        head=temp;
        tail=temp;
        return;
    }else{
        tail->next=temp;
        tail=temp;
    }
}
Node* add(Node* first,Node* second){
    Node* firstHead=NULL;
    Node* tail=NULL;
    int carry=0;
    while(first!=NULL || second!=NULL || carry!=0){
        int sum=0;
        if(first!=NULL){
            sum=sum+first->data;
            first=first->next;
        }if(second!=NULL){
            sum=sum+second->data;
            second=second->next;
        }sum=sum+carry;
        int digit=sum%10;
        insertAtEnd(firstHead,tail,digit);
        carry=sum/10;
    }return firstHead;
}
Node *addFirstAndSecondHalf(Node *head){
    if(head==NULL){
        return head;
    }
    if(head->next==NULL){
        return head;
    }if(head->next==0){
        return 0;
    }

    Node* slow=head;
    Node* fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    Node* secondHalf=slow->next;
    slow->next=NULL;
    Node* firstHalf=head;
    firstHalf=reverseLL(firstHalf);
    secondHalf=reverseLL(secondHalf);
    Node* finalNode=add(firstHalf,secondHalf);
    finalNode=reverseLL(finalNode);
    while(finalNode!=NULL && finalNode->next!=NULL && finalNode->data==0){
        finalNode=finalNode->next;
    }return finalNode;
}

