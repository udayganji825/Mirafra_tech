#include<stdio.h>
int mystrcmp(char *,char *,int n);
int main()
{
	char a[20],b[20];
	printf("Enter the first string:");
	scanf("%[^\n]s",a);
	printf("Enter the second string:");
	scanf(" %[^\n]s",b);
	int n;
	printf("Enter n value");
	scanf("%d",&n);
	int i=mystrcmp(a,b,n);
	if(i==0)
		printf("both the strings are equal\n");
	if(i==1)
		printf("both the strings are not equal\n");
}

int mystrcmp(char *a,char *b,int n)
{
	int flag=0;
	while(n)
{
	if(*a!='\0'&&*b!='\0')
	{
		if(*a!=*b)
		{
			flag=1;
			return flag;
		}
		a++;
		b++;
	}
	n--;
}
	if(flag==0)
		return 0;
	else
		return 1;
}

