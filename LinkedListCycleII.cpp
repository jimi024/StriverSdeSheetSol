Node *firstNode(Node *head)
{
    //    Write your code here.
    Node * slow = head, * fast = head;
    while(fast and fast->next){
        slow = slow->next;
        fast = fast->next->next;
        
        //if cycle is present
        if(slow == fast){
            fast = head; //move fast to head
            //move both slow and fast by one step
            while(slow != fast){
                slow = slow->next;
                fast = fast->next;
            }
            return slow;
        }
    }

    return NULL;
}