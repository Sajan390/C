// prints i stars
void printIStars(int i) {
  // Count (call it j) from 1 to i (inclusive)
  int j;
  for (j = 1; j <= i; j++) {
    // Print a star
    printf("*");
  }
}

// prints a triangle of n stars
void printStarTriangle(int n) {
  // Count (call it i) from 1 to n (inclusive)
  int i;
  for (i = 1; i <= n; i++) {
    // Print i stars
    printIStars (i);
    // Print a newline
    printf("\n");
  }
}
#include<stdio.h>
#include<conio.h>
int main()
{
	
	printStarTriangle(99999);
	getch();
	return 0;
}
