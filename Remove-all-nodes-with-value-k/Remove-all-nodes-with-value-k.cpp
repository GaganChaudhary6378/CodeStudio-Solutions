#include <bits/stdc++.h> 
/****************************************************************
    Following is the Linked List node structure

    class Node {
    public:
        int data;
        Node *next;
        Node(int data) {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

Node *removeNodes(Node *head, int k) {
    // Write your code here.
    if(head==NULL){
        return head;
    }if(head->next==NULL){
        return head;
    }Node* temp=head;
    Node* previous=NULL;
    while(temp->next!=NULL){
        if(temp->data==k){
            temp->data=temp->next->data;
            temp->next=temp->next->next;
        }else{
            previous=temp;
            temp=temp->next;
        }
    }if(temp->next==NULL && temp->data==k && previous!=NULL){
        previous->next=temp->next;
    }if(previous==NULL && temp->data==k){
        return temp->next;
    }
    return head;
}