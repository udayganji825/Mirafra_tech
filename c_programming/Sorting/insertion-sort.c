#include<stdio.h>
int main()
{
	int n,l,m,temp;
	printf("Enter the size of an array");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of an array");
	for(int i=0,i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for( l=1,i<n;l++)
	{
		temp=a[l];
		m=l-1;
	    while(m>=0&&a[m]>temp)
		{
			a[m+1]=a[m];
			m=m-1;
		}
		a[m+1]=temp;
	}
	printf("After sorting array elements are\n");
	for(int i=0,i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
}
	
