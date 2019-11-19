#This is the algo to be used for the insertion in a linked list
#include<stdio.h>
#include<malloc.h>
#include<dos.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *link;
};

typedef struct node NODE;

void Insert(NODE **start)
{   
    int item;
    NODE *ptr=*start;
    NODE *newnode=(NODE *)malloc(sizeof(NODE));
    newnode->link=NULL;
    printf("enter item(integer) to be inserted: \n");
    scanf("%d",&item);
    newnode->info=item;
	if (ptr == NULL)
	{
		*start=newnode;
	}
	else
	{
		newnode->link=ptr;
		ptr=newnode;
		*start=ptr;
	}
}

void Display(NODE **start)
{   NODE *ptr=*start;
	while(ptr!=NULL)
	{   
		printf(" %d \t %X \n ",ptr->info,ptr);
		getch();
		ptr=ptr->link;
	}
}

void main()
{   int choice;
	NODE *start = NULL;
	int x= 1;
	
	
	while(x)
	{   
	    printf("Select Operation \n 1-Insert \n 2-Display \n 3-Done");
	    scanf("%d",&choice);
		switch(choice)
		{
			case 1: Insert(&start); break;
			case 2: Display(&start); break;  
			case 3:      x=0; break;
			
		}
	}
	
}


