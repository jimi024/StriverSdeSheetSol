LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
     LinkedListNode<int> * temp = head, * prev = NULL;
    while(temp){
        LinkedListNode<int> * remain = temp->next;
        temp -> next = prev;
        prev = temp;
        temp = remain;
    }
    return prev;
}