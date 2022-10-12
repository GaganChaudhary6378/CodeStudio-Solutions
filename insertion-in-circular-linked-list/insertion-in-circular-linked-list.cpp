#include <bits/stdc++.h> 
/************************************************************

    Following is the linkedList class structure:

    class Node {
    public:
        int data;
        Node *next;
        Node *prev;

        Node(int val) {
            this->data = val;
            next = NULL;
            prev = NULL;
        }
        ~Node() {
            if(next != NULL || prev != NULL){
                delete next;
            }
        }
};

************************************************************/

Node* insert(int k, int val, Node *head) {
    // Write Your Code Here.
    Node *temp = head;
    Node *node = new Node(val);
    if(k==0){
        while(temp->next != head){
            temp = temp->next;
        }
        node->next = head;
        head = node;
        temp->next = node;
        return head;
    }
    int i=0;
    while(i != k-1 && temp->next != head){
        i++;
        temp = temp->next;
    }
    node->next = temp->next;
    temp->next = node;
    return head;
}


