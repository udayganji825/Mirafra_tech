#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};


int main()
{
	struct node *head,*newnode,*temp;
	int choice=1;
	head=NULL;
	while(choice)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
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
	printf("Before inserting the data is:\n");
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the Data:");
	scanf("%d",&newnode->data);
	newnode->next=head;
	head=newnode;	
	temp=head;
	printf("After inserting the data is:\n");
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}

}	


