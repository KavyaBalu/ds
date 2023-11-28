#include<stdio.h>
#include<conio.h>
struct node
{
	int data;
	struct node*left,*right;
};
struct node*root;
void insert(){
struct node *t=(struct node *)malloc(sizeof(struct node));
printf("enter the data");
scanf("%d",&t->data);
	if(root==NULL)
{
		root=t;
}
	else
{
struct node *p=(struct node*)malloc(sizeof(struct node));
p=root;
	while(1)
{
	if(t->data<p->data)
{
	if(p->left==NULL)
{
	p->left=t;
	break;
	}
	else
	{
	p=p->left;
	}
}
else
{
	if(p->right==NULL)
	{
	p->right=t;
	break;
	}
	else
	{
	p=p->right;
	}
}
}
}
}

void preorder(struct node*p)
{
if(p!=NULL)

{
printf("\t%d",p->data);
preorder(p->left);
preorder(p->right);
}
}
void postorder(struct node*p)
{
if(p!=NULL)

{

postorder(p->left);

postorder(p->right);
printf("\t%d",p->data);
}

}
void inorder(struct node*p)
{
if(p!=NULL)

{

inorder(p->left);
printf("\t%d",p->data);
inorder(p->right);
}
}
void main()
{
int ch;
do{
printf("enter your choice\n1. insert\n2.preorder\n3.inorder\n4.postorder");
scanf("%d",&ch);
switch(ch)
{
case 1:
	insert();
	break;
case 2:
	preorder(root);
	getch();
	break;
case 3:
	inorder(root);
	getch();
	break;
case 4:
	postorder(root);
	getch();
	break;
case 5:
	exit();
default:
{
	printf("invalid choice");
	getch();
	}
	}
	}while(1);
}
