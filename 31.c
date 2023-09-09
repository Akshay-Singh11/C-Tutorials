#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter num1 = ");
scanf("%d",&a);
printf("Enter num2 = ");
scanf("%d",&b);
printf("Before swapping numbers \n");
printf("%d is num1 \n",a);
printf("%d is num2 \n",b);

    a=a^b;
    b=a^b;
    a=a^b;
    
    
printf("After swapping numbers \n");
printf("%d is num1 \n",a);
printf("%d is num2 \n",b);
 return 0;
}

    