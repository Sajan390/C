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
	printf("%d",*p);
	getch();
	return 0;
	
	
}
