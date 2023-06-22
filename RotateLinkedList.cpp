

Node *rotate(Node *head, int k) {
     // Write your code here.
     if(k == 0) return head; // if k == 0 then no need to rotate
  
  Node * temp = head;
  int len = 0; // length of linked list
  while(temp) len++, temp=temp->next;

  k = k%len; // if k > len then we need to rotate by k%len
  int _k = len - k; // if we rotate by k then it will be same as rotating by len-k

  // now we need to make the linked list circular
  temp = head;
  while(temp->next){
    temp = temp->next;
  }
  temp->next = head;

  // now we need to break the linked list from kth node
  temp = head;
  while(_k-- > 1){
    temp = temp->next;
  }

  // now temp is pointing to the kth node
  Node * ans = temp->next;
  temp->next = NULL;
  return ans;
}