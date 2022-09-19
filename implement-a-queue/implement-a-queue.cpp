class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        next=NULL;
    }
};
class Queue {
    node* qfront;
    node* qrear;
    int size;
public:
    Queue() {
        // Implement the Constructor
        qfront=NULL;
        qrear=NULL;
        size=0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        return qfront==0 && qrear==0;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        node* newnode=new node(data);
        if(qrear==NULL){
            qfront=newnode;
            qrear=newnode;
        }else{
            qrear->next=newnode;
            qrear=newnode;
            size++;
        }
    }
    int dequeue() {
        // Implement the dequeue() function
        if(qfront==NULL){
            return -1;
        }
        node* temp=qfront;
        qfront=qfront->next;
        if(qfront==NULL){
            qrear=NULL;
        }
        size--;
        return temp->data;
    }

    int front() {
        // Implement the front() function
        if(qfront==NULL){
            return -1;
        }return qfront->data;
    }
};