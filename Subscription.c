#include<stdio.h>
int main()
{
    int n,i,n1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&n1);
        if(n1>=50)
        {
            printf("YES
");
        }
        else
        {
            printf("NO
");
        }
    }
}