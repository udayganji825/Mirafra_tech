#include<stdio.h>
#include<string.h>
char *mystrcat(char *,char *);
int main()
{
	char a[20],b[20];
	printf("enter the string \n");
	scanf("%[^\n]s",a);
	printf("enter the string \n");
	scanf(" %[^\n]s",b);
	printf("after concatenation the string is : %s\n",mystrcat(a,b));
}

char *mystrcat(char *a,char *b)
{
	int k;
	k=strlen(a);
	while(*b!='\0')
	{
		*(a+k)=*b;
		k++;
		b++;
	}
	*(a+k)='\0';
	return a;
}

