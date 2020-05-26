#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
	int rp,ip;
	public:
		void getdata()
		{
			cout<<"Enter th real and imaginary part : \n";
			cin>>rp>>ip;
		}
		void putdata()
		{
			cout<<"\n"<<rp<<"+i"<<ip;
		}
		void sum(complex A,complex B)
		{
			rp=A.rp+B.rp;
			ip=A.ip+B.ip;
			
		}
	
	
};
int main()
{
	complex c1,c2,c3;
	c1.getdata();
	c1.putdata();
	c2.getdata();
	c2.putdata();
	c3.sum(c1,c2);
	
	getch();
	return 0;
}
