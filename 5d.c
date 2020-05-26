#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	long int a,b,c,d,e,s,sum;
	printf("Enter five digit no : \n");
	scanf("%d",&s);
	a=s%10;
	s=s/10;
	b=s%10;
	s=s/10;
	c=s%10;
	s=s/10;
	d=s%10;
	s=s/10;
	e=s%10;
	sum=a+b+c+d+e;
	printf("\nThe sum of five digits of number %ld is %ld.\n",s,sum);
	getch();
	return 0;

}
