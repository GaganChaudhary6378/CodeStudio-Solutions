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
void insertAtTail(Node* & head,Node* &tail,int val){
    Node* temp=new Node(val);
    if(head==NULL){
        head=tail=temp;
    }else{
        tail->next=temp;
        tail=temp;
    }
}
Node *removeDuplicates(Node *head)
{
    // Write your code here
    if(head==NULL){
        return head;
    }
    if(head->next==NULL){
        return head;
    }
    unordered_map<int,bool> seen;
    vector<int> set;
    vector<int> llItems;
    Node* temp=head;
    Node* firstHead=NULL;
    Node* tail=NULL;
    while(temp!=NULL){
        llItems.push_back(temp->data);
        temp=temp->next;
    }for(int i=0;i<llItems.size();i++){
        if(seen.count(llItems[i])>0){
            continue;
        }
        seen[llItems[i]]=true;
        set.push_back(llItems[i]);
    }
    for(int i=0;i<set.size();i++){
        int element=set[i];
        insertAtTail(firstHead,tail,element);
    }return firstHead;
}