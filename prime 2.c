#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter a number ");
	scanf("%d",&n);
	int c=0;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		c++;
	}
	if(c==0)
	printf("%d is a prime no",n);
	else
	printf("%d is not a prime no",n);
}