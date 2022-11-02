/************************************************************

    Following is the linked list node structure

    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/
#include<bits/stdc++.h>
void insertAtTail(Node<int>* &head,Node<int>* &tail, int val) {
        
        Node<int>* temp = new Node<int>(val);
        //empty list
        if(head == NULL) {
            head = temp;
            tail = temp;
            return;
        }
        else
        {
            tail -> next = temp;
            tail = temp;
        }
}
Node<int>* mergeKLists(vector<Node<int>*> &listArray)
{
    // Write your code here.
    vector<int> ans;
    for(int i=0;i<listArray.size();i++){
        Node<int>* temp=listArray[i];
        while(temp!=NULL){
            ans.push_back(temp->data);
            temp=temp->next;
        }
    }sort(ans.begin(),ans.end());
    
    Node<int>* firstHead=NULL;
    Node<int>* tail=NULL;
    for(int i=0;i<ans.size();i++){
        int element=ans[i];
        insertAtTail(firstHead,tail,element);
    }
    return firstHead;
}
