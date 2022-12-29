#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {  
        int a,b,c,d;
        scanf("%d%d",&c,&d);
        a=2*c;
        b=5*d;
       if(a>b)
       printf("Chocolate
");
       else if (a<b)
       printf("Candy
");
       else
       printf("Either
");
    }
}