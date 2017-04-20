#include<stdio.h>
void tower_of_hanoi(int num,char from,char to,char aux);
int main()
{
   int n;
   printf("Enter Number of Disks\n");
   scanf("%d",&n);
	printf("Steps\n");
    tower_of_hanoi(n,'A','B','c');
    return 0;
}
void tower_of_hanoi(int num,char from,char to,char aux)
{
    if(num==1)
    {
        printf("Move  Disk 1 from %c to %c\n",from,to);
        return;
    }
   
        tower_of_hanoi(num-1,from,aux,to);
        printf("Move  Disk %d from %c to %c\n",num,from,to);
        tower_of_hanoi(num-1,aux,to,from);
 
    
}
