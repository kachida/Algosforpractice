#include<stdio.h>
#include<string.h>
void removeSpaces(char *a,int length);

void removeSpaces(char *a,int length)
{
int numSpaces=0;
int i=0,j=0;
for(i=0;i<length;i++)
{
if((*(a+i)) == ' ')
{
numSpaces += 1;
}else
{
a[i-numSpaces]=a[i];
}

}
int newlength = length-numSpaces;
char s[newlength+1];
for (j=0;j<newlength;j++)
{
s[j]=(*(a+j));
printf("%c",s[j]);
}

}
int main()
{
char  s[] = "   Spaces, Removed! ";
int length = strlen(s);
removeSpaces(s,length);
printf("\n");
return 0;
}
