#include<stdio.h>
int main()
{
	int n;
	printf(" enter a number:");
	scanf("%d",&n);
	if((n&(n-1))==0)
	printf(" %d is a power of 2\n",n);
	else
	printf(" %d is not a power of 2\n",n);
}
