#include<stdio.h>
#include<conio.h>

enum threatlevel
{
	LOW,
	GUARDED,
	ELEVATED,
	HIGH,
	SEVERE
};
void printthreat(enum threatlevel threat)
{
	switch(threat)
	{
		case LOW:
      printf("Green/Low.\n"); 
      break;
    case GUARDED:
      printf("Blue/Guarded.\n"); 
      break;
    case ELEVATED:
      printf("Yellow/Elevated.\n"); 
      break;
    case HIGH:
      printf("Orange/High.\n"); 
      break;
    case SEVERE:
      printf("Red/Severe.\n");
      break;
	}		
}
void printshoes(enum threatlevel mythreat)
{
	if(mythreat>=ELEVATED)
	{
		printf("Please take off your shoes.\n");
	}
	else{
		printf("Please leave your shoes on.\n");
	}
}
int main()
{
	enum threatlevel Mythreat=HIGH;
	printf("Current threat level is : \n");
	printthreat(Mythreat);
	printshoes(Mythreat);
	int x = 5;
	double d1 = 11/x;
	double d2 = 11/(double)x;
	printf("",);
	getch();
	return 0;
}
