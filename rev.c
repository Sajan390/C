#include<stdio.h>


int main()
{
	int a[9]={34,56,54,32,67,89,90,32,21};
	int i;
	for(i=0;i<9;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("\nAfter Reversing\n");
	for(i=8;i>=0;i--)
	{
		printf("\n%d",a[i]);
	};getch();
	return 0;



}
