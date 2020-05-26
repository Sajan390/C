#include<stdio.h>
#include<conio.h>
int main()
{
	int f(int n)
	{
		int ans = 0;
		int i;
  		for (i = 1; i < n; i++)
  		{
  			if (i < n/2) 
			  {
			  	ans-=i;
			  	
			  }
			else
			{
				ans+=i;
			
				
			}
			  	
  
		}
	
		return ans;
	
	}
	int e;
	e=f(7);
	printf("%d",e);
	getch();
	return 0;
}
