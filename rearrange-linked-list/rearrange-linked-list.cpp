#include <bits/stdc++.h> 
/************************************************************

    Following is the linked list node structure

    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* rearrangeList(Node<int>* head)
{
    // Write your code here.
    if(head==NULL){
        return head;
    }if(head->next->next==NULL){
        return head;
    }Node<int>* slow=head;
    Node<int>* fast=head;
    while(slow->next!=NULL){
        while(fast->next->next!=NULL){
            fast=fast->next;
        }if(slow==fast){
            return head;
        }else{
            Node<int>* temp=slow->next;
            slow->next=fast->next;
            fast->next=NULL;
            fast=slow->next;
            fast->next=temp;
            slow=fast->next;
        }
    }return head;
}