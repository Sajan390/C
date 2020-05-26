#include<stdio.h>
#include<conio.h>
int main()
{
	int n=1655;
	while(n!=0)
	{
		n=n%10;
		printf("%d\n",n);
		continue;
	}
	getch();
	return 0;
}
