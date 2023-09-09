#include<stdio.h>
int main()
{
	int a,b,rem,quo;
	printf("Enter 1st number = ");
	scanf("%d",&a);
	printf("Enter 2nd Number = ");
	scanf("%d",&b);
	
	quo = a/b;
	
	rem = a%b;
	
	printf("Remainder = %d\n", rem);
	
	printf("Quotient = %d",quo);
	
	return 0;
}