#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<unistd.h>
#include<string.h>
int main()
{
	char c;
	int i,j,k;
	i=open("1.txt",O_RDWR);
	j=open("2.txt",O_RDWR);
	while(1)
	{
		k=read(i,&c,1);
		if(k==0)
		break;
		write(j,&c,1);
	}
	close(i);
	close(j);
	execl("/bin/rm","rm","1.txt",NULL);
	return 0;
}
