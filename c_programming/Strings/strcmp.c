#include<stdio.h>
int mystrcmp(char *,char *);
int main()
{
	char a[20],b[20];
	printf("Enter the first string:");
	scanf("%[^\n]s",a);
	printf("Enter the second string:");
	scanf(" %[^\n]s",b);
	int i=mystrcmp(a,b);
	if(i==0)
		printf("both the strings are equal\n");
	if(i==1)
		printf("both the strings are not equal\n");
}

int mystrcmp(char *a,char *b)
{
	int flag=0;
	while(*a!='\0'&&*b!='\0')
	{
		if(*a!=*b)
		{
			flag=1;
			return flag;
		}
		a++;
		b++;
	}

	if(flag==0)
		return 0;
	else
		return 1;
}

