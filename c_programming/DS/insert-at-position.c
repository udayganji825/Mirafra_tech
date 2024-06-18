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
	int choice=1,pos,i;
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
	printf("Enter the position:");
	scanf("%d",&pos);
	temp=head;
	if(pos==1)
	{
		newnode->next=head;
		head=newnode;
	}
	else
	{
	for(i=1;i<pos-1;i++)
	{
		if(temp->next!=NULL)
		temp=temp->next;
	}
	
	newnode->next=temp->next;
	temp->next=newnode;	
	}
	printf("After inserting the data is:\n");
	while(head!=NULL)
	{
		printf("%d\n",head->data);
		head=head->next;
	}

}	


