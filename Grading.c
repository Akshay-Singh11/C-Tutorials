#include<stdio.h>
int main(){
	int A;
	printf("Enter your marks");
	scanf("%d",&A);
	
	if(A>=90 && A<=100){
		printf("your grade is A");
	}
	else if(	A>= 80 && A<=90){
		printf(" Your grade is B");
	}
	else if(	A>= 70 && A<=80){
		printf(" Your grade is C");
	}
		
    else if(	A>= 60 && A<=70){
		printf(" Your grade is D");
    }  
	else if(A>=50  && A<=60){
		printf("Your grade is E");
	}
	else if(A<=50);
	{
    ("Your Fail");
}
}