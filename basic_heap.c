#include<stdio.h>
void createHeap(int *arr,int n);
void restoreDown(int pos,int *arr,int n);
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i,n=5;
    createHeap(arr,n);
    return 0;

}

void createHeap(int *arr,int n)
{
    int i;
    for(i=n/2;i>=1;i--)
        restoreDown(i,arr,n);

}

void restoreDown(int pos,int *arr,int n)
{
    int i,val;
    val =arr[pos];
    while(pos<=n/2)
    {
        i=2*pos;
        if((i<n) && (arr[i] < arr[i+1]))
        {
            i++;
        }
        if(val>=arr[i])
            break;
        arr[pos]=arr[i];
        pos=i;
    }
    arr[pos]=val;
}


