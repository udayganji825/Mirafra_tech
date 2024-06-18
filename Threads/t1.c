#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>

void *f(void *n);

int main()
{
	int a=34,ret;
	void *val;
	pthread_t thread;
	ret=pthread_create(&thread,NULL,f,&a);
	pthread_join(thread,&val);
	printf("Thread executed \n");
	printf("%s\n",(char *)val);	
}

void *f(void *n)
{
	int u=*((int *)n);
	printf("%d\n",u);
	char *message="hii uday";
	pthread_exit(message);
}
	
