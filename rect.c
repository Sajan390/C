#include<stdio.h>
#include<conio.h>
struct rect_t
{
	int left;
	int right;
	int top;
	int bottom;
};
int main(void)
{
	struct rect_t Myrect;
	Myrect.left=-4;
	Myrect.right=8;
	Myrect.top=6;
	Myrect.bottom=1;
	printf("\n Bottom left=(%d,%d)",Myrect.left,Myrect.bottom);
	printf("\nTop right= (%d,%d)", Myrect.right,Myrect.top);
}
