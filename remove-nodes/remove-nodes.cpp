#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:
    
    class Node {
        public:
            int data;
            Node *next;
            Node(int data) {
                this->data = data;
                this->next = NULL;
            }
    };

*****************************************************************/
    int length(Node *head){
    Node *temp = head;
    if(head == NULL){
        return 0;
    }
    int len = 0;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}
Node* removeNpowNodes(Node *head) {
    // Write your code here.
    int lengt = length(head);
    int num = 1;
    int i = 0;
    int count =1;
    Node *temp = head;
    while(num<=lengt && temp != NULL){
        if(count== num){
            temp->data = -1;
            i++;
            num = pow(2,i);
        }
        temp = temp->next;
        count++;
    }
    temp = head;
    Node *curr = head;
    while(temp != NULL){
        if(temp == head && temp->data == -1){
            head = temp->next;
            temp->next = NULL;
            temp = head;
        }else{
            if(temp->next != NULL && temp->next->data == -1){
                curr = temp->next->next;
                temp->next = curr;
            }
            temp = temp->next;
        }
    }
    
    return head;
}

