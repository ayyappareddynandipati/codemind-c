#include<stdio.h>
int main()
{
    int n,temp,c=0;
    scanf("%d",&n);
    temp=n;
    if(temp>0)
    {
        while(temp!=0)
        {
            if(temp%2==0)
            {
                temp/=2;
            }
            else if(temp%3==0)
            {
                temp/=3;
            }
            else if(temp%5==0)
            {
                temp/=5;
            }
            else
            {
                c++;
                break;
            }
        }
        if(c=1)
        {
            if(temp==1)
            {
                printf("Ugly Number");
            }
            else
            {
                printf("Not Ugly Number");
            }
        }
    }
    else
    {
        printf("Not Ugly Number");
    }
}