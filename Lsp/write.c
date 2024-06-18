#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
int main()
{


	int fd,k;
	char s[100];
	fd=open("2.txt",O_RDWR|O_CREAT,0666);
	read(fd,&s,5);
//	k=write(fd,a,l);
	write(1,&s,3);
	write(1,&s,2);

	close(fd);
	return 0;
}

