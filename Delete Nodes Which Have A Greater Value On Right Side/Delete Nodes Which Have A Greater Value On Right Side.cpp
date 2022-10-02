#include <bits/stdgit add .c++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> * deleteNodes(LinkedListNode<int> * head) {
    // Write your code here
    if(head==NULL){
        return head;
    }LinkedListNode<int> * temp=head;
    LinkedListNode<int> * current=head;
    while(temp->next!=NULL){
        if(temp->next->data>temp->data){
            temp->data=temp->next->data;
            temp->next=temp->next->next;
            temp=current;
        }else{
            temp=temp->next;
        }
    }return head;
}