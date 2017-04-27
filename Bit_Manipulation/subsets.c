#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void subset(char set[],int size)
{

    int power_size = pow(2,size);
    int counter =0,j=0;    
    for(counter=0;counter<power_size;counter++)
    {
       
        printf("\n{");
        for(j=0;j<size;j++)
        {
            if(counter & (1<<j))
            printf("%c,",set[j]);
        }
        printf("}");
    }
    
}


int main() {
	// your code goes here
	char set[]={'A','B','C'};
	int set_size = sizeof(set)/sizeof(set[0]);
	subset(set,set_size);
	return 0;
}

