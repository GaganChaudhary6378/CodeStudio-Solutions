/****************************************************************

Following is the class structure of the Node class:

class LinkedListNode 
{
    public:
    int data;
    LinkedListNode* next;

    LinkedListNode(int data) 
    {
        this->data = data;
        this->next = NULL;
    }
};

*****************************************************************/

LinkedListNode* mergeInBetween(int x, int y, LinkedListNode *head1, LinkedListNode *head2) 
{
    // Write your code here.
    if(head1==NULL){
        return head2;
    }if(head2==NULL){
        return head1;
    }
    int count=0;
    int count1=0;
    LinkedListNode* temp=head1;
    LinkedListNode* tail=head1;
    LinkedListNode* tail2=head2;
    while(count<x-1){
        temp=temp->next;
        count++;
    }while(count1<=y){
        tail=tail->next;
        count1++;
    }
    while(tail2->next!=NULL){
        tail2=tail2->next;
    }temp->next=head2;
    tail2->next=tail;
    return head1;
}


