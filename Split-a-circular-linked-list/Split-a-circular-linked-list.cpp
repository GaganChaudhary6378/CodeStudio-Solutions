#include <bits/stdc++.h> 
/********************************
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

void splitCircularList(Node *head)
{
   if(head==NULL || head->next==head)
       return;
   Node *slow=head,* fast=head;
   while(fast->next!=head){
       fast=fast->next;
       slow=slow->next;
       if(fast->next!=head)
           fast=fast->next;
   }
   fast->next=slow;
   Node *temp = head;
   while(temp->next!=slow){
       temp=temp->next;
   }
   temp->next=head;
}
 