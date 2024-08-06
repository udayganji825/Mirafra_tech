#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include<unistd.h>

int main()
{
	int fd, count;
        char buff[]="MIRAFRA ";
	fd = open("/dev/task_2", O_RDWR);
	write(fd,buff,strlen(buff));


	 char str[100];
	 read(fd,str,sizeof(str));
         printf("Message from kernel: %s\n", str);
	


         char puff[]="TECHNOLIGIES  ";
         write(fd,puff,strlen(puff));
	 read(fd,str,sizeof(str));
         printf("Message from kernel: %s\n", str);
         
	
         char tuff[]="HYDERABAD";
         write(fd,tuff,strlen(tuff));
	 read(fd,str,sizeof(str));
         printf("Message from kernel: %s\n", str);
        

	close(fd);         
}

