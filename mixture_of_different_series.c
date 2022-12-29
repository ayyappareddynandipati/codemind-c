#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a,b,p1=0,p2=0;
    scanf("%d",&n);
    for(i=i;i<=n;i++)
    {
        if(i%2==0)
        {
            a=pow(2,p1)-1;
            printf("%d ",a);
            p1++;
        }
        else
        {
            b=pow(3,p2)-1;
            printf("%d ",b);
            p2++;
        }
    }
}