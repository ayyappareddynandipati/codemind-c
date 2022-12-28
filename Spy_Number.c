#include<stdio.h>
int main()
{
    int num, r,s=0,prod=1;
    scanf("%d",&num);
    while(num>0)
    {
        r=num%10; 
        s+=r; 
        prod*=r; 
        num=num/10; 
    }
    if(s==prod)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}