#include<iostream>
#include<conio.h>
using namespace std;
class pgm
{
	protected:
		float len,bre;
		public:
			pgm(){
			}
			pgm(float l,float b)
			{
				len=l;
				bre=b;
			}
	virtual float peri()
	{
		return 2*(len+bre);
	}
	virtual float area()=0;
};
class rect:public pgm
{
	public:
		rect()
		{
		}
		rect(float l,float b):pgm(l,b){}
		float area()
		{
			return len*bre;
		}
};
class sqr:public pgm
{
	public:
	sqr(){}
	sqr(int l):pgm(l,l){
	}
	float peri(){
		return 4*len;
	}
	float area(){
		return len*len;
	}
};

int main()
{
	pgm *pp;
	rect r(2.5,7.9);
	pp=&r;
	cout<<"Perimeter of rect = "<<pp->peri();
	cout<<"\n Area of rectangle = "<<pp->area();
	sqr s(3.75);
	pp=&s;
	cout<<"\n perimeter of square= "<<pp->peri();
	cout<<"\n Area of square = "<<pp->area();
			
	
	getch();
	return 0;
}
