#include<stdio.h>
#include<stdlib.h>
struct node
{
int dest;
struct node* next;
};
struct AdjList
{
struct node *head;
};
struct graph
{
int v;
struct AdjList* array;
};
struct node* newNode(int des)
{

struct node* newnode = (struct node*) malloc (sizeof(struct node));
newnode->dest = des;
newnode->next = NULL;
return newnode;
}

struct graph* createGraph(int V)
{

struct graph* g = (struct graph*)malloc(sizeof(struct graph));
g->v = V;
g->array = (struct AdjList*)malloc(V*sizeof(struct AdjList));
int i;
for(i=0;i<V;++i)
 g->array[i].head=NULL;

return g;
};

void AddEdge(struct graph* g,int src,int des)
{


}

