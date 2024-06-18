#include<stdio.h>
int main()
{
	int num,pos;
	printf("enter num and pos:\n");
	scanf("%d %d",&num,&pos);
	if(num&1<<pos)
		printf("set\n");
	else
		printf("not set\n");
}
