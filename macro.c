#include<stdio.h>


int main()
{
	int a[9]={34,56,54,32,67,89,90,32,21};
	int i;
	for(i=0;i<9;i++)
	{
		printf("%d\n",a[i]);
	}
 for(i = 8; i>=0; i--)
    {
        printf("%d\t", a[i]);
    }
	return 0;
	getch();
	
	
}
