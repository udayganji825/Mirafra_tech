#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
int main()
{
	struct node *head,*temp,*newnode;
	head=NULL;
	temp=NULL;
	int choice=1;
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
	head=temp->next;
	temp=temp->next;
	printf("After deleting the first node the data is:\n");
	
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}	
