Node* Reverse(Node *head)

{

    if(head == NULL || head->next == NULL)

    {

        return head;

    }

    

       Node *temp = Reverse(head->next);

       head->next->next = head;

       head->next=NULL;

	

        



    return temp;

}
