#include<stdio.h>
#include<conio.h>
#define MAX_SIZE 10
int top=-1;
int stack[MAX_SIZE];
void push(int x)
{
if(top==MAX_SIZE-1)
{
  printf("Error:Stack is full");
 }
else
 {
  top=top+1;
  stack[top]=x;
 }
}
  void pop()
{
  if(top==-1)
{
  printf("Error:Stack is empty");
}
else
{
top=top-1;
 }
}
void print()
 {
 int i;
 if(top==-1)
  {
  printf("Stack is empty\n");
 }
  else
  {
   printf("Stack:\n");
   for( i=0;i<=top;i++)
   {
    printf("%d\n",stack[i]);
   }
  }
  void main()
  {
   push(10);
   push(15);
   pop();
   pop();
   getch();
  }
