#include<stdio.h>
#include<conio.h>
int main()
{
	int n,rev=0,temp;
	printf("Enter a number : \n");
	scanf("%d",&n);
	temp=n;
	while(temp!=0)
	{
		rev=rev*10;
		rev=rev+temp%10;
		temp=temp/10;
	}
	if(n==rev)
	
		printf("%d is a palindrome number.\n",n);
	
	else
	
	
	printf("%d is not a palindrome number.\n",n);
	
	getch();
	return 0;
}
