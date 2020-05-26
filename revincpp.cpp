#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
	long int n,rev=0,temp;
	cout<<"Enter a number : \n";
	cin>>n;
	temp=n;
	while(temp!=0)
	{
		rev=rev*10;
		rev=rev+temp%10;
		temp=temp/10;
	}
	if(n==rev)
	
	cout<<"It is a palindrome.\n";
	else
	cout<<"Not a palindrome.\n";

	getch();
	return 0;
}
