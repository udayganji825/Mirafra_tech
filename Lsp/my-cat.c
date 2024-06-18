#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<unistd.h>
#include<string.h>
int main()
{
	char c;
	int fd;
	int r;
	fd=open("u.txt",O_RDWR|O_CREAT);
	while(1)
	{
	       r=read(fd,&c,1);
		if(r==0)
		break;		

		write(1,&c,1);
	}
	close(fd);
	return 0;
}
