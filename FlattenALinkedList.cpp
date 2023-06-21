Node * merge2_LL(Node *a, Node *b){
  Node * temp = new Node(0);
  Node * res = temp;
  
  while(a and b){
      if(a -> data < b -> data){ //if a is smaller
          temp -> child = a;
          a = a -> child;
      } else { //if b is smaller
          temp -> child = b;
          b = b -> child; 
      }
      temp = temp -> child;
  }
      
  if(a) temp -> child = a; 
  else temp -> child = b;
  return res -> child;
}


Node* flattenLinkedList(Node* head) 
{
	// Write your code here
	if(head == NULL || head->next == NULL) return head;
	Node* root = head->next;
	head->next = NULL;
	root = flattenLinkedList(root);
	head = merge2_LL(head, root);
	return head;
}
