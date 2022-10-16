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

string findLargestNum(Node *head)
{
    Node* cur= head;
  vector<int>v;
   while(cur){
        v.push_back(cur->data);
       cur=cur->next;
   }
   sort(v.begin(),v.end());
   reverse(v.begin(),v.end());
   string s;
   int ans =0;
   for(auto i: v){
       s+=to_string(i);
   }
    // to handle the case when it have all zeroes
   int i =0;
   while(s[i]=='0'){
      
       i++;
   }
   if(s[0]=='0')
   s.erase(0,i-1);
   
   return s;
}

