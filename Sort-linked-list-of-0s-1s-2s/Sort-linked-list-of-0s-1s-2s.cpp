
#include <bits/stdc++.h>
using namespace std;
/********************************
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

********************************/

void insertAtTail(Node* &head,Node* &tail,int element){
    Node* temp=new Node(element);
    if(head==NULL){
        head=tail=temp;
    }else{
        tail->next=temp;
        tail=temp;
    }
}
Node* sortList(Node *head)
{
    // Write your code here.
    vector<int> a;
    Node* temp=head;
    Node* firstHead=NULL;
    Node* tail=NULL;
    while(temp!=NULL){
        a.push_back(temp->data);
        temp=temp->next;
    }
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        insertAtTail(firstHead,tail,a[i]);
    }
    return firstHead;

}
