#include<stdio.h>
#include<stdlib.h>
void display();
void create();
void insert_at_end();
struct node
{
	int data;
	struct node *prev;
	struct node *next;
};
struct node *head=NULL,*temp=NULL,*newnode;
int choice=1;


int main()
{

	create();
	display();
	insert_at_end();
	display();
}


void create()
{

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

}



void display()
{
	temp=head;		
	printf("Display linked list:\n");
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}	
void insert_at_end()
{
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data:");
	scanf("%d",&newnode->data);
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	
//	newnode->prev=temp;
//	newnode->next=NULL;
	temp->next=newnode;
	newnode->prev=temp;
}

