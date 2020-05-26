#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int stack[5],top=-1;

void push();
void pop();
void disp();

int main()
{
   	int m;

	while(1)
	{
		printf("\n*** Stack Menu ***");
		printf("1.Push \n");
		printf("2.Pop \n");
		printf("3.Display \n");
		printf("4.Exit \n");
	
    	printf("Enter your choice : \n");
		scanf("%d",&m);
		switch(m)
		{
			case 1 : push();
			break;
			case 2 : pop();
			break;
			case 3 : disp();
			break;
			case 4 :exit(0);
			default: printf("Invalid choice\n\n ");
		}
		
		
	}

getch();
return 0;

	
}
void push()
{
	int e;
	if(top=4)
	{
		printf("Stack is full.\n");
		
	}
	else
	{
		printf("Enter elment to push : \n");
		scanf("%d",&e);
		top++;
		stack[top]=e;
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
		printf("Deleted item is : %d",stack[top]);
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
		printf("\nStack is...\n");
		for(i=top;i>=0;--i)
		{
		
			printf("%d\n",stack[i]);
		}
	}

}
