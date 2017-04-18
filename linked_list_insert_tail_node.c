#include<stdio.h>

#include<malloc.h>

#include<stdlib.h>







struct Node

  {

     int data;

     struct Node *next;

  };



Node* Insert(Node *head,int data);

void printList(Node *head)

{

    if(head==NULL)

    {

        printf("list is null");

        

    }

    else

    {

        while(head->next !=NULL)

        {

             printf("%d\n",head->data);

            head = head->next;

        }

        printf("%d\n",head->data);

    }

}



Node* Insert(Node *head,int data)

{

  // Complete this method

    Node *temp;

    temp = (Node*)malloc(sizeof(Node*));

    Node *t;

    t = head;

    if(t == NULL)

        {

        temp->data = data;

        temp->next = NULL;

       t = temp;

         return t;

    }else

        {

        while(t->next !=NULL)

            {

            t=t->next;

        }

        temp->data = data;

        temp->next = NULL;

        t->next = temp;        

    }

    

  return head;

}



int main()

{

    Node *head;



    head=Insert(head,10);

   head=Insert(head,20);

        head=Insert(head,30);

        head=Insert(head,40);



    printList(head);

    return 0;

}


