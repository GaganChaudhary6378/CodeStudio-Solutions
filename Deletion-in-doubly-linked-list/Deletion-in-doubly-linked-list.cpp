#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node *prev;
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
                this->prev = NULL;
            }
        };

*****************************************************************/

void deleteNode(Node * ( & head), int pos) {
    // Write your code here.
    if(head==NULL){
        return;
    }
       if(pos==0){
        head=head->next;
        head->prev=NULL;
           return;
    }
    Node* temp=head;
    int c=1;
    while(c<pos&&temp!=NULL){
        temp=temp->next;
        c++;
    }
    if(temp->next->next==NULL){
        temp->next=NULL;
    }else{
    Node* a =temp->next->next;
      temp->next=a;
      a->prev=temp;
    }
}