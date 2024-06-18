#include<stdio.h>
#include<string.h>
char *mystrcpy(char *,char *);
int main()
{
	char a[20],b[20];
	printf("enter the string \n");
	scanf("%[^\n]s",a);
	printf("enter the string \n");
	scanf(" %[^\n]s",b);
	printf("after coping  the string is : %s\n",mystrcpy(a,b));
}

char *mystrcpy(char *a,char *b)
{
	int i;
	i=0;
	while(*b)
	{
		*(a+i)=*b;
		b++;
		i++;
	}
	*(a+i)='\0';
	return a;
}

