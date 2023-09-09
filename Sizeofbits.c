#include<stdio.h>
int main()
{
	int a,b,c,d;
	char akshay;
	float pi;
	long double moni;

	a = sizeof(a);
	b = sizeof(akshay);
	c = sizeof(pi);
	d = sizeof(moni);
	
	printf(" The bit size of int data type is %d  \n",a);
	printf(" The bit size of char data type is %d  \n",b);
	printf(" The bit size of float data type is %d  \n",c);
	printf(" The bit size of  long double data type is %d \n",d);
	return 0;
}