#include <bits/stdc++.h> 
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
void insertAtTail(Node* &head,Node* &tail, int val) {
        
        Node* temp = new Node(val);
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
Node* reverseLL(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* smallOutput=reverseLL(head->next);
    Node* tail=head->next;
    tail->next=head;
    head->next=NULL;
    return smallOutput;
}

Node* add(Node* a,Node* b){
    int carry=0;
    Node* firstHead=NULL;
    Node* tail=NULL;   
    while(a!=NULL || b!=NULL || carry!=0){
        int sum=0;
        if(a!=NULL){
            sum=sum+a->data;
            a=a->next;
        }
        if(b!=NULL){
            sum=sum+b->data;
            b=b->next;
        }sum=sum+carry;
        int digit=sum%10;
        insertAtTail(firstHead,tail,digit);
        carry=sum/10;
    }return firstHead;
}
Node* addFirstAndReversedSecondHalf(Node* head)
{
    //  Write your code here.
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* slow=head;
    Node* fast=slow->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    Node* secondNode=slow->next;
    slow->next=NULL;
    Node* firstNode=head;
    firstNode=reverseLL(firstNode);
    Node* finalNode=add(firstNode,secondNode);
    finalNode=reverseLL(finalNode);
    while(finalNode!=NULL && finalNode->next!=NULL && finalNode->data==0){
        finalNode=finalNode->next;
    }
    return finalNode;
}
