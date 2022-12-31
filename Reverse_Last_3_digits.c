#include<stdio.h>
int main()
{ 
    int n,m,a,r,t,c,t1;
    scanf("%d",&n);
    m=n%1000;
    a=m;
    while(m!=0)
    { 
        r=m%10; 
        t=t*10+r;
        m=m/10;
        }
        t1=n-a;
        c=t1+t;
        printf("%d",c);
    
}