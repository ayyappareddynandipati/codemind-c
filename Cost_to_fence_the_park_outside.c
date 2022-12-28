#include<stdio.h>
int main()
{
    int l,b,c,d;
    scanf("%d%d%d%d",&l,&b,&d,&c);
    int tc;
    tc=c*((l+2*(d))*(b+2*(d))-(l*b));
    printf("%d",tc);
}