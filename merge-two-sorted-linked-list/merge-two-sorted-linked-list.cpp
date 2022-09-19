#include <bits/stdc++.h> 
/************************************************************

    Following is the linked list node structure.
    
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

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if(first==NULL){
        return second;
    }else if(second==NULL){
        return first;
    }
    Node<int>* fh=NULL;
    Node<int>* ft=NULL;
    if(first->data<second->data){
        fh=first;
        ft=first;
        first=first->next;
    }else{
        fh=second;
        ft=second;
        second=second->next;
    }
    while(first!=NULL && second!=NULL){
        if(first->data>second->data){
            ft->next=second;
            ft=second;
            second=second->next; 
            
        }
        else{
            ft->next=first;
            ft=first;
            first=first->next;
        
        }
    }
    if(first!=NULL){
        ft->next=first;
    }
    else{
        ft->next=second;
    }return fh;
}
