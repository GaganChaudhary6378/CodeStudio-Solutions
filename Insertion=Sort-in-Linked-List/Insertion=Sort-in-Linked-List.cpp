#include <bits/stdc++.h> 
/****************************************************************
    Following is the Linked List node structure

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
void insertAtTail(Node* &head,Node* &tail,int element){
    Node* temp=new Node(element);
    if(head==NULL){
        head=tail=temp;
    }else{
        tail->next=temp;
        tail=temp;
    }
}
Node* insertionSortLL(Node *head)
{
    // Write your code here.
    vector<int> temp;
    Node* temp1=head;
    Node* firstHead=NULL;
    Node* tail=NULL;
    while(temp1!=NULL){
        temp.push_back(temp1->data);
        temp1=temp1->next;
    }
    sort(temp.begin(),temp.end());
    for(int i=0;i<temp.size();i++){
        insertAtTail(firstHead,tail,temp[i]);
    }
    return firstHead;
}
