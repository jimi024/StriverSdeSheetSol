Node * findIntersection(Node *firstHead, Node *secondHead)
{
    Node * a = firstHead, * b = secondHead; //two pointers

    //if a & b are not same then move them to next
    while(a != b){
        a = a ? a->next : secondHead; //if a is not null then move a to next else move it to head of second LL
        b = b ? b->next : firstHead; //if b is not null then move b to next else move it to head of first LL
    }

    return a;    
    /*
    Time Complexity: O(n)
    Space Complexity: O(1)
    */
}