#include<stdio.h>
int main()
{
    int n,i,a,b,c=0,d=-1;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
       if(i%2==0)
       {
           a=2*c;
           printf("%d ",a);
           c++;
       }
       else
       {
           b=d+1;
           printf("%d ",b);
           d++;
       }
    }
}