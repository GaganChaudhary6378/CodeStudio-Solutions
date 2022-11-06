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
void insertAtTail(Node* &head,Node* &tail,int val){
    Node* temp=new Node(val);
    if(head==NULL){
        head=tail=temp;
    }else{
        tail->next=temp;
        tail=temp;
    }
}
Node* sumBetweenZeroes(Node* head) 
{
    //Write ypur code here
    Node* firstHead=NULL;
    Node* tail=NULL;
    Node* temp=head;
    Node* prev=head;
    while(prev->next!=NULL){
        int sum=0;
        if(temp->data==0){
            prev=temp->next;
        }while(prev->data!=0){
            sum+=prev->data;
            prev=prev->next;
        }insertAtTail(firstHead,tail,sum);
        temp=prev;
    }return firstHead;
}