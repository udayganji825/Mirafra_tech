#include<stdio.h>
int main()
{
	int n,c=0;
	printf("enter a number");
	scanf("%d",&n);
	if(n&(n-1)==0)
	{
		while(n&1==0)
		{
			c++;
			n=n>>1;
		}
	if(c%2==0)
		printf("power of 4\n");
	else
		printf("not power of 4\n");
	}
	
	else
		printf("not power of 4\n");
}
