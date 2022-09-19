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

Node *findMiddle(Node *head) {
    if(head==NULL){
        return head;
    }
    Node* tail=head;
    int count=0;
    while(tail->next!=NULL){
        count++;
        tail=tail->next;
    }Node* slow=head;
        Node* fast=head->next;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;// It is moving with 1 step
            fast=fast->next->next;//It is moving with 2 steps
        }if(count%2==0){
    return slow;
    }else{
            return slow->next;
        }
}
