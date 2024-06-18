#include<stdio.h>
#include<unistd.h>
int main()
{
	pid_t pid;
	pid=fork();
	if(pid==0)
	{
		 sleep(5);
		printf("Iam child process\n");
		printf("child pid :%d\n",getpid());
		printf("child ppid :%d\n",getppid());
	}
		
	
	else
	{
		
		printf("Iam parent process\n");
		printf("parent pid :%d\n",getpid());
		printf("parent ppid :%d\n",getppid());
	}
}
