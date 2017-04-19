#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node* left;
struct node* right;
};
node* newnode(int value)

{

    node* newnod = (struct node*)malloc(sizeof(struct node));

    newnod->data = value;

    newnod->left = NULL;

    newnod->right = NULL;

    return newnod;

}

    

node * insert(node * root, int value)

{

    if(root==NULL)

        {

        return newnode(value);

    }else

        {

        if(value <= root->data)

            {

            root->left = insert(root->left,value);

        }

        else

            {

            root->right = insert(root->right,value);

        }

           return root;

    }



}
