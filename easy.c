#include<stdio.h>
main()
{
	int num1=0, num2=0;
	int addition,subtraction,multiplication,division=0;
	 
	
	printf("Enter the first number: ");
	scanf("%d",&num1);
	
	printf("Enter the second Number: ");
	scanf("%d",&num2);
	
	addition=num1+num2;
	subtraction=num1-num2;
	multiplication=num1*num2;
	division=num1/num2;
	
	printf("The Results Are: %d,%d,%d,%d",addition,subtraction,multiplication,division);
}
