#include<stdio.h>
#include<semaphore.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
sem_t a,b;
int l=0;
void * p(void *);
void * q(void *);
int main()
{
	pthread_t t1,t2;
	sem_init(&a,0,1);
	sem_init(&b,0,0);
	pthread_create(&t1,NULL,p,NULL);
	pthread_create(&t2,NULL,q,NULL);
	pthread_join(t1,NULL);
	pthread_join(t2,NULL);
}


void * p(void *ar)
{
	
	while(1)
{
	sem_wait(&a);
	{
		if(l%2==0)
			printf("%d\n",l);
		l++;
		sleep(1);
	}
	sem_post(&b);
}
}

void * q(void *ar)
{
	while(1)
{
	sem_wait(&b);
	{
		if(l%2!=0)
			printf("%d\n",l);
		l++;
		sleep(1);
	}
	sem_post(&a);
}
}
