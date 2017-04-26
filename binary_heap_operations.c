#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int size = 0 , max_size =5;
int H[5];
int parent(int val)
{
    return floor(val/2);
}
int leftchild(int val)
{
    return (2*val);
}
int rightchild(int val)
{
    return ((2*val)+1);
}
void swap(int* i, int* j)
{
    int *temp=NULL;
    *temp = *i;
    *i = *j;
    *j=*temp;
    printf("swapping i %d  and j %d",*j,*i);
}
void shiftup(int i)
{
    while(i>1 && H[parent(i)] < H[i])
    {

        swap(&H[parent(i)],&H[i]);
        printf("inside while condition - i value - %d\n",parent(i));
        i=parent(i);
    }
}

void shiftdown(int i)
{

 int maxIndex=i;
 int l=0, r=0;
 l=leftchild(i);
 if(l <= size && H[l] > H[maxIndex])
 {
     maxIndex = l;
 }
 r=rightchild(i);
 if(r <= size && (H[r] > H[maxIndex]))
 {
     maxIndex = r;
 }

 if(i != maxIndex)
 {
     swap(&H[i],&H[maxIndex]);
     shiftdown(maxIndex);
 }

}
void insert(int p)
{
    if(size == max_size)
    {
    }
    else
    {
        size = size+1;
        H[size]=p;
        shiftup(size);
    }
}
int extractMAX()
{
    int result = H[1];
    H[1]=H[size];
    size= size-1;
    shiftdown(1);
    return result;
}
int main()
{
insert(10);
insert(20);
insert(30);
insert(40);
insert(50);
for(int k=0;k<max_size;k++)
{
printf("result %d \n",H[k]);
}
return 0;    
}
