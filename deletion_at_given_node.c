/*

  Delete Node at a given position in a linked list 

  Node is defined as 

  struct Node

  {

     int data;

     struct Node *next;

  }

*/

Node* Delete(Node *head, int position)

{

    Node *temp;

    Node *t,*te;

    Node *buffer,*freeup;

    t = head;

    int count=0;

    

    if(head == NULL)

    {

       return head;

    }else if(position==0)

        {

        freeup = head;

        buffer = head->next;

            head = buffer;

        free(freeup);

        return head;

    }else

        {

        while(t !=NULL)

            {

                

                if(count ==  position-1)

                {

                  te = t;

                    

                }if(count == position)

                {

                    freeup = t;

                  buffer = t->next;

                    te->next = buffer;

                  free(freeup);

                    return head;

                }

            t=t->next;

            count++;

        }

        

              

    }

return head;

}


