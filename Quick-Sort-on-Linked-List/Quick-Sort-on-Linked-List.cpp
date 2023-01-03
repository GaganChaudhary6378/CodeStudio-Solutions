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
void insertAtTail(Node* &head,Node* &tail,int element){
    Node* temp=new Node(element);
    if(head==NULL){
        head=tail=temp;
    }else{
        tail->next=temp;
        tail=temp;
    }
}
Node *quickSortLL(Node *head)
{
    // Write your code here.
    vector<int> answer;
    Node* temp=head;
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