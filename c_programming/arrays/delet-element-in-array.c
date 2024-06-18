#include<stdio.h>
int main()
{
	int a[100];
	int pos,i,n,value=100;
	printf("Enter the no of elements:");
	scanf("%d",&n);
	printf("Enter the array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("display  the  elements:\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	printf("Enter the position:");
	scanf("%d",&pos);
	for(i=pos-1;i<n-1;i++)
		a[i]=a[i+1];
	
	printf("After deleting  the  elements are:\n");
	for(i=0;i<n-1;i++)
		printf("%d\n",a[i]);
	
}

