#include <bits/stdc++.h> 
/************************************************************

    Following is the linkedList class structure:

    class Node {
    public:
        int data;
        Node *next;

        Node(int val) {
            this->data = val;
            next = NULL;
        }
        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
};

************************************************************/

void merge(Node* head1, Node* head2)
{
    //    Write your code here
     Node *f= head1;
    Node *s = head2;
    while(s != NULL){
        Node *newNode = new Node(s->data);
        newNode->next = f->next;
        f->next = newNode;
        f = f->next->next;
        s = s->next;
    }
    return;
}