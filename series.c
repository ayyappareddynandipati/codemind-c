#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a,b,c=1,d=1;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    { 
        if(i%2==0)
        {
            a=pow(2,c)-1;
            printf("%d ",a);
            c++;
        }
        else
        {
            b=pow(3,d)-1;
            printf("%d ",b);
            d++;
        }
    }
    
}