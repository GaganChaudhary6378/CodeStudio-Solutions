#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

    class Node{
    public:
        int data;
        Node *next;
        Node(int data){
            
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

Node *getListAfterAddingNodes(Node *head, int k){
    //	Write your code here.
    if(head==NULL){
        return head;
    }int sum;
    int count;
    Node* temp=head;
    while(temp!=NULL){
        sum=0;
        count=0;
        while(count<k-1 && temp->next!=NULL){
            sum+=temp->data;
            temp=temp->next;
            count++;
        }sum+=temp->data;
        if(temp->next==NULL){
            Node* newNode=new Node(sum);
            temp->next=newNode;
            temp=temp->next->next;
        }else{
            Node* remainingNodes=temp->next;
            Node* newNode=new Node(sum);
            temp->next=newNode;
            newNode->next=remainingNodes;
            // Reassign temp, sum and count
            temp=temp->next->next;
        }
    }return head;
}