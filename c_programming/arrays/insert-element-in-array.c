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
	for(i=n;i>=pos;i--)
		a[i]=a[i-1];
	a[pos-1]=value;
	printf("After inserting  the  elements:\n");
	for(i=0;i<=n;i++)
		printf("%d\n",a[i]);
	
}

