#include<stdio.h>
#include<stdlib.h>

typedef struct node()
{
int data;
struct node*next;
}node;
node*temp;

void insert_at_front(int item)
{
temp=(node*)malloc(sizeof (node))
temp->data=item;
temp->next=*head;

*head=temp;
}

void insert_at_end(int item)
{
node*ptr;
ptr=head;
temp=(node*)malloc(sizeof node));
temp->data=item;

if(head==0)
{
temp->next=head;
head=temp;
}
else
{
while(ptr->next!=0)
{ptr=ptr->next;
}
}
}
void display(node*temp)
{
temp=head;
if(temp==0)
printf("\n List is empty");
return;
else
{
while(temp!=0)
{
printf("\n %d",temp->data);
temp=temp->next;
}
}
int main()
{
node*head=null;
node*ptr=null;
int item,n;
while(1)
{
printf("choose an operation");
printf("\n 1)Insert at front \n 2)Insert at end \n 3)Display \n 4)Exit \n choice:");
scanf("%d",&n);
switch(n)
{
case 1: printf("Enter an element");
	scanf("%d",&item);
	insert_at_front(item,*head);
	break;
case 2: printf("Enter an element");
	scanf("%d",&item);
	insert_at_end(item,head,ptr);
	break;
case 3: exit(0);
default: printf("Invalid input");
}
}
return 0;
}



