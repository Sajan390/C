#include<iostream>
#include<conio.h>
using namespace std;
class student
{
	int s,h;
	char name[40];
	public:
	void display()
	{
		cout<<"Enter name of student : "<<endl;
		cin>>name;
		cout<<"Enter roll no : "<<endl;
		cin>>s;
		
		cout<<"Enter code : "<<endl;
		cin>>h;
	}
	void disp()
	{
	
		cout<<name<<endl;
		
		cout<<s<<endl;

		cout<<h;
	}
};
int main()
{
student s;
s.display();
s.disp();
getch();
return 0;
}
