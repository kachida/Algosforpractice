#include<stdio.h>
#include<malloc.h>
struct node
{
int item;
struct node *link;
};
void push(struct node **top, int item);
void pop(struct node **top);
int main()
{
struct node *t=NULL;
int i=1;

printf("Adding 10 Elemenets to stack \n");
while(i<11)
{
push(&t,i);
i++;
}

i=0;
printf("Deleting top 5 elements from stack\n");
while(i<5)
{
pop(&t);
i++;
}

return 0;
}

void push(struct node **top,int item)
{

struct node *temp = *top;
temp = (struct node *)malloc(sizeof(struct node));
 (temp)->item =item;
(temp)->link = *top;
*top = temp;

printf("added item- %d \n",item);

}

void pop(struct node **top)
{
struct node *temp = *top;
int item;
item =(temp)->item ;
*top = temp -> link ;
printf("deleteing item - %d \n",item);
}
