

  struct Node

  {

     int data;

     struct Node *next;

  }



Node* InsertNth(Node *head, int data, int position)

{



    Node *temp;

    temp = (Node*)malloc(sizeof(Node*));

    Node *t;

    t = head;

    int count=1;

         temp->data = data;

        temp->next = NULL;

    if(head == NULL)

    {

       head = temp;

       return head;

    }else if(position ==0)

        {

        

        temp->next = head;

            head = temp;

        return head;

    }else

        {

        while(t !=NULL)

            {

                

                if(count ==  position)

                {

                  

                  temp->next = t->next;

                  t->next = temp;

                    return head;

                    

                }

            t=t->next;

            count++;

        }

        

              

    }

return head;

}


