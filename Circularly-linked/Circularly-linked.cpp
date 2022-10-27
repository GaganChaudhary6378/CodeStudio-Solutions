#include <bits/stdc++.h> 
/*************************************************
        Following is the structure of class Node:
     
        class Node{
        public:
            int data;
            Node* next;
            
            Node(int data){
                this->data = data;
                this->next = NULL;
            }
            
        }
**************************************************/

bool isCircular(Node* head){

   // Write your code here.

   if(head==NULL)

       return true;

   if(head->next==NULL)

       return false;

   if(head->next==head)

       return true;

   Node* ptr=head->next;

   head->data=0;

   while(ptr!=NULL && ptr->data!=0){

       ptr->data=0;

       ptr=ptr->next;

   }

   if(ptr==NULL)

       return false;

   if(ptr->data==0 && ptr!=head)

       return false;

   return true;

}
Circularly-linked