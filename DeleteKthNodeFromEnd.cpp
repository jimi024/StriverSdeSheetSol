/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* removeKthNode(Node* head, int K)
{
    // Write your code here.
    Node * result = new Node(-1);
    result -> next = head;

    Node * p1 = result, * p2 = result;

    //find kth node from first
    for(int i = 0; i < K; i++) p1 = p1->next;

    //find kth node from end
    //until p1 reaches end of LL p2 will be kth node from end
    while(p1->next){
        p1 = p1->next;
        p2 = p2->next;
    }

    p2->next = p2->next->next;

    return result->next;
}
