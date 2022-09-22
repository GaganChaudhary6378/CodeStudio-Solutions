/************************************************************

    Following is the list node structure:
    
    template <typename T>
    class Node {
        public:
            T data;
            Node* next;

            Node(T data) {
                next = NULL;
                this->data = data;
            }
            ~Node() {
                if (next != NULL) {
                    delete next;
                }
            }
    };

************************************************************/

pair < Node < int > * , Node < int > * > divideList(Node < int > * head) {
    // Write your code here.
//     if(head==NULL){
//         return{head,head};
//     }
//     Node<int>* head1=NULL;
//     Node<int>* tail1=NULL;
//     Node<int>* head2=NULL;
//     Node<int>* tail2=NULL;
//     int count=0;
//     Node<int>* temp;
//     while(temp!=NULL){
//         if(count%2==0){
//             if(head1==NULL){
//                 head1=temp;
//                 tail1=head1;
//                 temp=temp->next;
//                 count++;
//             }else{
//                 tail1->next=temp;
//                 tail1=temp;
//                 temp=temp->next;
//                 count++;
//             }
//         }else{
//             if(head2==NULL){
//                 head2=temp;
//                 tail2=head2;
//                 temp=temp->next;
//                 count++;
//             }else{
//                 tail2->next=temp;
//                 tail2=temp;
//                 temp=temp->next;
//                 count++;
//             }
//         }
//     }
//     tail1->next=NULL;
//     tail2->next=NULL;
//     return {head1,head2};
    Node<int>* temp=head;

   Node<int>* odd=new Node<int>(-1);

   Node<int>* odd1=odd;

    Node<int>* even=new Node<int>(-1);

   Node<int>* even1=even;

   int count=1;

while(temp!=NULL)

{

    if(count%2!=0)

    {

        odd1->next=new Node<int>(temp->data);

        odd1=odd1->next;

    }

    else

    {

        even1->next=new Node<int>(temp->data);

        even1=even1->next;

    }

    temp=temp->next;

    count++;

}    odd1->next=NULL;

   even1->next=NULL;

   return {odd->next,even->next};  
}
