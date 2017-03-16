#include<stdio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *link;
};

struct queue
{
	struct node *front;
	struct node *rear;
};

void initQueue(struct queue **q);
void addQueue(struct queue **q,int item);
void deQueue(struct queue **q);

int main()
{

	struct queue *a;
	initQueue(&a);
	printf("Queue got initialized\n");
	int i=1;
	printf("Adding Elements to Queue\n");
	while(i<5)
	{
		addQueue(&a,i);
		i++;
	}
	printf("Dequeue Operation\n");
	i=0;
	while(i<3)
	{
		deQueue(&a);
		i++;
	}
	return 0;
}

void initQueue(struct queue **q)
{
	*q =(struct queue *) malloc(sizeof(struct queue));
	(*q)->rear = NULL;
	(*q)->front = NULL;
}

void addQueue(struct queue **q, int item)
{
	struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));
	temp->data = item;
	temp->link = NULL;
	if((*q)->front == NULL && (*q)->rear == NULL)
	{
		(*q)->front = (*q)->rear = temp;
		return;
	}
	(*q)->rear->link = temp;
	(*q)->rear = temp;
	}

void deQueue(struct queue **q)
{
	if((*q)->front ==  NULL)
	{
		printf("Queue is empty \n");
	}
	struct node *temp;
	temp = (struct node *)malloc(sizeof(struct node));
	temp->data = (*q)->front->data;
	printf("data to be deleted %d\n",(*q)->front->data);
	temp->link= (*q)->front->link;
	(*q)->front = temp->link;

}
