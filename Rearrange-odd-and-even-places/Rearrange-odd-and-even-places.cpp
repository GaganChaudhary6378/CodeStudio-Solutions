#include <bits/stdc++.h> 
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

LinkedListNode<int>* oddEvenList(LinkedListNode<int>* head)
{
	// Write your code here.
    if(head==NULL){
        return head;
    }if(head->next==NULL){return head;}
    LinkedListNode<int>* list1=new LinkedListNode<int>(0);
    LinkedListNode<int>* list2=new LinkedListNode<int>(0);
    LinkedListNode<int>* l1=list1;
    LinkedListNode<int>* l2=list2;
    int count=0;
    while(head!=NULL){
        if(count%2==0){
            l1->next=head;
            l1=l1->next;
            count++;
        }else{
            l2->next=head;
            l2=l2->next;
            count++;
        }head=head->next;
    }l1->next=list2->next;
    l2->next=NULL;
    return list1->next;
}