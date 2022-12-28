#include<stdio.h>
int main()
{
	int a,b,s,d;
	float x,y,r,k;
	scanf("%d%d",&a,&b);
	scanf("%f%f",&x,&y);
	s=a+b;
	d=a-b;
	r=x+y;
	k=x-y;
	printf("%d %d
%0.1f %0.1f",s,d,r,k);
}