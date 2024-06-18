#include<stdio.h>
int main()
{
	FILE *p,*q;
	char k;
	p=fopen("1.txt","r");
	q=fopen("2.txt","w");
	while((k=getc(p))!=EOF)
	putc(k,p);
}	
