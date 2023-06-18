Node *addTwoNumbers(Node *num1, Node *num2)
{
    // Write your code here.
     Node * ans = new Node(); //dummy node
    Node * temp = ans;
    int carry = 0;

    //add until both LL are not empty
    while(num1 || num2 || carry){
        int sum = 0;
        if(num1){
            sum += num1->data;
            num1 = num1->next;
        }
        if(num2){
            sum += num2->data;
            num2 = num2->next;
        }

        sum += carry; //carry can be 0
        carry = sum / 10; 
        Node * add = new Node(sum % 10);
        temp->next = add;
        temp = temp->next;
    }

    return ans->next;
}
