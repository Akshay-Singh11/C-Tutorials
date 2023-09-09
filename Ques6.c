#include<stdio.h>
int main()
{
	//Compute Quotient and Remainder.
	int a,b,Rem,Quo;
	printf("Enter the number = ");
	scanf("%d",&a);
	
	printf("Enter the number = ");
	scanf("%d",&b);
	
	Rem=a%b;
	Quo=a/b;
	
	printf("%d \n ",Rem);
	printf("%d ",Quo);
	 return 0;
	 
	
	
	
	
}