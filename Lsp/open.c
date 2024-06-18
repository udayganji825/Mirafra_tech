#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<unistd.h>
#include<string.h>
int main()
{
	char a[4]="uday";
	int l=strlen(a);

	int fd,k;
	fd=open("1.txt",O_RDWR|O_CREAT,0666);
	k=write(fd,a,l);

	close(fd);
	return 0;
}
	
