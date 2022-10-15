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

bool findPair(Node* head, int k)
{
    // Write your code here.
    if(head==NULL){
        return head;
    }Node* fixed=head;
    Node* move=head->next;
    while(move!=NULL){
        if((fixed->data+move->data)==k){
            return true;
        }else{
            if(move->next==NULL){
                fixed=fixed->next;
                move=fixed->next;
            }else{
                move=move->next;
            }
        }
    }return false;
}

