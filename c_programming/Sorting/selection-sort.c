#include<stdio.h>
int main()
{
	int n,i=0,j=0,temp;
	printf("Enter the size of an array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements of an array:");
	for(int k=0;k<n;k++)
	{
		scanf("%d",&a[k]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	} 	

	printf("After sorting array elements are:");

	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);

	}
		printf("\n");
}	


