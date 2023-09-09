#include<stdio.h>
int main()
{
	float cm, m, km;
	
	printf("Enter the distance in centimeter = ");
	
	scanf("%f", &cm);
	
	m = cm / 100;
	
	km = cm / 1000;
	
	printf("Distance in meter = %f m, Distance in %f km ",m,km);
   
	
	return 0;
}



