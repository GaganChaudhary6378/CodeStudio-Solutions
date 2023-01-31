#include <bits/stdc++.h> 
/*
class Node {
   public:
    int value;
    Node* prev;
    Node* next;

    Node(int val) {
        value = val;
        prev = next = NULL;
    }
};

*/

void insertAtTail(Node*& head,Node* &tail,int element){
    Node* temp=new Node(element);
    if(head==NULL){
        head=tail=temp;
        return;
    }else{
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
}
Node* quickSort(Node* head) {
    // Write your code here.
    vector<int> a;
    Node* firstHead=NULL;
    Node* tail=NULL;
    Node* temp=head;
    while(temp!=NULL){
        a.push_back(temp->value);
        temp=temp->next;
    }
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        insertAtTail(firstHead,tail,a[i]);
    }return firstHead;
}