#include<stdio.h>
int main()
{
	int a, b,c;
	printf(" Enter the value of a ");
	scanf(" %d ",&a );
	printf(" Enter the value of b ");
	scanf(" %d" ,&b );
	printf(" The value of a before swapping is %d ",a);
	printf(" The value of b before swapping is %d ",b);
	b=a +b ;
	a=b-a ;
	b=b-a ;
	printf(" The value of a after swapping is %d ",a);
	printf(" The value of b after swapping is %d ",b);
	
	return 0;
	
}