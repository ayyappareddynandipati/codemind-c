#include<stdio.h>
int main()
{
    int n,q,sum=0,sn1,sn2,r,rsn2;
    scanf("%d",&n);
    sn1=n*n;
    q=n;
    while(q>0)
    {
        r=q%10;
        sum=sum*10+r;
        q=q/10;
    }
    sn2=sum*sum;
    q=sn2;
    sum=0;
    while(q>0)
    {
        r=q%10;
        sum=sum*10+r;
        q=q/10;
    }
    rsn2=sum;
    if(sn1==rsn2)
    printf("True");
    else
    printf("False");
}