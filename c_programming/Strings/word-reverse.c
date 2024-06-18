#include<stdio.h>
#include<string.h>
int main()
{
	char s[30],temp;
	printf("Enter the string:\n");
	scanf("%[^\n]s",s);
	int i,j,k,l;
	int start=0;
	l=strlen(s);
	for(i=0;i<l/2;i++)
	{
		temp=s[i];
		s[i]=s[l-i-1];
		s[l-i-1]=temp;
	}
//	temp=0;
	for(i=0;i<=l;i++)
	{
		if(s[i]==' '||s[i]=='\0')
		{
			for(j=start,k=i-1;j<k;j++,k--)
			{
				temp=s[j];
				s[j]=s[k];
				s[k]=temp;
			}
		start=i+1;
		}
	}

	printf("reversed words are:\n%s\n",s);
}	
	
			
