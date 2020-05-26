#include<stdio.h>
#include<conio.h>
int main()
{
	int g (int x, int n) 
	{
		int i;
		for (i = 0; i < n; i++)
		{
			if (i % 2 == 0)
			{
				x *= i + 1;
				
      			continue;
			}
			x--;
			if(x==0)
			{
				
				break;
			}
			
		}
		return x;
		printf("%d",x);
	}
	int e;
	e=g(2,3);
	printf("%d",e);
	getch();
	return 0;
}
