#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
};
typedef struct node lnode;
lnode *start=NULL;
void c_linkedlist();
void disp();
void in_beg();
void in_end();
void in_position();
void delete_beg();
void delete_end();
void delete_position();
void delete_linkedlist();
void search_linkedlist();
int main()
{
	int option,flag=1;
	printf("\n\t***MENU***");
	printf("\n\t1.Create a list");
	printf("\n\t2.Display the list");
	printf("\n\t3.Add a node in the beginning");
	printf("\n\t4.Add a node in the end");
	printf("\n\t5.Add a node at nth position");
	printf("\n\t6.Delete a node in the begigning");
	printf("\n\t7.Delete a node in the end");
	printf("\n\t8.Delete a node at  nth  position");
	printf("\n\t9.Delete the entire list");
	printf("\n\t10.Search in the list");
	printf("\n\t11.EXIT");
	printf("\n\t");
	do
	{
		printf("Enter your option : \n");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
			c_linkedlist();
			printf("Linked list created.\n");
			break;
			case 2: 
			disp();
			break;
			case 3:
			in_beg();
			break;
			case 4:
				in_end();
				break;
				case 5:
					in_position();
					break;
					case 6:
						delete_beg();
						break;
						case 7:
							delete_end();
							break;
							case 8:
								delete_position();
								break;
								case 9:
									delete_linkedlist();
									printf("Linked list created.\n");
									break;
									case 10:
										search_linkedlist();
										case 11:
											flag=0;
											break;
											default:
												printf("Invalid  choice.\n");
		
		}
	}
	while(flag);
	getch();
	return 0;
}
void c_linkedlist()
{
	lnode *new_node,*ptr;
	int data,ch;
	do
	{
		printf("\nEnter data : ");
		scanf("%d",&data);
		new_node=(lnode*)malloc(sizeof(lnode));
		new_node->next=data;
		if(start==NULL)
		{
			new_node->next=NULL;
			start=new_node;
		}
		else
		{
			ptr=start;
			while(ptr->next!=NULL)
			ptr=ptr->next;
			ptr->next=new_node;
			new_node->next=NULL;
			
		}
		printf("\nDo you want  add more data? If yes press 1:\n");
		scanf("%d",&ch);
	}
	while(ch==1);
}
void disp()
{
	lnode *ptr;
	if(start==NULL)
	{
		printf("\nList is empty.\n");
		return;
	}
	ptr=start;
	printf("\nLinked list datas are : \n");
	while(ptr!=NULL)
	{
		printf("\t%d",ptr->info);
		ptr=ptr->next;
	}
}
void in_beg()
{
	lnode *new_node;
	int data;
	printf("\nEnter the data : \n");
	scanf("%d",&data);
	new_node=(lnode*)malloc(sizeof(lnode));
	new_node->info=data;
	new_node->next=start;
	start=new_node;
}
void in_beg()
{
	
}
