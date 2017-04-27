#include<stdio.h>

void merge(int arr[],int temp[],int leftStart, int rightEnd)
{
    int leftEnd = (rightEnd + leftStart)/2;
    int rightStart = leftEnd+1;
    int size = rightEnd-leftStart +1;
    int left = leftStart;
    int right = rightStart;
    int index = leftStart;

    while(left<=leftEnd && right <= rightEnd)
    {
        if(arr[left] <= arr[right])
        {
            temp[index]=arr[left];
            left++;
        }else
        {
            temp[index]=arr[right];
            right++;
        }
        index++;
    }

    //copy remaining elements of left subarray
    while(left < leftEnd)
    {
        temp[index]=arr[left];
        left++;
        index++;
    }
    while(right < rightEnd)
    {
        temp[index]=arr[right];
        right++;
        index++;
    }




}

void mergeSort(int arr[],int temp[],int leftStart,int rightEnd)
{
    if(leftStart >= rightEnd)
    {
        return;
    }
    int middle = (leftStart + rightEnd)/2;
    mergeSort(arr,temp,leftStart,middle);
    mergeSort(arr,temp,middle+1,rightEnd);
    merge(arr,temp,leftStart,rightEnd);
}

void printArray(int temp[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d",temp[i]);
    }
}
int arr[]={6,3,2,1};
int temp[4];
int main()
{
    
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,temp,0,arr_size-1);
    printArray(temp,arr_size);
}
