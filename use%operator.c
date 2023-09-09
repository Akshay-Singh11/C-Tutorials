#include<stdio.h>
int main()
{
	float a,n;
	int r;
	
	printf("Enter the number : ");
	scanf("%f",&a);
	printf("a = %f",a);
	
	printf(" Enter the number = ");
	scanf("%f",&n);
    printf("n = %f",n);


    r = a % n;
		
    printf("r = %d ",r);
    return 0;   
}