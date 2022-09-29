int findIntersection(Node *firstHead, Node *secondHead)
{
    if(firstHead == NULL || secondHead == NULL){
        return -1;
    }
    Node* currA = firstHead;
    Node* currB = secondHead;
    
    while(currA && currB){
        if(currA == currB){
            return currA->data;
        }
        currA = currA -> next;
        currB = currB -> next;
    
    if(currA == currB){
        if(currA == NULL){
            return -1;
        }
        else{
        return currA->data;
        }
    }
    if(currA == NULL){
        currA = secondHead;
    }
    if(currB == NULL){
        currB = firstHead;
    }
        
    }
    return currA->data;
}