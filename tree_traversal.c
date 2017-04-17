#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
int data;
struct node* left;
struct node* right;
};
struct node* newnode(int data)
{
struct node* node = (struct node*)malloc(sizeof(struct node));
node->data = data;
node->left = NULL;
node->right = NULL;
return(node);
}
void preOrder(struct node* root)
{
if(root==NULL)
{
return;
}
printf("%d ",root->data);
preOrder(root->left);
preOrder(root->right);
}
void postOrder(struct node* root)
{
if(root==NULL)
{
return;
}
postOrder(root->left);
postOrder(root->right);
printf("%d ",root->data);

}

void inOrder(struct node* root)
{
if(root==NULL)
{
return;
}
inOrder(root->left);
printf("%d ",root->data);
inOrder(root->right);
}
int main()
{

struct node* node = newnode(1);
node->left = newnode(2);
node->right=newnode(3);
node->left->left = newnode(4);
node->left->right=newnode(5);
printf("\n preOrder");
preOrder(node);
printf("\n inOrder");
inOrder(node);
printf("\n postOrder");
postOrder(node);
return 0;

}
