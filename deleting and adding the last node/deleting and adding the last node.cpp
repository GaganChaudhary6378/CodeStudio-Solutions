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

Node *delAddLastNode(Node *head){
	// Write your code here.
    if(head==NULL){
        return head;
    }
    if(head->next==NULL){
        return head;
    }
    Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }Node* newnode=new Node(temp->next->data);
    temp->next=NULL;
    newnode->next=head;
    head=newnode;
    return newnode;
}