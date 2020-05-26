#include<iostream>
#include<conio.h>
#ifndef MAX 
#define MAX(a,b) (((a)>(b))? a:b)
#endif
using namespace std;
int main()
{
	cout<<MAX(10,20)<<endl;
	getch();
	return 0;
	
}
