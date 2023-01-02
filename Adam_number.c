#include<stdio.h>
int main()
{
    int n,r,s=0,i,a,t,d=0;
    scanf("%d",&n); i=n*n;
    while(n>0)
    {
        r=n%10;
        s=s*10+r; 
        n=n/10;
    }
    a=s*s;
    while(a>0) 
    {
        t=a%10;
        d=d*10+t;
        a=a/10;
    }
    if(d==i)
    printf("True");
    else
    printf("False");
}