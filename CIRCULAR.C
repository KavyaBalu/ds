#include<conio.h>
#include<stdio.h>
int front=-1, rear=-1, max, item;
int cquee[20];
void insert();
void delete();
void search();
void display();
int main()
{
int choice;
printf("enter the size of queue");
scanf("%d",&max);
do
{
	printf("\n1.insert\n2.delete\n3.search\n4.dis[lay\n5.exit");
	scanf("%d",&choice);
	switch(choice)
		{
		case 1: insert();
			break;
		case 2: delete();
			break;
		case 3: search();
			break;
		case 4: printf("exiting");
			break;
		default:printf("\n if u want to exit plz enter 4\n");
		}

while(choice!=5);
}

void insert()
{
	int temprear=rear;
	printf("\nrear=%d",rear);
	rear=((rear+1),max);
	printf("\nrear=%d",rear);
	printf("\nfront=%d",front);
	if(front==-1)
	{
	if(front==-1)
	{
		front=0;
		rear=0;
		printf("enter the element to insert:");
		scanf("%d",&item);
		cquee[rear]=item;
	}
	else if(rear==front)
	{
		printf("queue overflow");
		rear=temprear;
	}
	else
	{
		printf("enter the element to insert:");
		scanf("%d",&item);
		cquee[rear]=item;
	}
}
void display()
{
	int i= front;
	printf("front=%d\nrear=%d",front,rear);
	if(front==-1)
	{
		printf("queue is empty");
	}
	else
	{
		for(;i!=rear;i=((i+1)%(max)))
	{
		printf("\n%d",cquee[i]);
	}
		printf("\n%d",cquee[i]);
	}
}
void deletion()
{
	if(front==1)
	{
		printf("\nquee underflow\n");
	}
	else if(front==rear)
	{
		printf("\ndeleting element %d",cquee[front]);
		front=-1;
		rear=-1;
	}
	else
	{	front=(front+1)%max;
		printf("\nediting thr element %d", cquee[front]);
	}
}
void search()
{
	int data,i=1,dfront=front;
	printf("enter the element to search");
	scanf("%d",&data);
	if(front==-1)
	{
		printf("queue is empty");
	}
	else
	{
		for(;dfront!=rear;dfront=((dfront+1)%max)))
	{
		if(cquee[dfront]==data)
		{
			printf("element found at %dth position",i);
		}
		i++;
		}
		if(cquee[dfront]==data)
			{
			printf("element found at %d the position",i);
			}
}
}


