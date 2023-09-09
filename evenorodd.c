#include<stdio.h>
int main()
{
	int num,r;
	printf(" Enter the  number ");
	scanf("%d",&num);
	
	r = num%2;
	if (r== 1)
	{
		printf(" %d is odd",num);
		
	}
	else 
	{
	 printf(" %d is even",num);	
	}
	
	return 0;
	}