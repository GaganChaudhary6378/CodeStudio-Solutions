// /****************************************************************

//     Following is the class structure of the Node class:

//     class Node
//     {
//     public:
//         int data;
//         Node *next;
//         Node(int data)
//         {
//             this->data = data;
//             this->next = NULL;
//         }
//     };

// *****************************************************************/
// #include<bits/stdc++.h>
// void insertAtTail(Node* &head,Node* &tail,int element){
//     Node* temp=new Node(element);
//     if(head==NULL){
//         head=tail=temp;
//     }else{
//         tail->next=temp;
//         tail=temp;
//     }
    
// }
// long long int calculateInversionCnt(Node *head){
// 	// Write your code here.
//     if(head==NULL){
//         return -1;
//     }long long int count=0;
//     Node* firstHead=NULL;
//     Node* tail=NULL;
//     vector<int> answer;
//     Node* temp=head;
//     while(temp!=NULL){
//         answer.push_back(temp->data);
//         temp=temp->next;
//     }
//     sort(answer.begin(),answer.end());
//     for(int i=0;i<answer.size()-1;i++){
//         insertAtTail(firstHead,tail,answer[i]);
//     }
//     Node* temp1=firstHead;
//     while(temp!=NULL && temp1!=NULL){
//         if(temp->data!=temp1->data){
//             count++;
//         }
//         temp=temp->next;
//         temp1=temp1->next;
//     }return count;
// }
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
long long int res=0;
Node * merge(Node *l1,Node *l2,int len){
    if(!l1)  return l2;
    if(!l2)  return l1;
    Node *dummy= new Node(-1);
    Node *tail=dummy;
    int c=0;
    while(l1 && l2){
        if(l1->data<=l2->data){
            tail->next=l1;
            l1=l1->next;
            tail=tail->next;
            c++;
        }
        else {
            
            tail->next=l2;
            l2=l2->next;
            tail=tail->next;
            res+=len-c;
        }
    }
    if(l1)  tail->next=l1;
    if(l2)  tail->next=l2;
    return dummy->next;
}
Node* mergesort(Node * head){
    if(!head || !head->next)  return head;
    Node *slow=head,*fast=head;
    int len=1;
  
    while(fast->next && fast->next->next){
     
        slow=slow->next;
        fast=fast->next->next;
        len++;
    }
    Node *head2=slow->next;
   slow->next=NULL;
 Node *l1 = mergesort(head);
 Node *l2 = mergesort(head2);
  return   merge(l1,l2,len);
}

long long int calculateInversionCnt(Node *head){
    
    mergesort(head);
    
    return res;
}