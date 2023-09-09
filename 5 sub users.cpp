#include<stdio.h> 
int main()
{
   int english , math , physics , chemistry , computer,S;
	printf(" enter the marks of english");
	scanf(" %d", &english);
	printf(" enter the marks of math");
	scanf(" %d", &math);
	printf(" enter the marks of physics");
	scanf(" %d", &physics);
	printf(" enter the marks of chemistry");
	scanf(" %d", &chemistry);
	printf(" enter the marks of computer");
	scanf(" %d", &computer);
	S=english,math,physics,chemistry,computer/5;
	printf(" you score card total is %d %%",S);

}