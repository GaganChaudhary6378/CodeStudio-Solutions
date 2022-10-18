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
Node *sortLL(Node *head)
{
    // Write your code here.
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node *temp = head;
    Node *newHead = NULL;
    Node *newTail = NULL;
    while(temp != NULL){
        Node *node = new Node(temp->data);
        if(newHead==NULL){
            newHead = newTail = node;
            temp = temp->next;
            continue;
        }
        if(temp->data < 0){
            node->next = newHead;
            newHead = node;
        }else{
            newTail->next = node;
            newTail = node;
        }
        temp = temp->next;
    }
    return newHead;
}