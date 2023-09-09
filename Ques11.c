#include<stdio.h>
#include<math.h>
int main()
{
	//area of triangle using heron's formula.
	int a,b,c,s;
	float area,Ans;
	printf("Enter the value of a = %d ");
	scanf("%d",&a);
	
	printf("Enter the value of b = %d ");
	scanf("%d",&b);
		printf("Enter the value of c = %d ");
	scanf("%d",&c);
	
	s=(a+b+c)/2;
	
	area=s*(s-a)*(s-b)*(s-c);
	printf("%d \n",&area);
	
	Ans=sqrt(area);
	printf("Area of triangle %d \n",&Ans);
	
	return 0;
	
}