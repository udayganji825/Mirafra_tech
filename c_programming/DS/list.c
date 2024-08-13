#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

///////////////////////////////////////////
*******************************************
/////////////////////////////////////////
int main()
{
	struct node *head,*newnode,*temp;
	int choice=1;
	head=NULL;
		printf("Do you want to create more nodes:");
		scanf("%d",&choice);
	}

	temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
///////////////////////////////////////////
****************************************************
///////////////////////////////////////////////
