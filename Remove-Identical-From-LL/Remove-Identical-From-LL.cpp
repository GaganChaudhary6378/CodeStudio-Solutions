/********************************************************

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

********************************************************/
#include <bits/stdc++.h>
// void insertAtTail(Node* &head,Node* &tail,int element){
// 	Node* temp=new Node(element);
// 	if(head==NULL){
// 		head=tail=temp;
// 		return;
// 	}else{
// 		tail->next=temp;
// 		tail=temp;
// 	}
// }
Node *removeDuplicates(Node *head) {
	// Write your code here.
	if(head==NULL){
		return head;
	}
	if(head->next==NULL){
		return head;
	}
	// Node* prev=head;
	// Node* forward=prev->next;
	// bool found=false;
	// while(forward->next!=NULL){
	// 	if(forward->data==forward->next->data){
	// 		forward=forward->next;
	// 		found=true;
	// 	}else if(found==true){
	// 		prev->next=forward->next;
	// 		forward=prev->next;
	// 	}else if(found==false){
	// 		forward=forward->next;
	// 	}
	// }
	// return prev;
	unordered_map<int,int> freq;
	Node* temp=head;
	Node* prev=NULL;
	while(temp!=NULL){
		freq[temp->data]++;
		temp=temp->next;
	}
	temp=head;
	while(temp!=NULL){
		if(freq[temp->data]>1){
			if(head==temp){
				temp=temp->next;
				head->next=NULL;
				head=temp;
				continue;
			}
		prev->next=temp->next;
		temp->next=NULL;
		temp=prev->next;
		continue;
	}
	prev=temp;
	temp=temp->next;
	}
	return head;

}