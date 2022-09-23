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

int searchInLinkedList(LinkedListNode<int> *head, int k) {
    // Write your code here
    LinkedListNode<int>* temp=head;
    while(temp!=NULL){
        if(temp->data==k){
            return 1;
        }temp=temp->next;
    }return 0;
}