#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter the value of n:");
	scanf("%d",&n);
	int a[n];
	printf("enter the array values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("After finding duplicate elements:\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			printf("%d\n",a[j]);
		}
	}
}
		
