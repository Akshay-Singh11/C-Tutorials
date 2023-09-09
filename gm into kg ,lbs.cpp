#include<stdio.h>
int main()
{
	float gm,kg,lbs;
	 printf(" Enter the weight in gram ");
	 scanf("%f",&gm);
	  
	  kg = gm/1000;
	  lbs =gm/453;
	  printf("weight = %f kg ",kg);
	  printf("weight = %f lbs" ,lbs);
	  return 0;
}