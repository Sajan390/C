#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define N 5
int stack[N],top=-1;
void push();
void pop();
void disp();
int main()
{
	int ch;
	while(1)
	{
		printf("***Stack Menu***\n");
		printf("1.Push \n 2.Pop \n 3.Display all \n 4.Exit\n");
		print("Enter your choice : ");
		scanf("%d",&ch);
		switch(ch) 
		{
			case 1: push();
			break;
			case 2: pop();
			break;
			case 3: disp();
			break;
			case 4: exit(0);
			default:printf("Invalid choice **\n");
		}
	}
	return 0;
	getch();
}
void push()
{
	int p;
	if(top=N-1)
	{
		printf("Stack is full.\n");
		
	}
	else
	{
		printf("Enter an element to push : ");
		scanf("%d\n",&p);
		top++;
		stack[top]=p;
		
	}
}
void pop()
{
	if(top=-1)
	{
		printf("Stack is empty.\n");
		
	}
	else
	{
		printf("Deleted element is %d",stack[top]);
		top--;
	}
}
void disp()
{
	int i;
	if(top=-1)
	{
		printf("Stack is empty.\n");
		
	}
	else
	{
		printf("The element of stack is    :  \n\n  ");
		for(i=top;i>=0;i++)
		{
			printf("%d\n",stack[i]);
		}
	}
}
