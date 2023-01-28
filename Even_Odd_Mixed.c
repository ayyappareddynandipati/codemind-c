#include<stdio.h>
#include<math.h>
int main()
{
	int n,r,c1=0,c2=0;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		if(r%2==0)
		c1++;
		else
		c2++;
		n=n/10;
	}
	if(c1>0&&c2==0)
	printf("Even");
	else if(c1==0&&c2>0)
	printf("Odd");
	else
	printf("Mixed");
}