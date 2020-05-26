#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct stack
{
	int item[10];
	int tos;
};

void push(struct stack *ps);
void pop(struct stack *ps,int x);
void disp(struct stack *ps);
int main()
{
	struct stack s;
	s.tos=-1;
	int choice;
	clrscr();
	while(1)
	{
		printf("\n\tMenu");
		printf("\n1.Push");
		printf("\n2.Pop");
		printf("\n3.Top");
		printf("\n4.Display all");
		printf("\n\tEnter choice : ");
		scanf("%d",&choice);
		switch(choice);
		{
			case 1:
				push(&s);
				break;
				case 2:
					pop(&s);
					break;
					case 3:
						printf("\nTopitem=%d",s.item[s.tos]);
						break;
						case 4:
							disp(&s);
							return;
							case 5:
								exit (1);
								default:
									printf("Invalid choice");
									
		}
		printf("\n");
		printf("\n");
		
		
		
		
	}
	getch();
	return 0;
}
void push(struct stack *ps)
{
	if (ps->s.tos==9)
	{
		printf("Stack full\n");
		return;
	}
	ps->tos++;
	printf("\nEnter data : ");
	scanf("%d",&ps->item[ps->tos]);
}
void pop(struct stack *ps,int x)
{
	if(ps->tos==-1)
	{
		printf("Stack Empty");
		return;
	}
	x=ps->item[ps->tos];
	ps->tos--;
	printf("Poped data : %d ",x);
}
void disp(struct stack *ps)
{
	for(int i=0;i<=ps->tos;i++)
	{
		printf("\n%d"*ps->item[i]);
	}
}



