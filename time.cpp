#include<iostream>
#include<conio.h>
using namespace std;
class time
{
	int hr,min,sec;
	public:
		void input()
		{
			cout<<"Enter the hr : ";
			cin>>hr;
			cout<<"Enter the min : ";
			cin>>min;
			cout<<"Enter the sec : ";
			cin>>sec;
		
		}
		void sum(time A,time B)
		{
			hr=A.hr+B.hr;
			min=A.min+B.min;
			sec=A.sec+B.sec;
			if(sec>=60)
			{
				min=min+1;
			}
			if(min>=60)
			{
				hr=hr+1;
			}
			min=min%60;
			sec=sec%60;
			
		}
		void display()
		{
			cout<<hr<<":"<<min<<":"<<sec;
		}

};
int main()
{
	time A,B,C;
	A.input();
	B.input();
	C.sum(A,B);
	C.display();
	getch();
	return 0;

}
