/*
struct node
{
    int data;
    node* left;
    node* right;
}*/
#include<queue>
void LevelOrder(node * root)
{
  if(root ==NULL)return;
  
  queue<node*> q;
  q.push(root);
  while(!q.empty())
      {
      node* cur = q.front();
      cout<<cur->data<<" ";
      if(cur->left !=NULL)
          {
          q.push(cur->left);
      }
      if(cur->right !=NULL)
          {
          q.push(cur->right);
      }
      q.pop();
  }
    
  
}


