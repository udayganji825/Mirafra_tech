#include<stdio.h>
#include<string.h>
char *mystrrev(char *);
int main()
{
	char a[20];
	printf("enter the string \n");
	scanf("%[^\n]s",a);
	printf("after reversing  the string is : %s\n",mystrrev(a));
}

char *mystrrev(char *a)
{
	int i=0,l;
	l=strlen(a);
	char temp;
	for(;i<l/2;i++)
	{
		temp=*(a+i);
		*(a+i)=*(a+(l-i-1));
		*(a+(l-i-1))=temp;
		
	}
	
	return a;
}

