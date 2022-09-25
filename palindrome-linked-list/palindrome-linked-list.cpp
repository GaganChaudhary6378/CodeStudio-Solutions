#include <bits/stdc++.h> 
/**********************

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

***********************/
LinkedListNode<int> * reverseLL(LinkedListNode<int>* head){
    if(head==NULL){
        return head;
    }if(head->next==NULL){
        return head;
    }LinkedListNode<int> * tail=head->next;
    LinkedListNode<int> *smallOutput=reverseLL(head->next);
    tail->next=head;
    head->next=NULL;
    return smallOutput;
}

bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    if(head==NULL|| head->next==NULL){
        return true;
    }
    LinkedListNode<int>* head1=reverseLL(head);
    LinkedListNode<int>* temp=head;
    LinkedListNode<int>* temp1=head1;
    while(temp!=NULL && temp1!=NULL){
        if(temp->data==temp1->data){
            temp=temp->next;
            temp1=temp1->next;
        }else{
            return false;
        }
    }return true;
}