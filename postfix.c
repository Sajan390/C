

#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<string.h>



int main()
{
	char post[40],sch;
	int i,cval,vstack[40],op1,op2,result=0;
	int tos=-1;
	printf("\n Enter valid postfix expression : \n");
	scanf("%s",post[i]);
	for(i=0;post[i]!='\0';i++)
	{
		sch=post[i];
		if(isalpha(sch))
		{
			printf("\nEnter the corresponding value of %c");
			scanf("%d",&cval);
			vstack[++tos]=cval;
		}
		else
		{
			op2=vstack[tos--];
			op1=vstack[tos--];
			switch(sch)
			{
				case '+': result=op1+op2;
				break;
				case '-': result=op1-op2;
				break;
				case '*': result=op1*op2;
				break;
				case '/': result=op1/op2;
				break;
				case '$': result=pow(op1,op2);
				break;	
			}
			vstack[++tos]=result;
		}
	}
printf("Evaluated value : %d",vstack[tos]);

getch();
return 0;
}
