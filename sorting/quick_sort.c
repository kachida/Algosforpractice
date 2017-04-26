#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int a[MAX] = {10,60,30,20,50,90,70,40,80,100};
 int partition(int a[],int left,int right,int pivot);
void quicksort(int a[],int left,int right);
void swap(int a[],int left,int right);

void quicksort(int a[],int left,int right)
{
    if(left>=right)
    {
        return;
    }
    int pivot = a[(left+right)/2];
    int index = partition(a,left,right,pivot);
    quicksort(a,left,index-1);
    quicksort(a,index,right);
}
 int partition(int a[],int left,int right,int pivot)
{
    while(left <= right)
    {
        while(a[left] < pivot)
        {
            left++;
        }
        while(a[right]>pivot)
        {
            right--;
        }
        if(left<=right)
        {
            
            swap(a,left,right);
            left++;
            right--;
        }
    }
    return left;
}
void swap(int a[],int left,int right)
{
    int temp=a[left];
    a[left]=a[right];
    a[right]=temp;
}
int main() {
	// your code goes here
	int length = sizeof(a)/sizeof(a[0]);
	printf("Before sorting ");
	for(int i=0;i<length;i++)
	{
	    
	    printf("%d ",a[i]);
	}
	printf("\n");
	quicksort(a,0,length-1);
	printf("After sorting ");
	for(int i=0;i<length;i++)
	{
	    
	    printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}

