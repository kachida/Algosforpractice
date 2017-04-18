/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
    
    Node *temp =NULL;
    if(headA == NULL)
        {
        return headB;
    }
    else if(headB == NULL)
        {
        return headA;
    }
    else
    {
        if(headA->data < headB->data)
            {
            temp=headA;
            temp->next = MergeLists(headA->next,headB);
        }else  if(headB->data < headA->data)
            {
            temp=headB;
            temp->next = MergeLists(headA,headB->next);
        }
    }
    
    return temp;
}


