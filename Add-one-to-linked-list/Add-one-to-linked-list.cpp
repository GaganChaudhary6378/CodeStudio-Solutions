/*****************************************************************
Following is the Linked list node structure already written

template <typename T>
class LinkedListNode
{
public:
    T data;
    LinkedListNode<T>* next;
    LinkedListNode(T data)
    { 
        this->data = data;
        next = NULL;
    }
};
*****************************************************************/
LinkedListNode<int> *reverse(LinkedListNode<int> *head)
{
    LinkedListNode<int> *prevptr = NULL;
    LinkedListNode<int> *currptr = head;
    LinkedListNode<int> *nextptr = NULL;
    
    while(currptr)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    
    return prevptr;
}

LinkedListNode<int>* addOneToList(LinkedListNode<int> *head)
{
    if(!head)
    {
        head = new LinkedListNode<int>(1);
        return head;
    }
    
    LinkedListNode<int> *newhead = head;
    while(head && head->next->data != -1)
    {
        head = head->next;
    }
    head->next = NULL;
    
    head = newhead;
    
    head = reverse(head);
    
    int carry = 1;
    LinkedListNode<int> *curr = head;
    LinkedListNode<int> *prev = NULL;
    while(curr)
    {
        int sum = curr->data + carry;
        
        if(sum > 9)
        {
            carry = 1;
        }
        else
        {
            carry = 0;
        }
        
        sum = sum % 10;
        
        curr->data = sum;
        
        prev = curr;
        curr = curr->next;
    }
    
    if(carry == 1)
    {
        prev->next = new LinkedListNode<int>(1);
    }
    
    head = reverse(head);
    
    newhead = head;
    while(head->next)
    {
        head = head->next;
    }
    head->next = new LinkedListNode<int>(-1);
    
    return newhead;
}