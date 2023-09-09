#include<stdio.h>
int main()
{
	int a,b,c,d,e,f; 
	a=16;
	printf(" The value of a %d \n ",a);
	b=a++;
	printf(" The value of b %d \n ",b);	
	c=--b;
		printf(" The value of c %d \n ",c);
		c*=b;
			printf(" The value of c %d \n ",c);
			d=c++;
			printf(" The value of d %d \n ",d);
				c%=b;
				printf(" The value of c %d \n ",c);
					d/=a;
					printf(" The value of d %d \n ",d);
						e=++d;
							printf(" The value of e %d \n ",e);
							f=e--;
								printf(" The value of f %d \n ",f);
							return 0;
}