#include <bits/stdc++.h> 
/************************************************************

    Following is the linkedList class structure:

    class Node {
    public:
        int data;
        Node *next;

        Node(int val) {
            this->data = val;
            next = NULL;
        }
        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
};

************************************************************/

void insert(Node * ( & head), int n, int pos, int val) {
    // Write your code here
    Node* newnode=new Node(val);
    Node* temp=head;
    int count=0;
    if(pos==0){
        newnode->next=temp;
        head=newnode;
        return;
    }
    while(count<pos-1 && temp!=NULL){
        temp=temp->next;
        count++;
    }Node* tail=temp->next;
    temp->next=newnode;
    newnode->next=tail;
}