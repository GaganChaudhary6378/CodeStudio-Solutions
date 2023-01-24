#include <bits/stdc++.h> 
/**********************************************************************

    Following is the class structure of the Node class for reference:

    class Node{
    public:
        int data;
        Node *next;
        Node(int data)
        {
	        this->data = data;
	        this->next = NULL;
        }
    };

********************************************************************/
void insertAtTail(Node* &head,Node* &tail,int element){
    Node* temp=new Node(element);
    if(head==NULL){
        head=tail=temp;
    }else{
        tail->next=temp;
        tail=temp;
    }
}
Node *sortLL(Node *head){
    // Write your code here.
    if(head==NULL){
        return head;
    }
    Node* temp=head;
    vector<int> answer;
    Node* firstHead=NULL;
    Node* tail=NULL;
    while(temp!=NULL){
        answer.push_back(temp->data);
        temp=temp->next;
    }
    sort(answer.begin(),answer.end());
    for(int i=0;i<answer.size();i++){
        insertAtTail(firstHead,tail,answer[i]);
    }
    return firstHead;

}