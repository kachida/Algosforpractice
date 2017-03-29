#include<stdio.h>
#include<string.h>
void permute(char *a,int l, int r);
void swap(char *a,char *b)
{
    char temp;
       temp = *a;
    *a = *b;
    *b = temp;
}
void permute(char *a,int l,int r)
{
    if(l==r)
    {
        printf("\n----%s-----\n",a);

    }else
    {
        for(int i=l;i<=r;i++)
        {
        swap((a+l),(a+i));
        permute(a,l+1,r);
        swap((a+l),(a+i));
        }
    }

}
int main()
{
char s[] ="abc";
int length = strlen(s);
permute(s,0,length-1);
return 0;
}
