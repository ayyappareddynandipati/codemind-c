#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,temp,r,s=0;
    scanf("%d",&n);
    temp=abs(n);
    while(temp>0)
    {
        r=temp%10;
        s=(s*10)+r;
        temp=temp/10;
    }
    if(n>0)
    {
        printf("%d",s);
    }
    else
    {
        printf("%d",-s);
    }
}
