#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>



struct node

    {

    long data;

    struct node* link;

};

void push(struct node** temp,long x);

void pop(struct node** temp);

void max_element(struct node*);

void push(struct node** temp,long x)

 {

   

    struct node * temp1=(struct node*)malloc(sizeof(struct node));

    temp1->data = x;

    temp1->link=NULL;

    if(temp == NULL)

        {

        *temp = temp1;

    }else

        {

        temp1->link = *temp;

            *temp = temp1;

    }



    

}

void pop(struct node** temp){

      struct node *temp1 = *temp;

      *temp=temp1->link;

    free(temp1);

}

void max_element(struct node* temp){

    unsigned long t=0;

     while(temp!=NULL)

          {



         if(t<temp->data)

              {

              t=temp->data;

          }

         temp=temp->link;

      }

  printf("%lu\n",t);

}

int main() {



    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  

    int n=0;

    unsigned long x=0;

    int type=0;

    scanf("%d",&n);

    struct node *t = NULL;

    if(n<100000)

        {

    while(n>0)

        {

        scanf("%d",&type);



        switch (type)

            {

            case 1:

            scanf("%lu",&x);

            push(&t,x);

            break;

            

            case 2:

            pop(&t);

            break;

            

            case 3:

            max_element(t);

            break;

            

            default:

            break;

        }

        n--;

    }

    }

    return 0;

}
