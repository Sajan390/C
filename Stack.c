#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stack
{
	int tos;
	int item[10];
};
void push(struct stack *ps);
void pop(struct stack *ps);
void disp(struct stack *ps);
void main()
{
	struct stack s;
	
	int choice;
	s.tos=-1;
	while(1)
	{
		printf("\t *** Menu ***\n");
		printf("1.Push\n");
		printf("2.Pop\n");
		printf("3.Top\n");
		printf("4.Display \n");
		printf("5.Exit \n");
		printf("Enter your choice \n");
		scanf("$d",&choice);
		switch(choice)
		{
			case 1:  push(&s);
			break;
			case 2:  pop(&s);
			break;
			case 3: printf("Top item is %d\n",s.item[s.tos]);
			break;
			case 4:  disp(&s);
			break;
			case 5: exit(1);
			default: 
			printf("Invalid choice");
			
		}
	getch();	
	}

}
void push(struct stack *ps)
{
	if(ps->s.tos==9)
	{
		printf("Stack is full.\n");
		return;
	}
	else
	{
		printf("Enter data : \n");
		
		
		scanf("%d",&ps->item[ps->tos]);	
		ps->tos++;	
	}
}
void pop(struct stack *ps)
{
	int x;
	if(ps->s.tos==-1)
	{
		printf("Stack is empty.\n");
		return;
	}
	else
	{
		x=ps->item[ps->tos];
		ps->tos=ps->tos-1;
		printf("Deleted data is %d.\n",x);
	}
}
void disp(struct stack *ps)
{
	int i;
	if(ps->s.tos==-1)
	{
		printf("Stack is empty. \n");
		return;
	}
	else
	
	{
		for(i=0;i<=ps->tos;i++)
		{
		
		printf("\n%d",ps->item[i]);
	    }
	}
}
