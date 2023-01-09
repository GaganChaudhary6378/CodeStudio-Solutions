Node *reverseLL(Node *head, int low, int high) {
    // Write your code here.
    
    Node* temp1 = head;    
    int i = 1;
    Node* temp = head;
    Node* prev = NULL;
    while(i<low){
        prev = temp;
        temp = temp->next;
        i++;
    }
    
    Node* fast = temp;
    while(i<high){
        fast = fast->next;
        i++;
    }
    if(temp == fast){
        return head;
    }
    
    Node* curr = temp;
    Node* prev1 = NULL;
    Node* next = NULL;
    Node* x = fast->next;
    while(curr!=x){
        next = curr->next;
        curr->next = prev1;
        prev1 = curr;
        curr = next;
    }
    
    temp->next = curr;
    
    if(prev == NULL){
        return prev1;
    }
    
    prev->next = prev1;
    return head;
}