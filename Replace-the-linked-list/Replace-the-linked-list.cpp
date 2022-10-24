#include <bits/stdc++.h> 
/*

Following is the Node Structure written below
 
class Node
{
	public:
	int data;
    Node * next;
	Node(int x)
	{
		data=x;
		next=NULL;
	}
};

*/

Node *replaceWithSum(Node *head)
{
    // Write your Code Here.
    Node *temp = head;
    Node *newHead = NULL;
    Node *n = NULL;
    Node *trackZero = NULL;
    if(temp->data == 0 && temp == head){
        head = temp->next;
        temp = head;
    }  
    int sum =0;
    while(temp != NULL){
        if(temp->data == 0){
            trackZero = temp;
            Node *newNode = new Node(sum);
            if(newHead == NULL){
                newHead = n = newNode;
            }else{
                n->next = newNode;
                n = newNode;
            }
            sum = 0;
        }
        sum += temp->data;
        temp = temp->next;
    }
    if(newHead == NULL){
        return head;
    }
    if(trackZero->next != NULL){
        n->next = trackZero->next;
        trackZero->next = NULL;
    }
    return newHead;
}
