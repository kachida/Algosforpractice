void ReversePrint(Node *head)

{       

    if(head==NULL)

    {

        

    }

    else

    {

       ReversePrint(head->next);

             printf("%d\n",head->data);

           

    }

}
