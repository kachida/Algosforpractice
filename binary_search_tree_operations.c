#include <stdio.h>
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
  struct  node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}
struct node* bst_insert(struct node* root, int data)
{
    if(root == NULL)
    {
        root=newnode(data);
    }
    else if(data<=root->data)
    {
        root->left = bst_insert(root->left,data);
    }else if(data>=root->data)
    {
        root->right = bst_insert(root->right,data);
    }
    return root;
}
struct node* bst_search(struct node* root, int data)
{
    if(root == NULL)
    {
        return root;
    }
    else if(root->data == data)
    {
        return root;
    }
    else if(data <= root->data)
    {
        return bst_search(root->left,data);
    }
    else if(data >= root->data)
    {
        return bst_search(root->right,data);
    }
}
void print_tree(struct node *root)
{
    if(root == NULL)
    {
        return;
    }else{
        print_tree(root->left);
        print_tree(root->right);
    }
}
int main()
{
    struct node* root = NULL ;
    root = bst_insert(root,10);
    root = bst_insert(root,20);
    root = bst_insert(root,30);
    root = bst_insert(root,40);
    root = bst_insert(root,50);
    printf("Search for a value in BST\n");
    print_tree(root);
    struct  node* val = bst_search(root,120);
    if(val != NULL)
    {
        printf("Number is found and value is %d",val->data);
    }
    else
    {
        printf("value is not found\n");
    }
    return 0;
}

