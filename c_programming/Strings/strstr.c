#include<stdio.h>
int my_strstr(char [],char []);
int main()
{
	char a[30],b[30];
	int k;
	printf("Enter the string :\n");
	scanf("%[^\n]s",a);
	printf("Enter the sub string :\n");
	scanf(" %[^\n]s",b);
        k=my_strstr(a,b);
	if(k==-1)
	printf("the sub string not found\n");
	else
	printf("the sub string is found at %d\n",k);
	

}

int my_strstr(char a[],char b[])
{	
	int i=0,j=0;
	for(i=0;a[i]!='\0';i++)
	{
		for(j=0;b[j]!='\0';j++)
		{
			if(a[i+j]!=b[j])
			{
				break;
			}
		}
		if(b[j]=='\0')
		return i;
		
	}
		return -1;
}
	 
