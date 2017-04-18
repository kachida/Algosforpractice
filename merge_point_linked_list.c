#include<set>
int length(Node *head)
    {
    int len=0;
    while(head !=NULL)
        {
        len++;
        head = head->next;
    }
    return len;
    
}
int FindMergeNode(Node *headA, Node *headB)
{
    
    int m = length(headA);
    int n= length(headB);
    set<Node *> addresses;
    for(int i=0;i<n;i++)
        {
        addresses.insert(headB);
        headB= headB->next;
    }
    for(int i=0;i<m;i++)
        {
        if(addresses.find(headA) != addresses.end())
            {
            return headA->data;
        }
        headA = headA->next;
    }
    return 0;
}
