#include <bits/stdc++.h> 
/*

Following is the Node Structure written below
 
class node
{
	public:
	int data;
    node * next;
	node(int x)
	{
		data=x;
		next=NULL;
	}
};
*/
int length(node* head){
    if(head==NULL){
        return 0;
    }node* temp=head;
    int count=0;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }return count;
}
node *findKthFromLast(node *head, int k)
{
	if(head==NULL){
        return head;
    }int n=length(head);
    node* ans=head;
    int last=n-k;
    while(last!=0){
        ans=ans->next;
        last--;
    }return ans;
}
