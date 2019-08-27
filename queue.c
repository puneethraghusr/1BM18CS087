#include<stdio.h>
#define QSIZE_20
void enqueue(int *,int *);
void dequeue(int *,int *,int *);
void display(int *,int *,int *);
void main()
{
int q[QSIZE],r=-1,f=0;
int choice2;
char choice='y';
clrscr();
while(choice1=='y'||choice1=='Y')
{
printf("Enter choice of operation on queue:1.Enqueue,2.Dequeue,3.Display\n");
scanf("%d",&choice2);
if(choice2==1)
{
enqueue(q,&r);
display(q,&f,&r);
}
else if(choice2==2)
{
dequeue(q,&f,&r);
display(q,&f,&r);
}
else if(choice2==3)
{
display(q,&f,&r);
}
else
printf("\n Wrong input");
printf("\n Want to continue? yes/no:Enter y for yes and n for no:\t");
fflush(stdin);
scanf("%s",&choice);
}
void enqueue(int q[],int*r)
{
int item;
printf("Enter item\n");
scanf("%d",&item);
if((*r==QSIZE-1))
printf("\n Queue if full");
*r=*r+1;
q[*r]=item;
printf("Value inserted=%d",item);
}
void dequeue(int q[],int*f,int*r)
{
if(*f>*r);
{
printf("Queue is empty\n");
}
printf("Element deleted is %d",q[*f]);
(*f)++;
}
void display(int q[],int*f,int*r)
{
int i;
if(*f>*r)
printf("Nothing to dispay");
for(i=*f;i<=*r;i++)
{
printf("%d",q[i]);
}
}













