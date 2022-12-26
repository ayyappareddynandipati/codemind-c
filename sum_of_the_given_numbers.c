#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    {
        int s,i,j;
        scanf("%d%d",&i,&j);
        s=i+j;
        printf("%d
",s);
    }
}