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

class Stack
{
    int size;
    Node* top;

public:
    Stack()
    {
        //Write your code here 
        top=NULL;
        size=0;
    }

    int getSize()
    {
        //Write your code here
        return size;
    }

    bool isEmpty()
    {
        //Write your code here  
        return size==0;
    }

    void push(int data)
    {
        //Write your code here
        Node* newNode=new Node(data);
        if(size==0){
            top=newNode;
        }
        newNode->next=top;
        top=newNode;
        size++;
    }

    void pop()
    {
        if(size==0){
            return;
        }
        top=top->next;
        size--;
    }

    int getTop()
    {
        if(size==0){
            return -1;
        }
        return top->data;
    }
};