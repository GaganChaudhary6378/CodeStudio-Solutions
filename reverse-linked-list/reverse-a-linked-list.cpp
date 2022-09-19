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

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    if(head==NULL ||head->next==NULL){
        return head;
    }
    LinkedListNode<int> *newHead=reverseLinkedList(head->next);
    LinkedListNode<int> *tail=head->next;
    tail->next=head;
    head->next=NULL;
    return newHead;
}