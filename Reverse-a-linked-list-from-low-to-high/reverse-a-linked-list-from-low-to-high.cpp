/********************************************************

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

********************************************************/
Node *reverseSubhalf(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *tail = head->next;
    Node *smallOutput = reverseSubhalf(head->next);
    tail->next = head;
    head->next = NULL;
    return smallOutput;
}

Node *reverseLL(Node *head, int low, int high)
{
    // Write your code here.
    if (head == NULL)
    {
        return head;
    }
    if (head->next == NULL)
    {
        return head;
    }
    Node *lowPointer = head;
    Node *highPointer = head;
    int count1 = 1;
    int count2 = 1;
    while (count1 < low - 1 && lowPointer->next != NULL && low != 1)
    {
        lowPointer = lowPointer->next;
        count1++;
    }
    while (count2 < high && highPointer != NULL && high != 1)
    {
        highPointer = highPointer->next;
        count2++;
    }
    if (low == 1 && high == 1)
    {
        return head;
    }
    if (low == 1)
    {
        Node *temp = head;
        Node *nextNode = highPointer->next;
        highPointer->next = NULL;
        Node *reverseBeginning = reverseSubhalf(temp);
        temp->next = nextNode;
        head = reverseBeginning;
        return head;
    }
    else
    {
        Node *tempNode = highPointer->next;
        Node *data = lowPointer->next;
        highPointer->next = NULL;
        Node *toBeReversed = lowPointer->next;
        lowPointer->next = tempNode;
        toBeReversed = reverseSubhalf(toBeReversed);
        lowPointer->next = highPointer;
        data->next = tempNode;
        return head;
    }
}