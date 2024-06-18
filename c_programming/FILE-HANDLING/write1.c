#include<stdio.h>
int main()
{
	FILE *p;
	int a;
	p=fopen("1.txt","a+");
	while(1)
	{
		printf("Enter a num:");
		scanf("%d",&a);
		if(a==0)
			break;
		putw(a,p);
	}
	rewind(p);
	while((a=getw(p))!=EOF)
	printf("%d\n",a);
	fclose(p);
}
