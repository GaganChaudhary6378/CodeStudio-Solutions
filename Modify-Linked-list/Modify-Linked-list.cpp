#include <bits/stdc++.h> 
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
Node* reverseLL(Node* head)
    {
        
        Node* current = head;
        Node* prev = NULL, *next = NULL;
 
        while (current != NULL) {
           
            next = current->next;
           
            current->next = prev;

            prev = current;
            current = next;
        }
        return prev;
}
Node* modifyLL(Node* head) 
{
	if(!head || !head->next){ // very base case
       return head;
   }
       
   Node* slow = head;   // normal slow n fast pointers
   Node* fast = head->next;
   
   // Get the middle
   while(fast && fast->next){ // slow-fast pointer method to find mid
       slow = slow->next;
       fast = fast->next->next;
   }

  
   Node* secondHead = slow->next;  
   slow->next = NULL; 
   // Reverse the 2nd part
   Node* first = head;     
   Node* second = reverseLL(secondHead); 
   
 
   while(second){        // simple
       Node* tmp1 = first->next;
       Node* tmp2 = second->next;
       first->next = second;     // simple logic
       second->next = tmp1;
       first = tmp1;
       second = tmp2;
   }

   return head;  
}