#include<iostream>
#include<queue>
#include<vector>
#include<map>
#include<iterator>
#include<cstdlib>
using namespace std;
struct node
{
    int data;
    struct node* left;
    struct node* right;
};

node* newnode(int data)
{
    node* newn = (struct node*)malloc(sizeof(struct node));
    newn->data =data;
    newn->left=NULL;
    newn->right=NULL;
    return newn;
}
void VerticalOrder(node *root)
{
    if(root == NULL)
    {
        return;
    }
    int hd=0;
    map<int,vector<int> > m;
    queue<pair<node*,int> > q;
    q.push(make_pair(root, hd));

            while(!q.empty())
            {
            pair<node*,int> temp = q.front();
            q.pop();
            hd = temp.second;
            node* nod = temp.first;
            m[hd].push_back(nod->data);
            if(nod->left !=NULL)
                {
                    q.push(make_pair(nod->left, hd-1));
                }
            if(nod->right !=NULL)
                {
                    q.push(make_pair(nod->right, hd+1));
                }

            }

            //Printing the values
            map<int,vector<int> > :: iterator it;
            for(it=m.begin(); it!=m.end(); it++)
            {
                for(int i=0;i<it->second.size()&&i<1;++i)
                {
                    cout<<it->second[i]<<" ";
                }
            }
}
int main()
{
    node* newnod = newnode(10);
    newnod->left = newnode(20);
    newnod->right = newnode(30);
    newnod->left->left=newnode(40);
    newnod->left->right=newnode(50);
    VerticalOrder(newnod);
    return 0;
}
