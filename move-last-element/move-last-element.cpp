/****************************************************************
Following is the Linked list node structure already written

template <typename T>
class LinkedListNode
{
public:
    T data;
    LinkedListNode<T>* next;
    LinkedListNode(T data)
    { 
        this->data = data;
        next = NULL;
    }
};
*****************************************************************/


LinkedListNode<int>* moveToFront(LinkedListNode<int> *head) {

    /*
     Don't write main().
     Don't read input, it is passed as function argument.
     Write your code here.
    */
    if(head==NULL || head->next==NULL){
        return head;
    }
    LinkedListNode<int>* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }LinkedListNode<int>* newHead=temp->next;
    temp->next=NULL;
    newHead->next=head;
    return newHead;
}