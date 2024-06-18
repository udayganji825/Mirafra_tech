#include<stdio.h>
#include<dirent.h>
#include<stdlib.h>
void my_ls(const char *p);
int main(int argc ,char *argv[])
{
	const char *p=".";
	if(argc>2)
	p=argv[1];
	else
	p=".";
	my_ls(p);
	return 0;
}

void my_ls(const char *p)
{
	DIR *k=NULL;
	struct dirent *e=NULL;
	if((k=opendir(p))==NULL);
	{
		perror("opendir");
	}
	while((e=readdir(k))!=NULL)
	printf("%s\t",e->d_name);

	printf("\n");
	closedir(k);
	return;
	
}


	
