#include<stdio.h>
int main()
{
	int i,n;
	printf(" enter the number");
	scanf(" %d",&n);
	printf("In Increasing Order : \n");
	for( i= 1;i<=10;i++) {
		printf(" %d",i*n);
		printf("\n"); //to insert new line
	}
	printf("In Decreasing Order : \n");
	for( i= 10;i>=1;i--) {
		printf(" %d",i*n);
		printf("\n"); //to insert new line
	}
}