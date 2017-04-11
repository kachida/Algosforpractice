
Node* MergeLists(Node *headA, Node* headB)
{
     
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

