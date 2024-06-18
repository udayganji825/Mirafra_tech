#include<stdio.h>
int main()
{
	int n,i,temp;
	printf("Enter the size of an array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of an array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The elements of array are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("After reversing the array elements are:\n");
	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;

	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}

}		
