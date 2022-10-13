#include<bits/stdc++.h>
Node *lastAppearance(Node *head){
   // Write your code here.
   unordered_map<int,int> m; // to store freq

   Node *curr = head;   // to count freq
   Node *dummy = new Node(0); // node prev to head node
   dummy->next = head;   // for checking for head(1st) node
   
   while(curr!=NULL){
       m[curr->data]++;  // simple
       curr = curr->next;
   }
   
   Node *prev = dummy;   // simple
   while(prev->next!=NULL){ // simple
       if(m[prev->next->data]==1){  // no duplicates
           prev = prev->next;  
       }
 else{       // duplicates exist
           if(prev->next==head){  // duplicate present at head(start)
               m[prev->next->data]--;
               head = prev->next->next; // just move head 1 node ahead of curr  
               prev = prev->next;   // prev will be 1 node behing of head
           }
           else{      // duplicate present in between
               m[prev->next->data]--;  
               prev->next = prev->next->next; // connection : prev->next
               prev = prev;                 // imagine
           }
       }
   }
   return head;  // head will always represent 1st node
}