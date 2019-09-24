#include<stdio.h>
#include<stdlib.h>

typedef struct node
{int data;
struct node *next;
}node;

node*temp;
node*head=0;

void insert_at_front(int item)
{

temp=(node*) malloc (sizeof (node));
temp->data=item;
temp->next=head;

head=temp;
}

void insert_at_end(int item)
{node *ptr;
ptr=head;
temp=(node*) malloc (sizeof(node));
temp->data=item;

if(head==0)
{temp->next=head;
head=temp;
}
else
{while(ptr->next!=0)
{ptr=ptr->next;
}
ptr->next=temp;

}
}
void display()
{temp=head;
if(temp==0)
{printf("\n lst is empty");
return;
}
else
{while(temp!=0)
{printf("\n %d",temp->data);
temp=temp->next;
}
}
}
int main()
{

int item,n;
	while(1)
	{
	printf("choose an operation");
	printf("\n1.insert at front \n2.insert at end\n3. display\n4.exit\n choice:");
	scanf("%d",&n);
	if(n==1||n==2)
	{	printf("\n enter an element:");
		scanf("%d",&item);
	}
switch(n)
{

case 1:insert_at_front(item);
break;
case 2: insert_at_end(item);
break;
case 3: display();
break;
case 4:exit(0);
default:printf("invalid input");
}
}
return 0;
}
