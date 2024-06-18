#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev;
	struct node *next;
};
int main()
{

	struct node *head,*temp,*newnode;
	head=NULL;
	int choice=1;
	while(choice)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter the data:");
		scanf("%d",&newnode->data);
		newnode->prev=NULL;
		newnode->next=NULL;
		if(head==NULL)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			newnode->prev=temp;
			temp=newnode;
		}
	

		printf("Do you want to create more nodes:");
		scanf("%d",&choice);
	
	}
		temp=head;		
		printf("Display linked list:\n");
		while(temp!=NULL)
		{
			printf("%d\n",temp->data);
			temp=temp->next;
		}
}
