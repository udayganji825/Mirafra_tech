#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
int main()
{
	struct node *head,*temp,*newnode,*k;
	head=NULL;
	temp=NULL;
	int choice=1,pos;
	while(choice)
	{
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("Enter the Data:");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(head==NULL)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		
		printf("Do you want to create more nodes:");
		scanf("%d",&choice);
	}	
	temp=head;	
	printf("The data is:\n");
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	temp=head;
	printf("Enter the position:");
	scanf("%d",&pos);
	if(pos==1)
	{
		head=temp->next;
		temp=temp->next;
	}
	else
	{
		for(int i=1;i<=pos-1;i++)
		{
			if(temp->next!=NULL)
			{
				k=temp;
				temp=temp->next;
			}
		}
		k->next=temp->next;
		free(temp);
	}
				
		
	printf("After deleting at position  the data is:\n");
	
	while(head!=NULL)
	{
		printf("%d\n",head->data);
		head=head->next;
	}
}	
