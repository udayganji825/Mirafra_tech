#include<stdio.h>
int main()
{
	int a[5],x,i,flag=0;
	printf("Enter thr elements of an array:");
	for( i=0;i<5;i++)
	  scanf("%d",&a[i]);
	printf("enter the search element:");
	scanf("%d",&x);
	for( i=0;i<5;i++)
   	  {
		if(x==a[i])
		{
		flag=1;	
		printf("Element found %d\n",x);
		break;
		}
	  }	
	if(flag==0)
	printf("element not found\n");
}
