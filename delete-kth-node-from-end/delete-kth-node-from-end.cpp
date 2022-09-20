#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int>* removeKthNode(LinkedListNode<int> *head, int K){
    if(head==NULL){
        return head;
    }if(K==0){
        return head;
    }
    int length=0;
    LinkedListNode<int> *temp=head;
    LinkedListNode<int> *newTemp=head;
    while(temp!=NULL){
        length++;
        temp=temp->next;
    }int front=length-K;
    
    for(int i=1;i<front;i++){
        newTemp=newTemp->next;
    }
    if(K==length){
        return head->next;
    }
    newTemp->next=newTemp->next->next;
    return head;
}
