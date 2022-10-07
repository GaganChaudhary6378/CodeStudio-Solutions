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
Node* reverseHelper(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* smallOutput=reverseHelper(head->next);
    Node* tail=head->next;
    tail->next=head;
    head->next=NULL;
    return smallOutput;
}

Node *reverseSublist(Node *head, int x, int y)
{
    // Write your code here
    Node* temp=head;
    Node* tail=head;
    if(head==NULL){
        return head;
    }
    int count=1;
    int count1=1;
    if(x==y){
        return head;
    }
    while(count<x-1){
        temp=temp->next;
        count++;
    }
    while(count1<y){
        tail=tail->next;
        count1++;
    }if(tail->next==NULL && x==1){
       Node* ekAurNayiNode=reverseHelper(temp);
       return ekAurNayiNode;
    }
    if(temp==head && x==1){
        Node* firseEkAurNode=tail->next;
        tail->next=NULL;
        Node* aaGayiReverseHokar=reverseHelper(temp);
        temp->next=firseEkAurNode;
        return aaGayiReverseHokar;
    }else{
    Node* aageWaaliNode=tail->next;
    Node* joReverseKarniHai=temp->next;
    temp->next=aageWaaliNode;
    tail->next=NULL;
    
    Node* reverseHoneKeBaad=reverseHelper(joReverseKarniHai);
    temp->next=reverseHoneKeBaad;
    joReverseKarniHai->next=aageWaaliNode;
    return head;
    }
}