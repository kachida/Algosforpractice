#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* newnode(int data)
{
    struct node* temp = (struct node*) malloc (sizeof(struct node));
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}
struct node* findmin(struct node* root)
{
    struct node* current = root;
    while(current->left !=NULL)
    {
        current = current->left;
    }
    return current;
}
struct node* delete (struct node *root, int data)
{

    if(root == NULL)
    {
        return root;
    }
    else if(data <= root->data)
    {
        root->left = delete(root->left,data);
    }
    else if(data >= root->data)
    {
        root->right = delete(root->right,data);
    }else
    {
        //case 1 : No child i.e, leaf node
        if(root->left == NULL && root->left == NULL)
        {
            
            free(root);
            root = NULL;
            return root;
        }//case 2: If a Node to deleted contains a right child
        else if(root->left == NULL)
        {
            struct node * temp = root;
            root = root->right;
            free(temp);
            return root;
        }//case 2: If a node to deleted contains left child
        else if(root->right == NULL)
        {
            struct node *temp = root;
            root = root->left;
            return root;
        }//case 3: If node to deleted contains both left and right childs
        else
        {
            struct node *temp = findmin(root->right);
            root->data = temp->data;
            root->right=delete(root->right,temp->data);
            free(temp);
            return root;
            

        }

        return root;
    }
    return root;
}
