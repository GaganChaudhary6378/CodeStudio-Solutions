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
Node * detectLoop(Node * head){
   if(head==NULL || head->next==NULL){
       return NULL;
   }
   Node * fast=head, * slow=head;
   while(fast!=NULL && slow!=NULL){
       fast=fast->next->next;
       slow=slow->next;
       if(slow==fast){
           return slow;
       }
   }
   return NULL;
}


Node * startOfLoop(Node * head, Node * intersection){
   Node * slow=head;
   Node * fast=intersection;
   while(fast!=slow){
       fast=fast->next;
       slow=slow->next;
   }
   return slow;
}

void removeLoop(Node * start){
   Node* temp=start->next;
   while(temp->next!=start){
       temp=temp->next;
   }
   temp->next=NULL;
}


bool detectAndRemoveCycle(Node* head)
{
   Node * intersection=detectLoop(head);
   if(intersection==false){
       return false;
   }
   else{
       Node * start=startOfLoop(head,intersection);
   removeLoop(start);
       return true;
   }
}