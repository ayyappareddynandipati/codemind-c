#include<stdio.h>
int main()
{
    int n,i,arr[100],p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2)
        {
            p=arr[i];
        }
    }
    printf("%d",p);
}