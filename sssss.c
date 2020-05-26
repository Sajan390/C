#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main()
{
	int t=19;
	int *p=&t,*q;

	q=p;
	printf("%d\t%d",*p,*q);
	getch();
	return 0;
	
	
}
