#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int f (int n) {
  int ans = 0;
  int i;
  for (i = 1; i < n; i++) {
    if (i < n/2) {
      ans -= i;
    }
    else {
      ans += i;
    }
  }
  return ans;
}
	printf("%d",f(9));
	getch();
	return 0;

}

