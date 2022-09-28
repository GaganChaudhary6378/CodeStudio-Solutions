#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
/********************************

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

********************************/


Node *rotate(Node *head, int k) {
     // Write your code here.
    if(head==NULL){
        return head;
    }if(head->next==NULL){
        return head;
    }if(k==0){
        return head;
    }
    int i=0;
    while(i<k){
        Node* temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        Node *newnode=temp->next;
        temp->next=NULL;
        newnode->next=head;
        head=newnode;
        i++;
    }
    return head;
}