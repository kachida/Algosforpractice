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

    Node *te;

    t = head;

    if(t == NULL)

        {

        temp->data = data;

        temp->next = NULL;

       t = temp;

         return t;

    }else

        {

            

        te = t;

        temp->data = data;

        temp->next = te;

        t = temp;

        return t;

    }

    

  

}



int main()

{

    Node *head;



    head=Insert(head,100);

   head=Insert(head,40);

        head=Insert(head,500);

        head=Insert(head,6000);



    printList(head);

    return 0;

}


