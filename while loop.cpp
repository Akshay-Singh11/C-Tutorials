#include<stdio.h>
int main()
{
	int i =10, n;
	
	printf(" Enter the number of a table");
	scanf("%d",&n);
	
	while(i>=1) {
		printf(" %d",i*n);
		i--;
		printf("\n");
    }
}
