#include<stdio.h>
#include<conio.h>

 main()
{
	int a,b,c,d;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("enter c:");
	scanf("%d",&c);
	printf("enter d:");
	scanf("%d",&d);
	
	if(a>=b)
	{
		a,c,d;
		if(a>=c)
		{
		 if(a>=d)
		 {
		 	printf("a is max");
			 }
			 else
			 {
			 	printf("d is max");
				 }	
		}
		else
		{
		  if(c>=d)
		  {
		  	printf(" c is max");
			  }
			  else
			  {
			  	printf("d is max");
				  }	
		}
	}
	else(b>=c)
	{
		b,c,d;
		if(b>=c)
		{
		 if(b>=d)
		 {
		 	printf(" b is max");
			 }
			 else
			 {
			 	printf("d is max");
				 }	
		}
		else
		{
		 if(c>=d)
		 {
		 	printf(" c is max");
			 }
			 else
			 {
			 	printf("d is max");
				 }	
		}
	}
}
	

