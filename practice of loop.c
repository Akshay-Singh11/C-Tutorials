#include<stdio.h>
int main(){
	int a,b,c,d,e,f;
	a=14 ,c=4;
	printf(" the value of a %d\n",a);
	b=a++;
		printf("the value of b %d\n",b);
		c*=a;
			printf("the value of c %d\n",c);
			d=b--;
				printf("the value of d %d\n",d);
				d%=a;
					printf("the value of d %d\n",d);
					e=++d;
						printf("the value of e %d\n",e);
							f=--e;
							printf("the value of f %d\n",f);
							
							return 0;
	
}