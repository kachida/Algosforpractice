#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};

void append(struct node **,int num);
void addAtBeg(struct node*,int num);
void delete(struct node*,int num);
void display();

int main()
{

    struct node *p;
    p = NULL;
    append(&p,10);
    append(&p,20);
    append(&p,30);
    append(&p,40);
    append(&p,50);
    display(p);
    return 0;
}

void append(struct node **q,int num)
{

    
    struct node *temp,*r;
    if(*q==NULL)
    {
    r = (struct node*)malloc(sizeof(struct node));
    r->data = num;
    r->link=NULL;
    *q=r;
    }else
    {
        temp = *q;
        while(temp->link!=NULL)
        {
            temp = temp->link;
        }
        r=(struct node*)malloc(sizeof(struct node));
        r->data = num;
        r->link=NULL;
        temp->link=r;

    }
    
}


void display(struct node *q)
{
    struct node *temp;
    temp = q;
    while(temp->link !=NULL)
    {
        printf("value %d -",temp->data);
        temp = temp->link;
    }

}




