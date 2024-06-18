#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,l;
	char a[20];
	printf("enter a string:");
	scanf(" %[^\n]s",a);
	l=strlen(a);
	i=0;j=l-1;
	char temp;
	while(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;
		j--;
	}
	printf("after string reverse :%s",a);
}	
