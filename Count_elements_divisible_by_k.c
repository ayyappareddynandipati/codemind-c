#include<stdio.h>
int main()
{
    int n,k,i,cnt=0,arr[100];
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%k==0)
        {
            cnt++;
        }
    }
    printf("%d",cnt);
}