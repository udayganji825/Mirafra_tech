#include<stdio.h>
int main()
{
	FILE *p;
	int a;
	p=fopen("1.txt","r+");
	while(1)
	{
		printf("Enter a num:");
		scanf("%d",&a);
		putw(a,p);
		if(a==0)
		break;
	}
	rewind(p);
	
	while((a=getw(p)!=EOF))
		printf("%d\n",a);
}
