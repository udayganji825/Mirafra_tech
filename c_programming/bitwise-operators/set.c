#include<stdio.h>
int main()
{
	int num,pos;
	printf("enter num and pos:\n");
	scanf("%d %d",&num,&pos);
	printf("after set:%d\n",(num|1<<pos));
	printf("after clear:%d\n",(num&~(1<<pos)));
	printf("after toggle:%d\n",(num^1<<pos));
	return 0;
}
