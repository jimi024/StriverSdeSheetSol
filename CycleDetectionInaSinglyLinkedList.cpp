bool detectCycle(Node *head)
{
	//	Write your code here
     Node * slow = head, * fast = head;
    
    while(1){
        if(!slow || !fast || !fast->next) return false; //no cycle
        slow = slow->next;
        fast = fast ->next->next;
        if(slow == fast) return true; //cycle
    }

    return false;
}