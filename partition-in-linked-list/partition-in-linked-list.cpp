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

Node*findPartiton(Node*head, int x)
{
	// Write your code here
     if(head==NULL){
        return head;
    }
    Node* list1=new Node(0);
    Node* list2=new Node(0);
    Node* l1=list1;
    Node* l2=list2;
    while(head!=NULL){
        if(head->data<x){
            l1->next=head;
            l1=l1->next;
        }else{
            l2->next=head;
            l2=l2->next;
        }
        head=head->next;
    }
    l1->next=list2->next;
    l2->next=NULL;
    return list1->next;
}