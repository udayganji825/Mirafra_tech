#include<stdio.h>
#include<stdlib.h>
void display();
void create();
void insert_at_pos();
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
	insert_at_pos();
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
void insert_at_pos()
{
	int pos;
	printf("Enter the position:");
	scanf("%d",&pos);
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data:");
	scanf("%d",&newnode->data);
	newnode->prev=NULL;
	newnode->next=NULL;
	temp=head;
	if(pos==1)
	{
		newnode->next=head;
		head->prev=newnode;
		head=newnode;
	}
	else
	{
		for(int i=1;i<pos-1;i++)

		{
			if(temp->next!=NULL)
				temp=temp->next;
		}
		
		newnode->next=temp->next;
		newnode->prev=temp;
		temp->next->prev=newnode;
		temp->next=newnode;
	}
}

