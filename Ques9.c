#include<stdio.h>
int main()
{
	// Swap two numbers.
	int a,b;
	printf("Enter the number a = %d");
	scanf("%d",&a);
	
	printf("Enter the numer b = %d");
	scanf("%d",&b);
	 
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("The swapped of first number = %d",a);
	printf("The swapped of second number = %d ",b);
	
	 return 0;
	 
	
}