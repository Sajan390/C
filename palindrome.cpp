#include<stdio.h>
#include<conio.h>
int main()
{
	int n,rev;
	printf("Enter a number : \n");
	scanf("%d",&n);
	while(n!=0)
	{
		rev=rev*10;
		rev=rev+n/10;
		n=n/10;
	}
	if(n==rev)
	{
		printf("It is a palindrome number.\n");
	}
	else
	printf("Not a palindrome number.\n");
	getch();
	return 0;
}
