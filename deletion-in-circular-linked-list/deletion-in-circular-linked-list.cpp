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

Node *deleteNode(Node *head, int val)
{
    // Write your code here.
   
    Node *temp = head;
    if(head->next == head  && head->data != val){
        return head;
    }else if(head->next == head && head->data == val){
        return NULL;
    }else if(head->data == val){
        while(temp->next != head){
            temp = temp->next;
        }
        Node *nodeToBeDelete = head;
        head = head->next;
        temp->next = head;
        nodeToBeDelete->next = NULL;
        delete nodeToBeDelete;
        return head;
    }
    Node *prev = head;
    temp = head->next;
    while(temp != head && temp->data != val){
        prev = temp;
        temp = temp->next; 
    }
    if(prev->next->data != val){
        return head;
    }
    prev->next = temp->next;
    temp->next=NULL;
    delete temp;
    return head;
    
}