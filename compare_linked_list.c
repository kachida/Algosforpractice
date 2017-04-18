int CompareLists(Node *headA, Node* headB)

{

    int count1=0,count2=0;

    Node *t1 , *t2;

    int data1=0, data2=0;

    t1=headA;

    t2=headB;

    if(headA == NULL && headB == NULL)

        {

        return 0;

    }else if(headA != NULL && headB == NULL)

        {

        return 0;

    }else if(headA == NULL && headB != NULL)

        {

        return 0;

    }else if(headA->next == NULL && headB->next == NULL)

        {

        data1 = headA->data;

        data2 = headB->data;

         if(data1 == data2 )

                {

                return 0;

            }

    }else{

        while(headA->next !=NULL || headB->next != NULL)

            {

            if(headA->next !=NULL)

         {  data1 = headA->data;

            headA = headA->next;

          count1++;

        }  if(headB->next != NULL)

          {

            data2 = headB->data; 

            headB = headB->next;

                count2++;

          }

            

            if(data1 != data2 )

                {

                return 0;

            }else

                {

                

                

            }

            

            

        }

        if(count1 == count2)

            {

            return 1;

        }else

            {

            return 0;

        }

        

    }

    return 0;

}
