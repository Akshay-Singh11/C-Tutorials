#include<stdio.h>
int main()
{
	int num, flag = 0;
	scanf("%d",&num);
	if(num<2)
	{
		printf("this is not a prime no.");
	}
	else if(num == 2)
	{
		printf(" this is a prime no. ");
	}
	else
	{
		if(num % 2 == 0)
		{
			printf("this is not a prime no.");

		}
		else
		{
			for(int i = 3; i < num/2; i += 2)
			{
				if(num % i == 0)
				{
//					printf("this is not a prime no.");
					flag = 1;
					break;
				}
			}
			if(flag == 0)
				printf("This is a prime No.");
			else
				printf("This is not a prime no.");
		}
		
	}
	
}