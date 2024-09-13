#include<stdio.h>
#include<conio.h>

main()
{
	char op;
	double first,second;
	printf("enter op:");
	scanf("%c",op);
	printf("enter  two operned:");
	scanf("%1f %1f ",first ,second);
	first=45;
	second=67;
	switch(op)
	{
		case '+': printf("%1f+%1f=%1f",first,second,first+second);
		break;
		case '-': printf("%1f-%f=%1f",first ,second,first-second);
		break;
		case '*':printf("%1f*%1f=%1f",first,second,first*second);
		break;
		case '/':printf("%f/%1f=%1f",first,second,first/second);
		break;
		
		default :printf("error is not egilible");
		
	}
}
