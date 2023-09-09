#include<stdio.h>
int main()
{ 
 int a,b,c,d;
 float pi;
 char name;
 double akshay;
 
 a=sizeof(a);
 b=sizeof(pi);
 c=sizeof(name);
 d=sizeof(akshay);
 
 printf("The bit size of int data type is %d \n ",a);
  printf("The bit size of float data type is %d \n",b);
 printf("The bit size of char data type is %d  \n ",c);
 printf("The bit size of double data type is %d \n",d);

 return 0;
 
 
}