#include<stdio.h>
#include<string.h>
int main()
{
 char a[100];
 char b[100];
 printf("enter first string:");
 scanf(" %[^\n]s",a);
 printf("enter second string:");
 scanf(" %[^\n]s",b);

 int al=strlen(a);
 int bl=strlen(b);

 if(al==bl)
{
   int c=0;
    for(int i=0;i<al;i++)
    {
      if(a[i]==b[i])
       c++;
     }

  if(c==al)
  printf("both are equal\n");
  else
  printf("both are not equal\n");
}
else
  printf("both are not equal\n");
}


