#include<stdio.h>
int main()
{
    int sum1=0,sum2=0,diff,n,i,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if (arr[i]%2==0)
        {
            sum1+=arr[i];
        }
        else
        {
            sum2+=arr[i];
        }
    }
    if(sum2>sum1)
    {
        printf("%d",sum2-sum1);
    }
    else
    {
         printf("%d",sum1-sum2);   
    }
}