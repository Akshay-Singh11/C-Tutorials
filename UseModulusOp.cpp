#include<stdio.h>
int main()
{
	int a,s;
	int r;
	
	printf("Enter the number = ");
	scanf("%d",&a);
	printf("a = %d",a );
	
	printf(" Enter the number =  ");
	scanf("%d",&s);
    printf("n = %d",s );


    r = a% s ;
		
    printf("r = %d ",r );
    return 0;   
}