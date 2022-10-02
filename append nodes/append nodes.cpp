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

Node* addNodes(Node* head, int n, int m) {
    // Write your code here.
    if(head==NULL){
        return head;
    }
    Node* temp=head;
    Node* previous=NULL;
    while(temp!=NULL){
        int count1=0;
        int sum=0;
        while(count1<m && temp!=NULL){
            temp=temp->next;
            count1++;
        }
        if(temp==NULL){
            break;
        }
        int count2=0;
        while(count2<n && temp!=NULL){
            sum+=temp->data;
            previous=temp;
            temp=temp->next;
            count2++;
        }Node* newnode=new Node(sum);
        previous->next=newnode;
        newnode->next=temp;
    }return head;
}