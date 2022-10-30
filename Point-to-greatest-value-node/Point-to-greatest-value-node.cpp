/****************************************************************
	Following is the Linked list node structure already written:

	template <typename T>
	class LinkedListNode {
	public:
		T data;
		LinkedListNode* next;
		LinkedListNode* arbit;

		LinkedListNode(T data) {
			this->next = NULL;
			this-> arbit = NULL;
			this->data = data;
		}
	};

*****************************************************************/

LinkedListNode<int>* populateArbit(LinkedListNode<int>* head)
{
	// Write your code here.
    if(head==NULL){
        return head;
    }if(head->next==NULL){
        return head;
    }
     LinkedListNode<int>* current=head;
    while(current->next!=NULL){
        int max=-999999999;
        LinkedListNode<int>* highest=current->next;
        LinkedListNode<int>* toPlace=NULL;
        while(highest!=NULL){
            if(highest->data>max){
                toPlace=highest;
                max=highest->data;
            }highest=highest->next;
        }
        current->arbit=toPlace;
        current=current->next;
    }
    if(current->next==NULL){
        current->arbit=NULL;
    }return head;
}
