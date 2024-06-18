#include<stdio.h>
#include <sys/types.h>
       #include <sys/wait.h>

#include<unistd.h>
#include<stdlib.h>
int a=5;
int main()
{
	int k=vfork();
	if(k<0)
	{
	perror("vfork fail");
	exit(1);
	}
	
	if(k==0)
	{
		printf("Iam child :%d\n",a);
		++a;
		exit(0);
	}
	else
	{
		++a;
 		printf("Iam parent :%d\n",++a);
		wait(0);
	}
	return 0;
}
	
